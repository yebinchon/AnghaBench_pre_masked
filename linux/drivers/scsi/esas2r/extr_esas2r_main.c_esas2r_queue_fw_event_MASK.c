
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct esas2r_vda_ae {int vda_ae; int devfn; int bus_number; int signature; } ;
struct esas2r_fw_event_work {int type; int work; int list; struct esas2r_adapter* a; int * data; } ;
struct esas2r_adapter {int fw_event_lock; int fw_event_q; int fw_event_list; TYPE_2__* pcid; } ;
typedef enum fw_event_type { ____Placeholder_fw_event_type } fw_event_type ;
struct TYPE_4__ {int devfn; TYPE_1__* bus; } ;
struct TYPE_3__ {int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int VAR_4 ;
 struct esas2r_fw_event_work* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,void*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int ,int *,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

void FUNC_10(struct esas2r_adapter *VAR_5,
      enum fw_event_type VAR_6,
      void *VAR_7,
      int VAR_8)
{
 struct esas2r_fw_event_work *VAR_9;
 unsigned long VAR_10;

 VAR_9 = FUNC_2(sizeof(struct esas2r_fw_event_work), VAR_2);
 if (!VAR_9) {
  FUNC_1(VAR_0,
      "esas2r_queue_fw_event failed to alloc");
  return;
 }

 if (VAR_6 == VAR_4) {
  struct esas2r_vda_ae *VAR_11 =
   (struct esas2r_vda_ae *)VAR_9->data;

  VAR_11->signature = VAR_1;
  VAR_11->bus_number = VAR_5->pcid->bus->number;
  VAR_11->devfn = VAR_5->pcid->devfn;
  FUNC_4(&VAR_11->vda_ae, VAR_7, sizeof(VAR_11->vda_ae));
 } else {
  FUNC_4(VAR_9->data, VAR_7, VAR_8);
 }

 VAR_9->type = VAR_6;
 VAR_9->a = VAR_5;

 FUNC_8(&VAR_5->fw_event_lock, VAR_10);
 FUNC_3(&VAR_9->list, &VAR_5->fw_event_list);
 FUNC_0(&VAR_9->work, VAR_3);
 FUNC_6(
  FUNC_7(), VAR_5->fw_event_q, &VAR_9->work,
  FUNC_5(1));
 FUNC_9(&VAR_5->fw_event_lock, VAR_10);
}
