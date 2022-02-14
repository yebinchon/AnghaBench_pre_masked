
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int type; } ;
struct TYPE_3__ {scalar_t__ monitor_type; struct net_device* ddev; } ;
typedef TYPE_1__ local_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void FUNC_0(local_info_t *VAR_6)
{
 struct net_device *VAR_7 = VAR_6->ddev;

 if (VAR_7 == ((void*)0))
  return;

 if (VAR_6->monitor_type == VAR_4 ||
     VAR_6->monitor_type == VAR_3) {
  VAR_7->type = VAR_1;
 } else if (VAR_6->monitor_type == VAR_5) {
  VAR_7->type = VAR_2;
 } else {
  VAR_7->type = VAR_0;
 }
}
