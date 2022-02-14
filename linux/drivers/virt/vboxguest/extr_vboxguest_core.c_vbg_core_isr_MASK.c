
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_9__ {int rc; } ;
struct vmmdev_events {int events; TYPE_4__ header; } ;
struct TYPE_10__ {int work; } ;
struct vbg_dev {int pending_events; int event_wq; int event_spinlock; TYPE_5__ mem_balloon; int hgcm_wq; TYPE_3__* mmio; struct vmmdev_events* ack_events_req; } ;
typedef int irqreturn_t ;
struct TYPE_6__ {int have_events; } ;
struct TYPE_7__ {TYPE_1__ V1_04; } ;
struct TYPE_8__ {TYPE_2__ V; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct vbg_dev*) ;
 int FUNC_5 (struct vbg_dev*,struct vmmdev_events*) ;
 int FUNC_6 (int *) ;

irqreturn_t FUNC_7(int VAR_6, void *VAR_7)
{
 struct vbg_dev *VAR_8 = VAR_7;
 struct vmmdev_events *VAR_9 = VAR_8->ack_events_req;
 bool VAR_10 = 0;
 unsigned long VAR_11;
 u32 VAR_12 = 0;
 int VAR_13;

 if (!VAR_8->mmio->V.V1_04.have_events)
  return VAR_1;


 VAR_9->header.rc = VAR_2;
 VAR_9->events = 0;
 VAR_13 = FUNC_5(VAR_8, VAR_9);
 if (VAR_13 < 0) {
  FUNC_3("Error performing events req, rc: %d\n", VAR_13);
  return VAR_1;
 }

 VAR_12 = VAR_9->events;

 if (VAR_12 & VAR_5) {
  VAR_10 = 1;
  VAR_12 &= ~VAR_5;
 }

 if (VAR_12 & VAR_4) {
  FUNC_6(&VAR_8->hgcm_wq);
  VAR_12 &= ~VAR_4;
 }

 if (VAR_12 & VAR_3) {
  FUNC_0(&VAR_8->mem_balloon.work);
  VAR_12 &= ~VAR_3;
 }

 if (VAR_12) {
  FUNC_1(&VAR_8->event_spinlock, VAR_11);
  VAR_8->pending_events |= VAR_12;
  FUNC_2(&VAR_8->event_spinlock, VAR_11);

  FUNC_6(&VAR_8->event_wq);
 }

 if (VAR_10)
  FUNC_4(VAR_8);

 return VAR_0;
}
