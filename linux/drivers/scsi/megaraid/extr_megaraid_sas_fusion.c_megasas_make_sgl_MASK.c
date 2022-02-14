
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {int dummy; } ;
struct megasas_instance {int max_num_sge; } ;
struct megasas_cmd_fusion {scalar_t__ pd_interface; TYPE_1__* io_request; } ;
struct MPI25_IEEE_SGE_CHAIN64 {int dummy; } ;
struct TYPE_2__ {int IoFlags; int SGL; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct megasas_instance*,struct scsi_cmnd*,struct MPI25_IEEE_SGE_CHAIN64*,struct megasas_cmd_fusion*,int) ;
 int FUNC_2 (struct megasas_instance*,struct scsi_cmnd*,struct MPI25_IEEE_SGE_CHAIN64*,struct megasas_cmd_fusion*,int) ;
 int FUNC_3 (struct scsi_cmnd*) ;

__attribute__((used)) static
int FUNC_4(struct megasas_instance *VAR_2, struct scsi_cmnd *VAR_3,
       struct megasas_cmd_fusion *VAR_4)
{
 int VAR_5;
 bool VAR_6 = 0;
 struct MPI25_IEEE_SGE_CHAIN64 *VAR_7;

 VAR_5 = FUNC_3(VAR_3);

 if ((VAR_5 > VAR_2->max_num_sge) || (VAR_5 <= 0))
  return VAR_5;

 VAR_7 = (struct MPI25_IEEE_SGE_CHAIN64 *)&VAR_4->io_request->SGL;
 if ((FUNC_0(VAR_4->io_request->IoFlags) &
     VAR_0) &&
     (VAR_4->pd_interface == VAR_1))
  VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_7,
        VAR_4, VAR_5);

 if (!VAR_6)
  FUNC_2(VAR_2, VAR_3, VAR_7,
     VAR_4, VAR_5);

 return VAR_5;
}
