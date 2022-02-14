
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct can_bittiming_const {int dummy; } ;
struct can_bittiming {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,char*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_1, struct can_bittiming *VAR_2,
         const struct can_bittiming_const *VAR_3)
{
 FUNC_0(VAR_1, "bit-timing calculation not available\n");
 return -VAR_0;
}
