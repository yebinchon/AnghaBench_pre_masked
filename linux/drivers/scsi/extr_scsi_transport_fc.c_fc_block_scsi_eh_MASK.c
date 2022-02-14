
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int device; } ;
struct fc_rport {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct fc_rport*) ;
 int FUNC_2 (int ) ;
 struct fc_rport* FUNC_3 (int ) ;

int FUNC_4(struct scsi_cmnd *VAR_1)
{
 struct fc_rport *VAR_2 = FUNC_3(FUNC_2(VAR_1->device));

 if (FUNC_0(!VAR_2))
  return VAR_0;

 return FUNC_1(VAR_2);
}
