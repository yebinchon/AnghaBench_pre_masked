
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct viosrp_crq {int dummy; } ;
struct scsi_info {int state; long flags; int debit; int dev; } ;
struct mad_common {int status; int type; } ;
struct iu_entry {int dummy; } ;
struct ibmvscsis_cmd {int type; struct iu_entry* iue; } ;
struct TYPE_2__ {int mad; } ;


 int VAR_0 ;
 long VAR_1 ;

 long VAR_2 ;






 int FUNC_0 (int ) ;
 long FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,long,...) ;
 int FUNC_3 (int *,char*,int) ;
 long FUNC_4 (struct scsi_info*,struct ibmvscsis_cmd*,struct viosrp_crq*) ;
 int FUNC_5 (struct scsi_info*,struct ibmvscsis_cmd*) ;
 struct ibmvscsis_cmd* FUNC_6 (struct scsi_info*) ;
 int FUNC_7 (struct scsi_info*,int const,int ) ;
 long FUNC_8 (struct scsi_info*,struct iu_entry*) ;
 int FUNC_9 (struct scsi_info*,struct ibmvscsis_cmd*,struct viosrp_crq*) ;
 TYPE_1__* FUNC_10 (struct iu_entry*) ;

__attribute__((used)) static long FUNC_11(struct scsi_info *VAR_3, struct viosrp_crq *VAR_4)
{
 struct iu_entry *VAR_5;
 struct ibmvscsis_cmd *VAR_6;
 struct mad_common *VAR_7;
 long VAR_8 = VAR_1;

 switch (VAR_3->state) {





 case 129:
  FUNC_2(&VAR_3->dev, "mad: in Wait Connection state, ignoring MAD, flags %d\n",
   VAR_3->flags);
  return VAR_1;

 case 131:
 case 134:
  break;





 case 130:
 case 128:
 case 133:
 case 132:
 default:
  FUNC_3(&VAR_3->dev, "mad: invalid adapter state %d for mad\n",
   VAR_3->state);
  return VAR_1;
 }

 VAR_6 = FUNC_6(VAR_3);
 if (!VAR_6) {
  FUNC_3(&VAR_3->dev, "mad: failed to get cmd, debit %d\n",
   VAR_3->debit);
  FUNC_7(VAR_3, 132, 0);
  return VAR_2;
 }
 VAR_5 = VAR_6->iue;
 VAR_6->type = VAR_0;

 VAR_8 = FUNC_4(VAR_3, VAR_6, VAR_4);
 if (!VAR_8) {
  VAR_7 = (struct mad_common *)&FUNC_10(VAR_5)->mad;

  FUNC_2(&VAR_3->dev, "mad: type %d\n", FUNC_1(VAR_7->type));

  VAR_8 = FUNC_8(VAR_3, VAR_5);

  FUNC_2(&VAR_3->dev, "mad: status %hd, rc %ld\n",
   FUNC_0(VAR_7->status), VAR_8);

  if (!VAR_8)
   FUNC_9(VAR_3, VAR_6, VAR_4);
 } else {
  FUNC_5(VAR_3, VAR_6);
 }

 FUNC_2(&VAR_3->dev, "Leaving mad, rc %ld\n", VAR_8);
 return VAR_8;
}
