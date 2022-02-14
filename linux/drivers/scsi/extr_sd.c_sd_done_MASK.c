
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_sense_hdr {int sense_key; int asc; } ;
struct scsi_disk {TYPE_2__* device; scalar_t__ medium_access_timed_out; } ;
struct scsi_cmnd {int result; int* cmnd; int sense_buffer; struct request* request; TYPE_1__* device; } ;
struct request {int rq_flags; int rq_disk; } ;
struct TYPE_4__ {int no_write_same; } ;
struct TYPE_3__ {unsigned int sector_size; } ;



 scalar_t__ VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;



 unsigned int FUNC_1 (struct request*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int ) ;
 unsigned int FUNC_4 (unsigned int,int ) ;
 int FUNC_5 (struct request*) ;
 int FUNC_6 (unsigned int,unsigned int) ;
 int FUNC_7 (int ,struct scsi_cmnd*,char*,unsigned int,unsigned int) ;
 unsigned int FUNC_8 (struct scsi_cmnd*) ;
 int FUNC_9 (struct scsi_cmnd*,struct scsi_sense_hdr*) ;
 struct scsi_disk* FUNC_10 (int ) ;
 unsigned int FUNC_11 (struct scsi_cmnd*) ;
 int FUNC_12 (struct scsi_cmnd*) ;
 int FUNC_13 (struct scsi_sense_hdr*) ;
 int FUNC_14 (struct scsi_cmnd*,unsigned int) ;
 unsigned int FUNC_15 (struct scsi_cmnd*) ;
 int FUNC_16 (struct scsi_disk*,int ) ;
 int FUNC_17 (struct scsi_disk*) ;
 scalar_t__ FUNC_18 (struct scsi_disk*) ;
 int FUNC_19 (int ,struct scsi_disk*,char*,unsigned int,unsigned int) ;
 int FUNC_20 (struct scsi_cmnd*,unsigned int,struct scsi_sense_hdr*) ;

__attribute__((used)) static int FUNC_21(struct scsi_cmnd *VAR_5)
{
 int VAR_6 = VAR_5->result;
 unsigned int VAR_7 = VAR_6 ? 0 : FUNC_8(VAR_5);
 unsigned int VAR_8 = VAR_5->device->sector_size;
 unsigned int VAR_9;
 struct scsi_sense_hdr VAR_10;
 struct scsi_disk *VAR_11 = FUNC_10(VAR_5->request->rq_disk);
 struct request *VAR_12 = VAR_5->request;
 int VAR_13 = 0;
 int VAR_14 = 0;

 switch (FUNC_5(VAR_12)) {
 case 135:
 case 133:
 case 134:
 case 132:
 case 131:
  if (!VAR_6) {
   VAR_7 = FUNC_1(VAR_12);
   FUNC_14(VAR_5, 0);
  } else {
   VAR_7 = 0;
   FUNC_14(VAR_5, FUNC_1(VAR_12));
  }
  break;
 default:





  VAR_9 = FUNC_11(VAR_5);
  if (VAR_9 & (VAR_8 - 1)) {
   FUNC_19(VAR_1, VAR_11,
    "Unaligned partial completion (resid=%u, sector_sz=%u)\n",
    VAR_9, VAR_8);
   FUNC_12(VAR_5);
   VAR_9 = FUNC_4(FUNC_8(VAR_5),
        FUNC_6(VAR_9, VAR_8));
   FUNC_14(VAR_5, VAR_9);
  }
 }

 if (VAR_6) {
  VAR_13 = FUNC_9(VAR_5, &VAR_10);
  if (VAR_13)
   VAR_14 = FUNC_13(&VAR_10);
 }
 VAR_11->medium_access_timed_out = 0;

 if (FUNC_2(VAR_6) != VAR_0 &&
     (!VAR_13 || VAR_14))
  goto out;

 switch (VAR_10.sense_key) {
 case 140:
 case 138:
  VAR_7 = FUNC_15(VAR_5);
  break;
 case 136:
  VAR_7 = FUNC_8(VAR_5);
  break;
 case 137:




  VAR_5->result = 0;
  FUNC_3(VAR_5->sense_buffer, 0, VAR_3);
  break;
 case 141:
  if (VAR_10.asc == 0x10)
   VAR_7 = FUNC_15(VAR_5);
  break;
 case 139:
  switch (VAR_10.asc) {
  case 0x10:
   VAR_7 = FUNC_15(VAR_5);
   break;
  case 0x20:
  case 0x24:
   switch (VAR_5->cmnd[0]) {
   case 130:
    FUNC_16(VAR_11, VAR_4);
    break;
   case 128:
   case 129:
    if (VAR_5->cmnd[1] & 8) {
     FUNC_16(VAR_11, VAR_4);
    } else {
     VAR_11->device->no_write_same = 1;
     FUNC_17(VAR_11);
     VAR_12->rq_flags |= VAR_2;
    }
    break;
   }
  }
  break;
 default:
  break;
 }

 out:
 if (FUNC_18(VAR_11))
  FUNC_20(VAR_5, VAR_7, &VAR_10);

 FUNC_0(1, FUNC_7(VAR_1, VAR_5,
        "sd_done: completed %d of %d bytes\n",
        VAR_7, FUNC_8(VAR_5)));

 return VAR_7;
}
