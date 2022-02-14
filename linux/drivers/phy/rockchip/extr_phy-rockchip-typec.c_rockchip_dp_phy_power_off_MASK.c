
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_typec_phy {scalar_t__ mode; int lock; scalar_t__ base; } ;
struct phy {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct rockchip_typec_phy* FUNC_2 (struct phy*) ;
 int FUNC_3 (struct rockchip_typec_phy*) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct phy *VAR_4)
{
 struct rockchip_typec_phy *VAR_5 = FUNC_2(VAR_4);

 FUNC_0(&VAR_5->lock);

 if (VAR_5->mode == VAR_3)
  goto unlock;

 VAR_5->mode &= ~VAR_2;

 FUNC_4(VAR_1, VAR_5->base + VAR_0);

 if (VAR_5->mode == VAR_3)
  FUNC_3(VAR_5);

unlock:
 FUNC_1(&VAR_5->lock);
 return 0;
}
