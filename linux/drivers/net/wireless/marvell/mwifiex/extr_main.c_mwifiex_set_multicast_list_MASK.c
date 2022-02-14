
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; } ;
struct mwifiex_private {int dummy; } ;
struct mwifiex_multicast_list {int num_multicast_addr; int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mwifiex_multicast_list*,struct net_device*) ;
 struct mwifiex_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct mwifiex_private*,struct mwifiex_multicast_list*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_6)
{
 struct mwifiex_private *VAR_7 = FUNC_1(VAR_6);
 struct mwifiex_multicast_list VAR_8;

 if (VAR_6->flags & VAR_1) {
  VAR_8.mode = VAR_5;
 } else if (VAR_6->flags & VAR_0 ||
     FUNC_3(VAR_6) > VAR_3) {
  VAR_8.mode = VAR_2;
 } else {
  VAR_8.mode = VAR_4;
  VAR_8.num_multicast_addr =
   FUNC_0(&VAR_8, VAR_6);
 }
 FUNC_2(VAR_7, &VAR_8);
}
