
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ipr_ioa_cfg {int dummy; } ;
struct ipr_hostrcb_type_21_error {char* primary_problem_desc; char* second_problem_desc; int length_of_error; int ioa_data; int cdb; int sense_data; int res_path; int * wwn; } ;
struct TYPE_5__ {struct ipr_hostrcb_type_21_error type_21_error; } ;
struct TYPE_6__ {TYPE_1__ u; } ;
struct TYPE_7__ {TYPE_2__ error64; } ;
struct TYPE_8__ {TYPE_3__ u; } ;
struct ipr_hostrcb {TYPE_4__ hcam; } ;
typedef int buffer ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct ipr_ioa_cfg*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct ipr_ioa_cfg *VAR_1,
      struct ipr_hostrcb *VAR_2)
{
 struct ipr_hostrcb_type_21_error *VAR_3;
 char VAR_4[VAR_0];

 VAR_3 = &VAR_2->hcam.u.error64.u.type_21_error;

 FUNC_2("-----Failing Device Information-----\n");
 FUNC_2("World Wide Unique ID: %08X%08X%08X%08X\n",
  FUNC_1(VAR_3->wwn[0]), FUNC_1(VAR_3->wwn[1]),
   FUNC_1(VAR_3->wwn[2]), FUNC_1(VAR_3->wwn[3]));
 FUNC_2("Device Resource Path: %s\n",
  FUNC_0(VAR_3->res_path,
          VAR_4, sizeof(VAR_4)));
 VAR_3->primary_problem_desc[sizeof(VAR_3->primary_problem_desc) - 1] = '\0';
 VAR_3->second_problem_desc[sizeof(VAR_3->second_problem_desc) - 1] = '\0';
 FUNC_2("Primary Problem Description: %s\n", VAR_3->primary_problem_desc);
 FUNC_2("Secondary Problem Description:  %s\n", VAR_3->second_problem_desc);
 FUNC_2("SCSI Sense Data:\n");
 FUNC_3(VAR_1, VAR_3->sense_data, sizeof(VAR_3->sense_data));
 FUNC_2("SCSI Command Descriptor Block: \n");
 FUNC_3(VAR_1, VAR_3->cdb, sizeof(VAR_3->cdb));

 FUNC_2("Additional IOA Data:\n");
 FUNC_3(VAR_1, VAR_3->ioa_data, FUNC_1(VAR_3->length_of_error));
}
