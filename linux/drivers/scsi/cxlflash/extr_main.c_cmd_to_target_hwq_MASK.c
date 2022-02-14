
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct scsi_cmnd {int request; } ;
struct afu {int num_hwqs; int hwq_mode; int hwq_rr_count; } ;
struct Scsi_Host {int dummy; } ;





 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;

__attribute__((used)) static u32 FUNC_4(struct Scsi_Host *VAR_0, struct scsi_cmnd *VAR_1,
        struct afu *VAR_2)
{
 u32 VAR_3;
 u32 VAR_4 = 0;

 if (VAR_2->num_hwqs == 1)
  return 0;

 switch (VAR_2->hwq_mode) {
 case 129:
  VAR_4 = VAR_2->hwq_rr_count++ % VAR_2->num_hwqs;
  break;
 case 128:
  VAR_3 = FUNC_1(VAR_1->request);
  VAR_4 = FUNC_2(VAR_3);
  break;
 case 130:
  VAR_4 = FUNC_3() % VAR_2->num_hwqs;
  break;
 default:
  FUNC_0(1);
 }

 return VAR_4;
}
