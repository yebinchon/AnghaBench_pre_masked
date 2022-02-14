
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;
struct mii_phy {int status; int phy_addr; } ;


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
 int FUNC_0 (struct net_device*,int ,int ) ;
 int FUNC_1 (struct net_device*,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_11, struct mii_phy *VAR_12)
{
 u16 VAR_13;
 u16 VAR_14;

 VAR_14 = FUNC_0(VAR_11, VAR_12->phy_addr, VAR_6);
 VAR_14 = FUNC_0(VAR_11, VAR_12->phy_addr, VAR_6);

 VAR_13 = VAR_1 |
  ((VAR_12->status & VAR_9)? VAR_4:0) |
  ((VAR_12->status & VAR_8) ? VAR_3:0) |
  ((VAR_12->status & VAR_10) ? VAR_5:0)|
  ((VAR_12->status & VAR_7) ? VAR_2:0);

 FUNC_1(VAR_11, VAR_12->phy_addr, VAR_0, VAR_13);
}
