
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct scsi_cmnd {int (* scsi_done ) (struct scsi_cmnd*) ;scalar_t__ host_scribble; TYPE_1__* device; } ;
struct bfad_s {int bfad_lock; } ;
struct bfad_ioim_s {int dummy; } ;
struct bfad_im_port_s {TYPE_2__* shost; struct bfad_s* bfad; } ;
struct bfa_ioim_s {int iotag; struct bfad_ioim_s* dio; } ;
struct Scsi_Host {scalar_t__* hostdata; } ;
struct TYPE_4__ {int host_no; } ;
struct TYPE_3__ {struct Scsi_Host* host; } ;


 int FUNC_0 (int ,struct bfad_s*,int ,char*,int ,struct scsi_cmnd*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct bfa_ioim_s*) ;
 int VAR_5 ;
 int FUNC_2 (struct bfad_s*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct scsi_cmnd*) ;

__attribute__((used)) static int
FUNC_8(struct scsi_cmnd *VAR_6)
{
 struct Scsi_Host *VAR_7 = VAR_6->device->host;
 struct bfad_im_port_s *VAR_8 =
   (struct bfad_im_port_s *) VAR_7->hostdata[0];
 struct bfad_s *VAR_9 = VAR_8->bfad;
 struct bfa_ioim_s *VAR_10;
 unsigned long VAR_11;
 u32 VAR_12;
 int VAR_13 = VAR_0;

 FUNC_5(&VAR_9->bfad_lock, VAR_11);
 VAR_10 = (struct bfa_ioim_s *) VAR_6->host_scribble;
 if (!VAR_10) {

  VAR_13 = VAR_3;
  goto out;
 }
 if (VAR_10->dio != (struct bfad_ioim_s *) VAR_6) {
  VAR_13 = VAR_0;
  goto out;
 }

 FUNC_2(VAR_9, VAR_10->iotag);
 FUNC_0(VAR_2, VAR_9, VAR_5,
  "scsi%d: abort cmnd %p iotag %x\n",
  VAR_8->shost->host_no, VAR_6, VAR_10->iotag);
 (void) FUNC_1(VAR_10);
 FUNC_6(&VAR_9->bfad_lock, VAR_11);


 VAR_12 = 10;
 while ((struct bfa_ioim_s *) VAR_6->host_scribble == VAR_10) {
  FUNC_4(VAR_4);
  FUNC_3(VAR_12);
  if (VAR_12 < 4 * VAR_1)
   VAR_12 *= 2;
 }

 VAR_6->scsi_done(VAR_6);
 FUNC_2(VAR_9, VAR_10->iotag);
 FUNC_0(VAR_2, VAR_9, VAR_5,
  "scsi%d: complete abort 0x%p iotag 0x%x\n",
  VAR_8->shost->host_no, VAR_6, VAR_10->iotag);
 return VAR_3;
out:
 FUNC_6(&VAR_9->bfad_lock, VAR_11);
 return VAR_13;
}
