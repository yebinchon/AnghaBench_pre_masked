
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct cw1200_common {int hwbus_priv; TYPE_1__* hwbus_ops; } ;
struct TYPE_2__ {int (* hwbus_memcpy_fromio ) (int ,int ,void*,size_t) ;} ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ,void*,size_t) ;

__attribute__((used)) static int FUNC_5(struct cw1200_common *VAR_1, u16 VAR_2,
        void *VAR_3, size_t VAR_4, int VAR_5)
{
 u16 VAR_6;
 u32 VAR_7;


 if (FUNC_2(((unsigned long)VAR_3 & 3) && (VAR_4 > 4))) {
  FUNC_3("buffer is not aligned.\n");
  return -VAR_0;
 }


 VAR_6 = FUNC_1(VAR_2);
 VAR_7 = FUNC_0(VAR_5, 0, 0, VAR_6);

 return VAR_1->hwbus_ops->hwbus_memcpy_fromio(VAR_1->hwbus_priv,
        VAR_7,
        VAR_3, VAR_4);
}
