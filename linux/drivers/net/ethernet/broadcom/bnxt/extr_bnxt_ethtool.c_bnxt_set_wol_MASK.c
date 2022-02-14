
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_wolinfo {int wolopts; } ;
struct bnxt {int flags; int wol; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct bnxt*) ;
 scalar_t__ FUNC_1 (struct bnxt*) ;
 struct bnxt* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_4, struct ethtool_wolinfo *VAR_5)
{
 struct bnxt *VAR_6 = FUNC_2(VAR_4);

 if (VAR_5->wolopts & ~VAR_3)
  return -VAR_2;

 if (VAR_5->wolopts & VAR_3) {
  if (!(VAR_6->flags & VAR_0))
   return -VAR_2;
  if (!VAR_6->wol) {
   if (FUNC_0(VAR_6))
    return -VAR_1;
   VAR_6->wol = 1;
  }
 } else {
  if (VAR_6->wol) {
   if (FUNC_1(VAR_6))
    return -VAR_1;
   VAR_6->wol = 0;
  }
 }
 return 0;
}
