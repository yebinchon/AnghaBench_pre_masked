
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ingenic_ecc_params {int dummy; } ;
struct ingenic_ecc {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* correct ) (struct ingenic_ecc*,struct ingenic_ecc_params*,int *,int *) ;} ;


 int FUNC_0 (struct ingenic_ecc*,struct ingenic_ecc_params*,int *,int *) ;

int FUNC_1(struct ingenic_ecc *VAR_0,
   struct ingenic_ecc_params *VAR_1,
   u8 *VAR_2, u8 *VAR_3)
{
 return VAR_0->ops->correct(VAR_0, VAR_1, VAR_2, VAR_3);
}
