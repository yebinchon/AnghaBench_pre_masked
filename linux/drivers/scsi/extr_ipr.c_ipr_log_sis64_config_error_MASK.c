
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ipr_ioa_cfg {int dummy; } ;
struct ipr_hostrcb_type_23_error {struct ipr_hostrcb64_device_data_entry_enhanced* dev; int errors_detected; int errors_logged; } ;
struct ipr_hostrcb64_device_data_entry_enhanced {int cfc_last_with_dev_vpd; int ioa_last_with_dev_vpd; int new_vpd; int vpd; int res_path; } ;
struct TYPE_5__ {struct ipr_hostrcb_type_23_error type_23_error; } ;
struct TYPE_6__ {TYPE_1__ u; } ;
struct TYPE_7__ {TYPE_2__ error64; } ;
struct TYPE_8__ {TYPE_3__ u; } ;
struct ipr_hostrcb {TYPE_4__ hcam; } ;
typedef int buffer ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ipr_ioa_cfg *VAR_2,
           struct ipr_hostrcb *VAR_3)
{
 int VAR_4, VAR_5;
 struct ipr_hostrcb64_device_data_entry_enhanced *VAR_6;
 struct ipr_hostrcb_type_23_error *VAR_7;
 char VAR_8[VAR_0];

 VAR_7 = &VAR_3->hcam.u.error64.u.type_23_error;
 VAR_4 = FUNC_1(VAR_7->errors_logged);

 FUNC_2("Device Errors Detected/Logged: %d/%d\n",
  FUNC_1(VAR_7->errors_detected), VAR_4);

 VAR_6 = VAR_7->dev;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++, VAR_6++) {
  VAR_1;

  FUNC_2("Device %d : %s", VAR_5 + 1,
   FUNC_0(VAR_6->res_path,
           VAR_8, sizeof(VAR_8)));
  FUNC_3(&VAR_6->vpd);

  FUNC_2("-----New Device Information-----\n");
  FUNC_3(&VAR_6->new_vpd);

  FUNC_2("Cache Directory Card Information:\n");
  FUNC_3(&VAR_6->ioa_last_with_dev_vpd);

  FUNC_2("Adapter Card Information:\n");
  FUNC_3(&VAR_6->cfc_last_with_dev_vpd);
 }
}
