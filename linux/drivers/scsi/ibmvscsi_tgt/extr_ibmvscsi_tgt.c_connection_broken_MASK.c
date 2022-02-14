
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct viosrp_crq {int status; int format; int valid; } ;
struct TYPE_2__ {int unit_id; } ;
struct scsi_info {int dev; TYPE_1__ dds; } ;


 long VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,long) ;
 long FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static bool FUNC_3(struct scsi_info *VAR_6)
{
 struct viosrp_crq *VAR_7;
 u64 VAR_8[2] = { 0, 0 };
 long VAR_9;
 bool VAR_10 = 0;


 VAR_7 = (struct viosrp_crq *)&VAR_8;
 VAR_7->valid = VAR_5;
 VAR_7->format = VAR_1;
 VAR_7->status = VAR_4;

 VAR_9 = FUNC_2(VAR_6->dds.unit_id,
       FUNC_0(VAR_8[VAR_2]),
       FUNC_0(VAR_8[VAR_3]));

 FUNC_1(&VAR_6->dev, "Connection_broken: rc %ld\n", VAR_9);

 if (VAR_9 == VAR_0)
  VAR_10 = 1;

 return VAR_10;
}
