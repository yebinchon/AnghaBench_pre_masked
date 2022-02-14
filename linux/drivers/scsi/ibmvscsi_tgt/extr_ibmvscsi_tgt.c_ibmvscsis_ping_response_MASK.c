
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u64 ;
struct viosrp_crq {int status; scalar_t__ format; int valid; } ;
struct TYPE_2__ {int unit_id; } ;
struct scsi_info {int dev; int flags; TYPE_1__ dds; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,long) ;
 long FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct scsi_info*,int ,int ) ;

__attribute__((used)) static long FUNC_4(struct scsi_info *VAR_9)
{
 struct viosrp_crq *VAR_10;
 u64 VAR_11[2] = { 0, 0 };
 long VAR_12;

 VAR_10 = (struct viosrp_crq *)&VAR_11;
 VAR_10->valid = VAR_8;
 VAR_10->format = (u8)VAR_3;
 VAR_10->status = VAR_6;

 VAR_12 = FUNC_2(VAR_9->dds.unit_id, FUNC_0(VAR_11[VAR_4]),
   FUNC_0(VAR_11[VAR_5]));

 switch (VAR_12) {
 case 128:
  break;
 case 131:
  VAR_9->flags |= VAR_0;

 case 130:
  VAR_9->flags |= VAR_7;

 case 129:
  FUNC_1(&VAR_9->dev, "ping_response: h_send_crq failed, rc %ld\n",
   VAR_12);
  FUNC_3(VAR_9, VAR_2, 0);
  break;
 default:
  FUNC_1(&VAR_9->dev, "ping_response: h_send_crq returned unknown rc %ld\n",
   VAR_12);
  FUNC_3(VAR_9, VAR_1, 0);
  break;
 }

 return VAR_12;
}
