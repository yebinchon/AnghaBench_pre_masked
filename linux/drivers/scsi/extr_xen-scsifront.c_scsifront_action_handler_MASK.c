
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct vscsifrnt_shadow {int rslt_reset; int wait_reset; int rqid; int wq_reset; int ref_rqid; struct scsi_cmnd* sc; int act; } ;
struct vscsifrnt_info {int wait_ring_available; int shadow_lock; int wq_sync; } ;
struct scsi_cmnd {TYPE_1__* device; } ;
struct Scsi_Host {int host_lock; } ;
struct TYPE_2__ {struct Scsi_Host* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct vscsifrnt_shadow*) ;
 struct vscsifrnt_shadow* FUNC_2 (int,int ) ;
 struct vscsifrnt_shadow* FUNC_3 (struct scsi_cmnd*) ;
 int FUNC_4 (struct vscsifrnt_info*,struct vscsifrnt_shadow*) ;
 scalar_t__ FUNC_5 (struct vscsifrnt_info*) ;
 int FUNC_6 (struct vscsifrnt_info*,int ) ;
 int FUNC_7 (struct vscsifrnt_info*) ;
 struct vscsifrnt_info* FUNC_8 (struct Scsi_Host*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int) ;

__attribute__((used)) static int FUNC_14(struct scsi_cmnd *VAR_4, uint8_t VAR_5)
{
 struct Scsi_Host *VAR_6 = VAR_4->device->host;
 struct vscsifrnt_info *VAR_7 = FUNC_8(VAR_6);
 struct vscsifrnt_shadow *VAR_8, *VAR_9 = FUNC_3(VAR_4);
 int VAR_10 = 0;

 VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return VAR_0;

 VAR_8->act = VAR_5;
 VAR_8->rslt_reset = VAR_3;
 VAR_8->sc = VAR_4;
 VAR_8->ref_rqid = VAR_9->rqid;
 FUNC_0(&VAR_8->wq_reset);

 FUNC_10(VAR_6->host_lock);

 for (;;) {
  if (FUNC_5(VAR_7))
   goto fail;

  if (!FUNC_4(VAR_7, VAR_8))
   break;

  FUNC_7(VAR_7);
  if (VAR_10)
   goto fail;
  VAR_7->wait_ring_available = 1;
  FUNC_12(VAR_6->host_lock);
  VAR_10 = FUNC_13(VAR_7->wq_sync,
            !VAR_7->wait_ring_available);
  FUNC_10(VAR_6->host_lock);
 }

 FUNC_12(VAR_6->host_lock);
 VAR_10 = FUNC_13(VAR_8->wq_reset, VAR_8->wait_reset);
 FUNC_10(VAR_6->host_lock);

 if (!VAR_10) {
  VAR_10 = VAR_8->rslt_reset;
  FUNC_6(VAR_7, VAR_8->rqid);
  FUNC_1(VAR_8);
 } else {
  FUNC_9(&VAR_7->shadow_lock);
  VAR_8->rslt_reset = VAR_2;
  FUNC_11(&VAR_7->shadow_lock);
  VAR_10 = VAR_0;
 }

 FUNC_7(VAR_7);
 FUNC_12(VAR_6->host_lock);
 return VAR_10;

fail:
 FUNC_12(VAR_6->host_lock);
 FUNC_1(VAR_8);
 return VAR_0;
}
