
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_sense_hdr {int asc; } ;
struct scsi_disk {struct scsi_device* device; } ;
struct scsi_device {scalar_t__ start_stop_pwr_cond; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned char VAR_7 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct scsi_device*) ;
 int FUNC_2 (struct scsi_device*,unsigned char*,int ,int *,int ,int *,struct scsi_sense_hdr*,int ,int ,int ,int ,int *) ;
 scalar_t__ FUNC_3 (struct scsi_sense_hdr*) ;
 int FUNC_4 (struct scsi_disk*,char*,int) ;
 int FUNC_5 (struct scsi_disk*,struct scsi_sense_hdr*) ;

__attribute__((used)) static int FUNC_6(struct scsi_disk *VAR_8, int VAR_9)
{
 unsigned char VAR_10[6] = { VAR_7 };
 struct scsi_sense_hdr VAR_11;
 struct scsi_device *VAR_12 = VAR_8->device;
 int VAR_13;

 if (VAR_9)
  VAR_10[4] |= 1;

 if (VAR_12->start_stop_pwr_cond)
  VAR_10[4] |= VAR_9 ? 1 << 4 : 3 << 4;

 if (!FUNC_1(VAR_12))
  return -VAR_3;

 VAR_13 = FUNC_2(VAR_12, VAR_10, VAR_0, ((void*)0), 0, ((void*)0), &VAR_11,
   VAR_6, VAR_5, 0, VAR_4, ((void*)0));
 if (VAR_13) {
  FUNC_4(VAR_8, "Start/Stop Unit failed", VAR_13);
  if (FUNC_0(VAR_13) == VAR_1)
   FUNC_5(VAR_8, &VAR_11);
  if (FUNC_3(&VAR_11) &&

   VAR_11.asc == 0x3a)
   VAR_13 = 0;
 }


 if (VAR_13)
  return -VAR_2;

 return 0;
}
