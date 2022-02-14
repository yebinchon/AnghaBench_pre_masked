
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ loopback_mode; } ;
struct niu {int phy_addr; TYPE_1__ link_config; } ;


 scalar_t__ VAR_0 ;
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
 int FUNC_0 (struct niu*,int ,int ,int ) ;
 int FUNC_1 (struct niu*,int ,int ,int ,int) ;
 int FUNC_2 (struct niu*,int ) ;
 int FUNC_3 (struct niu*,int ) ;

__attribute__((used)) static int FUNC_4(struct niu *VAR_11)
{
 int VAR_12;


 VAR_12 = FUNC_3(VAR_11, VAR_5);
 if (VAR_12)
  return VAR_12;


 VAR_12 = FUNC_2(VAR_11, VAR_6);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_0(VAR_11, VAR_11->phy_addr, VAR_10,
   VAR_4);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_12 |= VAR_3;

 VAR_12 = FUNC_1(VAR_11, VAR_11->phy_addr, VAR_10,
    VAR_4, VAR_12);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_12 = FUNC_0(VAR_11, VAR_11->phy_addr, VAR_9,
   VAR_8);
 if (VAR_12 < 0)
  return VAR_12;

 if (VAR_11->link_config.loopback_mode == VAR_0)
  VAR_12 |= VAR_7;
 else
  VAR_12 &= ~VAR_7;

 VAR_12 = FUNC_1(VAR_11, VAR_11->phy_addr, VAR_9,
    VAR_8, VAR_12);
 if (VAR_12 < 0)
  return VAR_12;


 return FUNC_1(VAR_11, VAR_11->phy_addr, VAR_9,
     VAR_1, VAR_2);
}
