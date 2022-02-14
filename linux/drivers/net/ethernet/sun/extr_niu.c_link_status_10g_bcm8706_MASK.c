
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int active_duplex; int active_speed; } ;
struct niu {TYPE_1__ link_config; int phy_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (struct niu*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct niu *VAR_19, int *VAR_20)
{
 int VAR_21, VAR_22;
 VAR_22 = 0;

 VAR_21 = FUNC_0(VAR_19, VAR_19->phy_addr, VAR_4,
   VAR_5);
 if (VAR_21 < 0 || VAR_21 == 0xffff)
  goto out;
 if (!(VAR_21 & VAR_16)) {
  VAR_21 = 0;
  goto out;
 }

 VAR_21 = FUNC_0(VAR_19, VAR_19->phy_addr, VAR_1,
   VAR_0);
 if (VAR_21 < 0)
  goto out;

 if (!(VAR_21 & VAR_8)) {
  VAR_21 = 0;
  goto out;
 }

 VAR_21 = FUNC_0(VAR_19, VAR_19->phy_addr, VAR_2,
   VAR_3);
 if (VAR_21 < 0)
  goto out;
 if (VAR_21 != (VAR_9 |
      VAR_14 |
      VAR_15 |
      VAR_13 |
      VAR_12 |
      VAR_11 |
      VAR_10)) {
  VAR_21 = 0;
  VAR_19->link_config.active_speed = VAR_18;
  VAR_19->link_config.active_duplex = VAR_7;
  goto out;
 }

 VAR_22 = 1;
 VAR_19->link_config.active_speed = VAR_17;
 VAR_19->link_config.active_duplex = VAR_6;
 VAR_21 = 0;

out:
 *VAR_20 = VAR_22;
 return VAR_21;
}
