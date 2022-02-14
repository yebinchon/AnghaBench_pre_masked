
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xenbus_device {int dummy; } ;
struct vscsiif_sring {int dummy; } ;
struct TYPE_2__ {scalar_t__ sring; } ;
struct vscsifrnt_info {int irq; TYPE_1__ ring; int ring_ref; int evtchn; struct xenbus_device* dev; } ;
typedef int grant_ref_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,struct vscsiif_sring*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct vscsiif_sring*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (int ,int ,unsigned long) ;
 int FUNC_6 (int,int *,int ,int ,char*,struct vscsifrnt_info*) ;
 int VAR_4 ;
 int FUNC_7 (int,struct vscsifrnt_info*) ;
 int FUNC_8 (struct xenbus_device*,int *) ;
 int FUNC_9 (struct xenbus_device*,int,char*) ;
 int FUNC_10 (struct xenbus_device*,struct vscsiif_sring*,int,int *) ;

__attribute__((used)) static int FUNC_11(struct vscsifrnt_info *VAR_5)
{
 struct xenbus_device *VAR_6 = VAR_5->dev;
 struct vscsiif_sring *VAR_7;
 grant_ref_t VAR_8;
 int VAR_9 = -VAR_0;


 VAR_7 = (struct vscsiif_sring *)FUNC_2(VAR_1);
 if (!VAR_7) {
  FUNC_9(VAR_6, VAR_9,
   "fail to allocate shared ring (Front to Back)");
  return VAR_9;
 }
 FUNC_1(VAR_7);
 FUNC_0(&VAR_5->ring, VAR_7, VAR_3);

 VAR_9 = FUNC_10(VAR_6, VAR_7, 1, &VAR_8);
 if (VAR_9 < 0) {
  FUNC_4((unsigned long)VAR_7);
  FUNC_9(VAR_6, VAR_9,
   "fail to grant shared ring (Front to Back)");
  return VAR_9;
 }
 VAR_5->ring_ref = VAR_8;

 VAR_9 = FUNC_8(VAR_6, &VAR_5->evtchn);
 if (VAR_9) {
  FUNC_9(VAR_6, VAR_9, "xenbus_alloc_evtchn");
  goto free_gnttab;
 }

 VAR_9 = FUNC_3(VAR_5->evtchn);
 if (VAR_9 <= 0) {
  FUNC_9(VAR_6, VAR_9, "bind_evtchn_to_irq");
  goto free_gnttab;
 }

 VAR_5->irq = VAR_9;

 VAR_9 = FUNC_6(VAR_5->irq, ((void*)0), VAR_4,
       VAR_2, "scsifront", VAR_5);
 if (VAR_9) {
  FUNC_9(VAR_6, VAR_9, "request_threaded_irq");
  goto free_irq;
 }

 return 0;


free_irq:
 FUNC_7(VAR_5->irq, VAR_5);
free_gnttab:
 FUNC_5(VAR_5->ring_ref, 0,
      (unsigned long)VAR_5->ring.sring);

 return VAR_9;
}
