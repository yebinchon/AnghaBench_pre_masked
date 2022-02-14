
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uli526x_board_info {scalar_t__ link_failed; } ;
struct net_device {int dummy; } ;


 struct uli526x_board_info* FUNC_0 (struct net_device*) ;

__attribute__((used)) static u32 FUNC_1(struct net_device *VAR_0) {
 struct uli526x_board_info *VAR_1 = FUNC_0(VAR_0);

 if(VAR_1->link_failed)
  return 0;
 else
  return 1;
}
