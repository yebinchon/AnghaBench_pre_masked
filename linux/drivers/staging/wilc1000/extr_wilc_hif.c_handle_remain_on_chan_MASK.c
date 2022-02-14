
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wilc_vif {scalar_t__ connecting; struct host_if_drv* hif_drv; } ;
struct wilc_remain_ch {int cookie; scalar_t__ ch; int expired; int arg; } ;
struct wid {int size; int* val; int type; int id; } ;
struct TYPE_4__ {int cookie; scalar_t__ ch; int expired; int arg; } ;
struct TYPE_3__ {scalar_t__ scan_result; } ;
struct host_if_drv {scalar_t__ hif_state; struct wilc_vif* remain_on_ch_timer_vif; TYPE_2__ remain_on_ch; TYPE_1__ usr_scan_req; } ;
typedef int s8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int*) ;
 int* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wilc_vif*,int ,struct wid*,int) ;

__attribute__((used)) static int FUNC_3(struct wilc_vif *VAR_7,
     struct wilc_remain_ch *VAR_8)
{
 int VAR_9;
 u8 VAR_10;
 struct wid VAR_11;
 struct host_if_drv *VAR_12 = VAR_7->hif_drv;

 if (VAR_12->usr_scan_req.scan_result)
  return -VAR_0;

 if (VAR_12->hif_state == VAR_3)
  return -VAR_0;

 if (VAR_7->connecting)
  return -VAR_0;

 VAR_10 = 1;
 VAR_11.id = VAR_4;
 VAR_11.type = VAR_5;
 VAR_11.size = 2;
 VAR_11.val = FUNC_1(VAR_11.size, VAR_2);
 if (!VAR_11.val)
  return -VAR_1;

 VAR_11.val[0] = VAR_10;
 VAR_11.val[1] = (s8)VAR_8->ch;

 VAR_9 = FUNC_2(VAR_7, VAR_6, &VAR_11, 1);
 FUNC_0(VAR_11.val);
 if (VAR_9)
  return -VAR_0;

 VAR_12->remain_on_ch.arg = VAR_8->arg;
 VAR_12->remain_on_ch.expired = VAR_8->expired;
 VAR_12->remain_on_ch.ch = VAR_8->ch;
 VAR_12->remain_on_ch.cookie = VAR_8->cookie;
 VAR_12->remain_on_ch_timer_vif = VAR_7;

 return 0;
}
