
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_typec_phy {scalar_t__ mode; int lock; } ;
struct phy {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct rockchip_typec_phy* FUNC_2 (struct phy*) ;
 int FUNC_3 (struct rockchip_typec_phy*,int) ;
 int FUNC_4 (struct rockchip_typec_phy*) ;

__attribute__((used)) static int FUNC_5(struct phy *VAR_3)
{
 struct rockchip_typec_phy *VAR_4 = FUNC_2(VAR_3);

 FUNC_0(&VAR_4->lock);
 FUNC_3(VAR_4, 0);

 if (VAR_4->mode == VAR_1)
  goto unlock;

 VAR_4->mode &= ~(VAR_2 | VAR_0);
 if (VAR_4->mode == VAR_1)
  FUNC_4(VAR_4);

unlock:
 FUNC_1(&VAR_4->lock);
 return 0;
}
