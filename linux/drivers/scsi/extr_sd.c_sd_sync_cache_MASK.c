
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_sense_hdr {int asc; int ascq; } ;
struct scsi_disk {struct scsi_device* device; } ;
struct scsi_device {TYPE_1__* request_queue; } ;
struct TYPE_2__ {int rq_timeout; } ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned char VAR_8 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct scsi_device*) ;
 int FUNC_3 (struct scsi_device*,unsigned char*,int ,int *,int ,int *,struct scsi_sense_hdr*,int const,int ,int ,int ,int *) ;
 scalar_t__ FUNC_4 (struct scsi_sense_hdr*) ;
 int FUNC_5 (struct scsi_disk*,char*,int) ;
 int FUNC_6 (struct scsi_disk*,struct scsi_sense_hdr*) ;

__attribute__((used)) static int FUNC_7(struct scsi_disk *VAR_9, struct scsi_sense_hdr *VAR_10)
{
 int VAR_11, VAR_12;
 struct scsi_device *VAR_13 = VAR_9->device;
 const int VAR_14 = VAR_13->request_queue->rq_timeout
  * VAR_6;
 struct scsi_sense_hdr VAR_15;

 if (!FUNC_2(VAR_13))
  return -VAR_4;


 if (!VAR_10)
  VAR_10 = &VAR_15;

 for (VAR_11 = 3; VAR_11 > 0; --VAR_11) {
  unsigned char VAR_16[10] = { 0 };

  VAR_16[0] = VAR_8;




  VAR_12 = FUNC_3(VAR_13, VAR_16, VAR_0, ((void*)0), 0, ((void*)0), VAR_10,
    VAR_14, VAR_7, 0, VAR_5, ((void*)0));
  if (VAR_12 == 0)
   break;
 }

 if (VAR_12) {
  FUNC_5(VAR_9, "Synchronize Cache(10) failed", VAR_12);

  if (FUNC_0(VAR_12) == VAR_1)
   FUNC_6(VAR_9, VAR_10);


  if (FUNC_4(VAR_10) &&
   (VAR_10->asc == 0x3a ||
    VAR_10->asc == 0x20 ||
    (VAR_10->asc == 0x74 && VAR_10->ascq == 0x71)))

    return 0;

  switch (FUNC_1(VAR_12)) {

  case 133:
  case 130:
   return 0;

  case 132:
  case 131:
  case 129:
  case 128:
   return -VAR_2;
  default:
   return -VAR_3;
  }
 }
 return 0;
}
