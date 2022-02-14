
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
 int FUNC_0 (struct niu*,int ,int ,int ) ;
 int FUNC_1 (struct niu*,int ) ;

__attribute__((used)) static int FUNC_2(struct niu *VAR_17, int *VAR_18)
{
 int VAR_19, VAR_20, VAR_21, VAR_22;

 VAR_20 = 0;

 VAR_19 = FUNC_0(VAR_17, VAR_17->phy_addr, VAR_7,
   VAR_1);
 if (VAR_19 < 0)
  goto out;


 VAR_19 = FUNC_0(VAR_17, VAR_17->phy_addr, VAR_7,
   VAR_6);
 if (VAR_19 < 0)
  goto out;

 VAR_21 = ((VAR_19 & VAR_5) ? 1 : 0);


 VAR_19 = FUNC_0(VAR_17, VAR_17->phy_addr, VAR_8,
   VAR_6);
 if (VAR_19 < 0)
  goto out;

 VAR_19 = FUNC_0(VAR_17, VAR_17->phy_addr, VAR_8,
   VAR_6);
 if (VAR_19 < 0)
  goto out;

 VAR_22 = ((VAR_19 & VAR_5) ? 1 : 0);


 VAR_19 = FUNC_0(VAR_17, VAR_17->phy_addr, VAR_9,
   VAR_2);
 if (VAR_19 < 0)
  goto out;

 if (VAR_19 == (VAR_10 | VAR_14 |
      VAR_13 | VAR_12 |
      VAR_11 | VAR_15 |
      0x800))
  VAR_20 = (VAR_21 && VAR_22) ? 1 : 0;

 VAR_17->link_config.active_speed = VAR_16;
 VAR_17->link_config.active_duplex = VAR_0;
 VAR_19 = 0;
out:
 FUNC_1(VAR_17, (VAR_20 ?
     VAR_4 :
     VAR_3));

 *VAR_18 = VAR_20;
 return VAR_19;
}
