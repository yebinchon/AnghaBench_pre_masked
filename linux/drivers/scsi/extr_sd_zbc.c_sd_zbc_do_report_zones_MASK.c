
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_sense_hdr {int dummy; } ;
struct scsi_disk {struct scsi_device* device; } ;
struct scsi_device {TYPE_1__* request_queue; } ;
typedef scalar_t__ sector_t ;
struct TYPE_2__ {int rq_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 int FUNC_0 (int) ;
 unsigned int FUNC_1 (unsigned char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (unsigned char*,int ,int) ;
 int FUNC_4 (unsigned int,unsigned char*) ;
 int FUNC_5 (scalar_t__,unsigned char*) ;
 int FUNC_6 (struct scsi_device*,unsigned char*,int ,unsigned char*,unsigned int,struct scsi_sense_hdr*,int const,int ,int *) ;
 int FUNC_7 (int ,struct scsi_disk*,char*,unsigned int,...) ;

__attribute__((used)) static int FUNC_8(struct scsi_disk *VAR_7, unsigned char *VAR_8,
      unsigned int VAR_9, sector_t VAR_10,
      bool VAR_11)
{
 struct scsi_device *VAR_12 = VAR_7->device;
 const int VAR_13 = VAR_12->request_queue->rq_timeout;
 struct scsi_sense_hdr VAR_14;
 unsigned char VAR_15[16];
 unsigned int VAR_16;
 int VAR_17;

 FUNC_3(VAR_15, 0, 16);
 VAR_15[0] = VAR_4;
 VAR_15[1] = VAR_6;
 FUNC_5(VAR_10, &VAR_15[2]);
 FUNC_4(VAR_9, &VAR_15[10]);
 if (VAR_11)
  VAR_15[14] = VAR_5;

 VAR_17 = FUNC_6(VAR_12, VAR_15, VAR_0,
      VAR_8, VAR_9, &VAR_14,
      VAR_13, VAR_3, ((void*)0));
 if (VAR_17) {
  FUNC_7(VAR_2, VAR_7,
     "REPORT ZONES lba %llu failed with %d/%d\n",
     (unsigned long long)VAR_10,
     FUNC_2(VAR_17), FUNC_0(VAR_17));
  return -VAR_1;
 }

 VAR_16 = FUNC_1(&VAR_8[0]);
 if (VAR_16 < 64) {
  FUNC_7(VAR_2, VAR_7,
     "REPORT ZONES report invalid length %u\n",
     VAR_16);
  return -VAR_1;
 }

 return 0;
}
