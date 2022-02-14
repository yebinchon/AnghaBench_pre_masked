
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_wolinfo {int sopass; void* wolopts; void* supported; } ;
struct bnx2 {int flags; scalar_t__ wol; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 struct bnx2* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void
FUNC_2(struct net_device *VAR_2, struct ethtool_wolinfo *VAR_3)
{
 struct bnx2 *VAR_4 = FUNC_1(VAR_2);

 if (VAR_4->flags & VAR_0) {
  VAR_3->supported = 0;
  VAR_3->wolopts = 0;
 }
 else {
  VAR_3->supported = VAR_1;
  if (VAR_4->wol)
   VAR_3->wolopts = VAR_1;
  else
   VAR_3->wolopts = 0;
 }
 FUNC_0(&VAR_3->sopass, 0, sizeof(VAR_3->sopass));
}
