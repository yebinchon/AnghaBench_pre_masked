
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct viosrp_crq {int format; int valid; } ;
struct TYPE_2__ {int unit_id; } ;
struct scsi_info {TYPE_1__ dds; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 long FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static long FUNC_2(struct scsi_info *VAR_3, u8 VAR_4)
{
 struct viosrp_crq *VAR_5;
 u64 VAR_6[2] = { 0, 0 };
 long VAR_7;

 VAR_5 = (struct viosrp_crq *)&VAR_6;
 VAR_5->valid = VAR_2;
 VAR_5->format = VAR_4;
 VAR_7 = FUNC_1(VAR_3->dds.unit_id, FUNC_0(VAR_6[VAR_0]),
   FUNC_0(VAR_6[VAR_1]));

 return VAR_7;
}
