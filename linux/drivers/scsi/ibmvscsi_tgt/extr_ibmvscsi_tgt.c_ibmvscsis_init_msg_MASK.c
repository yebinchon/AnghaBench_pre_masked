
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint ;
typedef int u64 ;
struct viosrp_crq {scalar_t__ format; } ;
struct TYPE_4__ {long partition_number; } ;
struct TYPE_3__ {int unit_id; } ;
struct scsi_info {long state; int dev; TYPE_2__ client_data; scalar_t__ map_buf; scalar_t__ map_ioba; TYPE_1__ dds; } ;


 long VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 long VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 long FUNC_0 (int) ;
 int FUNC_1 (int *,char*,long) ;
 int FUNC_2 (int *,char*,int ) ;
 long FUNC_3 (int ,int ,int,int ,int ,int ,int ) ;
 long FUNC_4 (struct scsi_info*) ;
 long FUNC_5 (struct scsi_info*) ;
 int FUNC_6 (struct scsi_info*,int ,int ) ;

__attribute__((used)) static long FUNC_7(struct scsi_info *VAR_8, struct viosrp_crq *VAR_9)
{
 long VAR_10 = VAR_0;

 FUNC_1(&VAR_8->dev, "init_msg: state 0x%hx\n", VAR_8->state);

 VAR_10 = FUNC_3(VAR_8->dds.unit_id, VAR_3,
        (u64)VAR_8->map_ioba | ((u64)VAR_7 << 32), 0, 0, 0,
        0);
 if (VAR_10 == VAR_4) {
  VAR_8->client_data.partition_number =
   FUNC_0(*(u64 *)VAR_8->map_buf);
  FUNC_1(&VAR_8->dev, "init_msg, part num %d\n",
   VAR_8->client_data.partition_number);
 } else {
  FUNC_1(&VAR_8->dev, "init_msg h_vioctl rc %ld\n", VAR_10);
  VAR_10 = VAR_0;
 }

 if (VAR_9->format == VAR_6) {
  VAR_10 = FUNC_5(VAR_8);
 } else if (VAR_9->format == VAR_5) {
  VAR_10 = FUNC_4(VAR_8);
 } else {
  VAR_10 = VAR_1;
  FUNC_2(&VAR_8->dev, "init_msg: invalid format %d\n",
   (uint)VAR_9->format);
  FUNC_6(VAR_8, VAR_2, 0);
 }

 return VAR_10;
}
