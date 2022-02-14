
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int authentication_mode; } ;
struct TYPE_3__ {void* iftype; } ;
struct mwifiex_private {TYPE_2__ sec_info; void* bss_mode; TYPE_1__ wdev; scalar_t__ mgmt_frame_mask; struct mwifiex_adapter* adapter; } ;
struct mwifiex_adapter {int main_locked; int rx_locked; int rx_proc_lock; int rx_workqueue; scalar_t__ rx_processing; int main_proc_lock; int workqueue; scalar_t__ mwifiex_processing; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mwifiex_adapter*,int ,char*) ;
 int FUNC_2 (struct mwifiex_private*,int *) ;
 int FUNC_3 (struct mwifiex_private*) ;
 scalar_t__ FUNC_4 (struct mwifiex_private*,int ,int ,int ,scalar_t__*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct mwifiex_private *VAR_5)
{
 struct mwifiex_adapter *VAR_6 = VAR_5->adapter;
 unsigned long VAR_7;

 VAR_5->mgmt_frame_mask = 0;
 if (FUNC_4(VAR_5, VAR_2,
        VAR_1, 0,
        &VAR_5->mgmt_frame_mask, 0)) {
  FUNC_1(VAR_6, VAR_0,
       "could not unregister mgmt frame rx\n");
  return -1;
 }

 FUNC_2(VAR_5, ((void*)0));

 FUNC_6(&VAR_6->main_proc_lock, VAR_7);
 VAR_6->main_locked = 1;
 if (VAR_6->mwifiex_processing) {
  FUNC_8(&VAR_6->main_proc_lock, VAR_7);
  FUNC_0(VAR_6->workqueue);
 } else {
  FUNC_8(&VAR_6->main_proc_lock, VAR_7);
 }

 FUNC_5(&VAR_6->rx_proc_lock);
 VAR_6->rx_locked = 1;
 if (VAR_6->rx_processing) {
  FUNC_7(&VAR_6->rx_proc_lock);
  FUNC_0(VAR_6->rx_workqueue);
 } else {
 FUNC_7(&VAR_6->rx_proc_lock);
 }

 FUNC_3(VAR_5);
 VAR_5->wdev.iftype = VAR_4;
 VAR_5->bss_mode = VAR_4;
 VAR_5->sec_info.authentication_mode = VAR_3;

 return 0;
}
