
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_iodomain_supply {int nb; scalar_t__ reg; } ;
struct rockchip_iodomain {struct rockchip_iodomain_supply* supplies; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 struct rockchip_iodomain* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (scalar_t__,int *) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_1)
{
 struct rockchip_iodomain *VAR_2 = FUNC_0(VAR_1);
 int VAR_3;

 for (VAR_3 = VAR_0 - 1; VAR_3 >= 0; VAR_3--) {
  struct rockchip_iodomain_supply *VAR_4 = &VAR_2->supplies[VAR_3];

  if (VAR_4->reg)
   FUNC_1(VAR_4->reg,
            &VAR_4->nb);
 }

 return 0;
}
