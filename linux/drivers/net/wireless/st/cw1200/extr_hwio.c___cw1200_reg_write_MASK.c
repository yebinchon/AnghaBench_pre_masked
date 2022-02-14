
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct cw1200_common {int hwbus_priv; TYPE_1__* hwbus_ops; } ;
struct TYPE_2__ {int (* hwbus_memcpy_toio ) (int ,int ,void const*,size_t) ;} ;


 int FUNC_0 (int,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,void const*,size_t) ;

__attribute__((used)) static int FUNC_3(struct cw1200_common *VAR_0, u16 VAR_1,
    const void *VAR_2, size_t VAR_3, int VAR_4)
{
 u16 VAR_5;
 u32 VAR_6;


 VAR_5 = FUNC_1(VAR_1);
 VAR_6 = FUNC_0(VAR_4, 0, 0, VAR_5);

 return VAR_0->hwbus_ops->hwbus_memcpy_toio(VAR_0->hwbus_priv,
      VAR_6,
      VAR_2, VAR_3);
}
