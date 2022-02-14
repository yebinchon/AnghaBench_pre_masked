
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_sense_hdr {int dummy; } ;
struct scsi_device {int dummy; } ;
struct alua_port_group {int tpgs; int state; int flags; int group_id; int pref; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;






 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct scsi_device*,int ,struct scsi_sense_hdr*) ;
 int FUNC_2 (struct scsi_sense_hdr*) ;
 int FUNC_3 (int ,struct scsi_device*,char*,int ,...) ;
 int FUNC_4 (struct scsi_device*,int ,struct scsi_sense_hdr*) ;

__attribute__((used)) static unsigned FUNC_5(struct scsi_device *VAR_11, struct alua_port_group *VAR_12)
{
 int VAR_13;
 struct scsi_sense_hdr VAR_14;

 if (!(VAR_12->tpgs & VAR_9)) {

  return VAR_8;
 }
 switch (VAR_12->state) {
 case 131:
  return VAR_7;
 case 133:
  if ((VAR_12->flags & VAR_1) &&
      !VAR_12->pref &&
      (VAR_12->tpgs & VAR_10))
   return VAR_7;
  break;
 case 130:
 case 128:
  break;
 case 132:
  return VAR_5;
 case 129:
  break;
 default:
  FUNC_3(VAR_3, VAR_11,
       "%s: stpg failed, unhandled TPGS state %d",
       VAR_0, VAR_12->state);
  return VAR_6;
 }
 VAR_13 = FUNC_4(VAR_11, VAR_12->group_id, &VAR_14);

 if (VAR_13) {
  if (!FUNC_2(&VAR_14)) {
   FUNC_3(VAR_3, VAR_11,
        "%s: stpg failed, result %d",
        VAR_0, VAR_13);
   if (FUNC_0(VAR_13) == VAR_2)
    return VAR_4;
  } else {
   FUNC_3(VAR_3, VAR_11, "%s: stpg failed\n",
        VAR_0);
   FUNC_1(VAR_11, VAR_0, &VAR_14);
  }
 }

 return VAR_8;
}
