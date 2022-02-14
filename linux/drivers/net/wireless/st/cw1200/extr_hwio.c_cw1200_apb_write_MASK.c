
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct cw1200_common {int hwbus_priv; TYPE_1__* hwbus_ops; } ;
struct TYPE_2__ {int (* unlock ) (int ) ;int (* lock ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cw1200_common*,int ,void const*,size_t,int ) ;
 int FUNC_1 (struct cw1200_common*,int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct cw1200_common *VAR_3, u32 VAR_4, const void *VAR_5,
   size_t VAR_6)
{
 int VAR_7;

 if ((VAR_6 / 2) >= 0x1000) {
  FUNC_2("Can't write more than 0xfff words.\n");
  return -VAR_0;
 }

 VAR_3->hwbus_ops->lock(VAR_3->hwbus_priv);


 VAR_7 = FUNC_1(VAR_3, VAR_1, VAR_4);
 if (VAR_7 < 0) {
  FUNC_2("Can't write address register.\n");
  goto out;
 }


 VAR_7 = FUNC_0(VAR_3, VAR_2,
     VAR_5, VAR_6, 0);
 if (VAR_7 < 0) {
  FUNC_2("Can't write data port.\n");
  goto out;
 }

out:
 VAR_3->hwbus_ops->unlock(VAR_3->hwbus_priv);
 return VAR_7;
}
