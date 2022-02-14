
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct scsi_sense_hdr {int dummy; } ;
struct scsi_device {int dummy; } ;
struct hp_sw_dh_data {int path_state; } ;


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
 unsigned char VAR_12 ;
 int FUNC_0 (struct scsi_device*,unsigned char*,int ,int *,int ,int *,struct scsi_sense_hdr*,int ,int ,int,int ,int *) ;
 scalar_t__ FUNC_1 (struct scsi_sense_hdr*) ;
 int FUNC_2 (int ,struct scsi_device*,char*,int ,int) ;
 int FUNC_3 (struct scsi_device*,struct hp_sw_dh_data*,struct scsi_sense_hdr*) ;

__attribute__((used)) static int FUNC_4(struct scsi_device *VAR_13, struct hp_sw_dh_data *VAR_14)
{
 unsigned char VAR_15[6] = { VAR_12 };
 struct scsi_sense_hdr VAR_16;
 int VAR_17 = VAR_11, VAR_18;
 u64 VAR_19 = VAR_6 | VAR_8 |
  VAR_7;

retry:
 VAR_18 = FUNC_0(VAR_13, VAR_15, VAR_0, ((void*)0), 0, ((void*)0), &VAR_16,
   VAR_4, VAR_3, VAR_19, 0, ((void*)0));
 if (VAR_18) {
  if (FUNC_1(&VAR_16))
   VAR_17 = FUNC_3(VAR_13, VAR_14, &VAR_16);
  else {
   FUNC_2(VAR_5, VAR_13,
        "%s: sending tur failed with %x\n",
        VAR_1, VAR_18);
   VAR_17 = VAR_10;
  }
 } else {
  VAR_14->path_state = VAR_2;
  VAR_17 = VAR_11;
 }
 if (VAR_17 == VAR_9)
  goto retry;

 return VAR_17;
}
