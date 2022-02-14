
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_wolinfo {int wolopts; } ;
struct bnx2x {int flags; int wol; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct bnx2x*,int ) ;
 int FUNC_2 (struct bnx2x*,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 struct bnx2x* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_6, struct ethtool_wolinfo *VAR_7)
{
 struct bnx2x *VAR_8 = FUNC_3(VAR_6);

 if (VAR_7->wolopts & ~VAR_4) {
  FUNC_0(VAR_0, "WOL not supported\n");
  return -VAR_2;
 }

 if (VAR_7->wolopts & VAR_4) {
  if (VAR_8->flags & VAR_3) {
   FUNC_0(VAR_0, "WOL not supported\n");
   return -VAR_2;
  }
  VAR_8->wol = 1;
 } else
  VAR_8->wol = 0;

 if (FUNC_1(VAR_8, VAR_5))
  FUNC_2(VAR_8, VAR_5, VAR_1);

 return 0;
}
