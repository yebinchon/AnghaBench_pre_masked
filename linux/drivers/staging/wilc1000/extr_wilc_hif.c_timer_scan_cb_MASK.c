
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wilc_vif {int dummy; } ;
struct timer_list {int dummy; } ;
struct host_if_msg {int dummy; } ;
struct host_if_drv {struct wilc_vif* scan_timer_vif; } ;


 scalar_t__ FUNC_0 (struct host_if_msg*) ;
 struct host_if_drv* FUNC_1 (int ,struct timer_list*,int ) ;
 int VAR_0 ;
 struct host_if_drv* VAR_1 ;
 int FUNC_2 (struct host_if_msg*) ;
 int VAR_2 ;
 struct host_if_msg* FUNC_3 (struct wilc_vif*,int ,int) ;
 int FUNC_4 (struct host_if_msg*) ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_3)
{
 struct host_if_drv *VAR_4 = FUNC_1(VAR_4, VAR_3, VAR_2);
 struct wilc_vif *VAR_5 = VAR_4->scan_timer_vif;
 struct host_if_msg *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(VAR_5, VAR_0, 0);
 if (FUNC_0(VAR_6))
  return;

 VAR_7 = FUNC_4(VAR_6);
 if (VAR_7)
  FUNC_2(VAR_6);
}
