
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phy {int dummy; } ;
struct ns2_phy_driver {scalar_t__ icfgdrd_regs; } ;
struct ns2_phy_data {scalar_t__ new_state; struct ns2_phy_driver* driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct ns2_phy_data* FUNC_0 (struct phy*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct phy *VAR_4)
{
 struct ns2_phy_data *VAR_5 = FUNC_0(VAR_4);
 struct ns2_phy_driver *VAR_6 = VAR_5->driver;
 u32 VAR_7;

 VAR_7 = FUNC_1(VAR_6->icfgdrd_regs + VAR_3);

 if (VAR_5->new_state == VAR_2) {
  VAR_7 &= ~VAR_0;
  VAR_7 |= VAR_1;
 } else {
  VAR_7 &= ~VAR_1;
  VAR_7 |= VAR_0;
 }
 FUNC_2(VAR_7, VAR_6->icfgdrd_regs + VAR_3);

 return 0;
}
