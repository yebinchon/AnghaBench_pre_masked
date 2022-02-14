
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct cw1200_common {int hwbus_priv; TYPE_1__* hwbus_ops; } ;
struct TYPE_2__ {int (* unlock ) (int ) ;int (* lock ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cw1200_common*,int ,void*,size_t,int ) ;
 int FUNC_1 (struct cw1200_common*,int ,int*) ;
 int FUNC_2 (struct cw1200_common*,int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

int FUNC_7(struct cw1200_common *VAR_3, u32 VAR_4, void *VAR_5,
    size_t VAR_6, u32 VAR_7, u16 VAR_8)
{
 u32 VAR_9 = 0;
 int VAR_10, VAR_11;

 if ((VAR_6 / 2) >= 0x1000) {
  FUNC_4("Can't read more than 0xfff words.\n");
  return -VAR_0;
 }

 VAR_3->hwbus_ops->lock(VAR_3->hwbus_priv);

 VAR_11 = FUNC_2(VAR_3, VAR_2, VAR_4);
 if (VAR_11 < 0) {
  FUNC_4("Can't write address register.\n");
  goto out;
 }


 VAR_11 = FUNC_1(VAR_3, VAR_1, &VAR_9);
 if (VAR_11 < 0) {
  FUNC_4("Can't read config register.\n");
  goto out;
 }


 VAR_11 = FUNC_2(VAR_3, VAR_1,
     VAR_9 | VAR_7);
 if (VAR_11 < 0) {
  FUNC_4("Can't write prefetch bit.\n");
  goto out;
 }


 for (VAR_10 = 0; VAR_10 < 20; VAR_10++) {
  VAR_11 = FUNC_1(VAR_3, VAR_1, &VAR_9);
  if (VAR_11 < 0) {
   FUNC_4("Can't check prefetch bit.\n");
   goto out;
  }
  if (!(VAR_9 & VAR_7))
   break;

  FUNC_3(VAR_10);
 }

 if (VAR_9 & VAR_7) {
  FUNC_4("Prefetch bit is not cleared.\n");
  goto out;
 }


 VAR_11 = FUNC_0(VAR_3, VAR_8, VAR_5, VAR_6, 0);
 if (VAR_11 < 0) {
  FUNC_4("Can't read data port.\n");
  goto out;
 }

out:
 VAR_3->hwbus_ops->unlock(VAR_3->hwbus_priv);
 return VAR_11;
}
