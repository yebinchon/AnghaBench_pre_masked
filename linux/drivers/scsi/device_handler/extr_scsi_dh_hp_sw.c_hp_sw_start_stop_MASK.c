
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct scsi_sense_hdr {int sense_key; int asc; int ascq; } ;
struct scsi_device {int dummy; } ;
struct hp_sw_dh_data {struct scsi_device* sdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct scsi_device*,unsigned char*,int ,int *,int ,int *,struct scsi_sense_hdr*,int ,int,int,int ,int *) ;
 int FUNC_1 (struct scsi_sense_hdr*) ;
 int FUNC_2 (int ,struct scsi_device*,char*,int ,...) ;

__attribute__((used)) static int FUNC_3(struct hp_sw_dh_data *VAR_12)
{
 unsigned char VAR_13[6] = { VAR_11, 0, 0, 0, 1, 0 };
 struct scsi_sense_hdr VAR_14;
 struct scsi_device *VAR_15 = VAR_12->sdev;
 int VAR_16, VAR_17 = VAR_9;
 int VAR_18 = VAR_2;
 u64 VAR_19 = VAR_5 | VAR_7 |
  VAR_6;

retry:
 VAR_16 = FUNC_0(VAR_15, VAR_13, VAR_0, ((void*)0), 0, ((void*)0), &VAR_14,
   VAR_3, VAR_2, VAR_19, 0, ((void*)0));
 if (VAR_16) {
  if (!FUNC_1(&VAR_14)) {
   FUNC_2(VAR_4, VAR_15,
        "%s: sending start_stop_unit failed, "
        "no sense available\n", VAR_1);
   return VAR_8;
  }
  switch (VAR_14.sense_key) {
  case 128:
   if (VAR_14.asc == 0x04 && VAR_14.ascq == 3) {





    if (--VAR_18)
     goto retry;
    VAR_17 = VAR_10;
    break;
   }

  default:
   FUNC_2(VAR_4, VAR_15,
        "%s: sending start_stop_unit failed, "
        "sense %x/%x/%x\n", VAR_1,
        VAR_14.sense_key, VAR_14.asc, VAR_14.ascq);
   VAR_17 = VAR_8;
  }
 }
 return VAR_17;
}
