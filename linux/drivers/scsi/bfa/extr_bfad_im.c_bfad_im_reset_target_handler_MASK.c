
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct scsi_target {int id; } ;
struct TYPE_3__ {char* ptr; int Status; } ;
struct scsi_cmnd {TYPE_1__ SCp; TYPE_2__* device; } ;
struct bfad_s {int bfad_lock; } ;
struct bfad_itnim_s {int dummy; } ;
struct bfad_im_port_s {struct bfad_s* bfad; } ;
struct Scsi_Host {scalar_t__* hostdata; } ;
typedef enum bfi_tskim_status { ____Placeholder_bfi_tskim_status } bfi_tskim_status ;
struct TYPE_4__ {struct Scsi_Host* host; } ;


 int FUNC_0 (int ,struct bfad_s*,int ,char*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 struct bfad_itnim_s* FUNC_2 (struct bfad_im_port_s*,int ) ;
 scalar_t__ FUNC_3 (struct bfad_s*,struct scsi_cmnd*,struct bfad_itnim_s*) ;
 struct scsi_target* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int ,unsigned long*) ;
 int FUNC_8 (int ,int ) ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_9(struct scsi_cmnd *VAR_8)
{
 struct Scsi_Host *VAR_9 = VAR_8->device->host;
 struct scsi_target *VAR_10 = FUNC_4(VAR_8->device);
 struct bfad_im_port_s *VAR_11 =
    (struct bfad_im_port_s *) VAR_9->hostdata[0];
 struct bfad_s *VAR_12 = VAR_11->bfad;
 struct bfad_itnim_s *VAR_13;
 unsigned long VAR_14;
 u32 VAR_15, VAR_16 = VAR_2;
 FUNC_1(VAR_7);
 enum bfi_tskim_status VAR_17;

 FUNC_5(&VAR_12->bfad_lock, VAR_14);
 VAR_13 = FUNC_2(VAR_11, VAR_10->id);
 if (VAR_13) {
  VAR_8->SCp.ptr = (char *)&VAR_7;
  VAR_15 = FUNC_3(VAR_12, VAR_8, VAR_13);
  if (VAR_15 == VAR_0) {

   FUNC_6(&VAR_12->bfad_lock, VAR_14);
   FUNC_8(VAR_7, FUNC_7(VAR_3,
     (unsigned long *)&VAR_8->SCp.Status));
   FUNC_5(&VAR_12->bfad_lock, VAR_14);

   VAR_17 = VAR_8->SCp.Status >> 1;
   if (VAR_17 != VAR_1)
    FUNC_0(VAR_4, VAR_12, VAR_6,
     "target reset failure,"
     " status: %d\n", VAR_17);
   else
    VAR_16 = VAR_5;
  }
 }
 FUNC_6(&VAR_12->bfad_lock, VAR_14);

 return VAR_16;
}
