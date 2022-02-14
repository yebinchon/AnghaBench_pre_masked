
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct wil_p2p_info {scalar_t__ discovery_started; int discovery_timer; int * pending_listen_wdev; } ;
struct wil6210_vif {struct wil_p2p_info p2p; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct wil6210_vif*) ;

u8 FUNC_2(struct wil6210_vif *VAR_0)
{
 struct wil_p2p_info *VAR_1 = &VAR_0->p2p;
 u8 VAR_2 = VAR_1->discovery_started;

 if (VAR_1->discovery_started) {
  if (VAR_1->pending_listen_wdev) {

   VAR_1->pending_listen_wdev = ((void*)0);
  } else {
   FUNC_0(&VAR_1->discovery_timer);
   FUNC_1(VAR_0);
  }
  VAR_1->discovery_started = 0;
 }

 return VAR_2;
}
