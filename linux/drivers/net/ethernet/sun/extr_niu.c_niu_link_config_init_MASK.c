
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct niu_link_config {int advertising; int autoneg; int loopback_mode; void* active_duplex; int active_speed; void* duplex; int speed; } ;
struct niu {struct niu_link_config link_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static void FUNC_0(struct niu *VAR_14)
{
 struct niu_link_config *VAR_15 = &VAR_14->link_config;

 VAR_15->advertising = (VAR_6 |
      VAR_5 |
      VAR_4 |
      VAR_3 |
      VAR_2 |
      VAR_1 |
      VAR_0 |
      VAR_7);
 VAR_15->speed = VAR_15->active_speed = VAR_13;
 VAR_15->duplex = VAR_8;
 VAR_15->active_duplex = VAR_9;
 VAR_15->autoneg = 1;





 VAR_15->loopback_mode = VAR_10;

}
