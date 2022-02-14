
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {void* get_req; void* change_req; int work; } ;
struct vbg_dev {int fixed_events; TYPE_1__ mem_balloon; void* cancel_req; void* ack_events_req; void* mouse_status_req; int heartbeat_timer; int cancel_req_mutex; int session_mutex; int event_spinlock; int hgcm_wq; int event_wq; void* guest_caps_host; void* event_filter_host; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ) ;
 int VAR_9 ;
 int FUNC_5 (struct vbg_dev*,int ) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (struct vbg_dev*) ;
 int FUNC_8 (struct vbg_dev*) ;
 int VAR_10 ;
 int FUNC_9 (struct vbg_dev*) ;
 int FUNC_10 (struct vbg_dev*,int) ;
 int FUNC_11 (struct vbg_dev*) ;
 void* FUNC_12 (int,int ,int ) ;
 int FUNC_13 (void*,int) ;
 int FUNC_14 (struct vbg_dev*) ;
 int FUNC_15 (struct vbg_dev*,int) ;

int FUNC_16(struct vbg_dev *VAR_11, u32 VAR_12)
{
 int VAR_13 = -VAR_0;

 VAR_11->fixed_events = VAR_12 | VAR_8;
 VAR_11->event_filter_host = VAR_1;
 VAR_11->guest_caps_host = VAR_1;

 FUNC_1(&VAR_11->event_wq);
 FUNC_1(&VAR_11->hgcm_wq);
 FUNC_3(&VAR_11->event_spinlock);
 FUNC_2(&VAR_11->session_mutex);
 FUNC_2(&VAR_11->cancel_req_mutex);
 FUNC_4(&VAR_11->heartbeat_timer, VAR_10, 0);
 FUNC_0(&VAR_11->mem_balloon.work, VAR_9);

 VAR_11->mem_balloon.get_req =
  FUNC_12(sizeof(*VAR_11->mem_balloon.get_req),
         VAR_5,
         VAR_2);
 VAR_11->mem_balloon.change_req =
  FUNC_12(sizeof(*VAR_11->mem_balloon.change_req),
         VAR_4,
         VAR_2);
 VAR_11->cancel_req =
  FUNC_12(sizeof(*(VAR_11->cancel_req)),
         VAR_7,
         VAR_2);
 VAR_11->ack_events_req =
  FUNC_12(sizeof(*VAR_11->ack_events_req),
         VAR_3,
         VAR_2);
 VAR_11->mouse_status_req =
  FUNC_12(sizeof(*VAR_11->mouse_status_req),
         VAR_6,
         VAR_2);

 if (!VAR_11->mem_balloon.get_req || !VAR_11->mem_balloon.change_req ||
     !VAR_11->cancel_req || !VAR_11->ack_events_req ||
     !VAR_11->mouse_status_req)
  goto err_free_reqs;

 VAR_13 = FUNC_9(VAR_11);
 if (VAR_13)
  goto err_free_reqs;

 VAR_13 = FUNC_11(VAR_11);
 if (VAR_13) {
  FUNC_6("vboxguest: vbg_report_guest_info error: %d\n", VAR_13);
  goto err_free_reqs;
 }

 VAR_13 = FUNC_15(VAR_11, VAR_11->fixed_events);
 if (VAR_13) {
  FUNC_6("vboxguest: Error setting fixed event filter: %d\n",
   VAR_13);
  goto err_free_reqs;
 }

 VAR_13 = FUNC_14(VAR_11);
 if (VAR_13) {
  FUNC_6("vboxguest: Error clearing guest capabilities: %d\n",
   VAR_13);
  goto err_free_reqs;
 }

 VAR_13 = FUNC_5(VAR_11, 0);
 if (VAR_13) {
  FUNC_6("vboxguest: Error clearing mouse status: %d\n", VAR_13);
  goto err_free_reqs;
 }


 FUNC_7(VAR_11);
 FUNC_8(VAR_11);


 VAR_13 = FUNC_10(VAR_11, 1);
 if (VAR_13 < 0)
  FUNC_6("vboxguest: Error reporting driver status: %d\n", VAR_13);

 return 0;

err_free_reqs:
 FUNC_13(VAR_11->mouse_status_req,
       sizeof(*VAR_11->mouse_status_req));
 FUNC_13(VAR_11->ack_events_req,
       sizeof(*VAR_11->ack_events_req));
 FUNC_13(VAR_11->cancel_req,
       sizeof(*VAR_11->cancel_req));
 FUNC_13(VAR_11->mem_balloon.change_req,
       sizeof(*VAR_11->mem_balloon.change_req));
 FUNC_13(VAR_11->mem_balloon.get_req,
       sizeof(*VAR_11->mem_balloon.get_req));
 return VAR_13;
}
