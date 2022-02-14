
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ipr_ioa_cfg {int dummy; } ;
struct ipr_hostrcb_type_13_error {struct ipr_hostrcb_device_data_entry_enhanced* dev; int errors_detected; int errors_logged; } ;
struct ipr_hostrcb_device_data_entry_enhanced {int cfc_last_with_dev_vpd; int ioa_last_with_dev_vpd; int new_vpd; int vpd; int dev_res_addr; } ;
struct TYPE_5__ {struct ipr_hostrcb_type_13_error type_13_error; } ;
struct TYPE_6__ {TYPE_1__ u; } ;
struct TYPE_7__ {TYPE_2__ error; } ;
struct TYPE_8__ {TYPE_3__ u; } ;
struct ipr_hostrcb {TYPE_4__ hcam; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ipr_ioa_cfg*,int ,char*,int) ;

__attribute__((used)) static void FUNC_4(struct ipr_ioa_cfg *VAR_1,
       struct ipr_hostrcb *VAR_2)
{
 int VAR_3, VAR_4;
 struct ipr_hostrcb_device_data_entry_enhanced *VAR_5;
 struct ipr_hostrcb_type_13_error *VAR_6;

 VAR_6 = &VAR_2->hcam.u.error.u.type_13_error;
 VAR_3 = FUNC_0(VAR_6->errors_logged);

 FUNC_1("Device Errors Detected/Logged: %d/%d\n",
  FUNC_0(VAR_6->errors_detected), VAR_3);

 VAR_5 = VAR_6->dev;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++, VAR_5++) {
  VAR_0;

  FUNC_3(VAR_1, VAR_5->dev_res_addr, "Device %d", VAR_4 + 1);
  FUNC_2(&VAR_5->vpd);

  FUNC_1("-----New Device Information-----\n");
  FUNC_2(&VAR_5->new_vpd);

  FUNC_1("Cache Directory Card Information:\n");
  FUNC_2(&VAR_5->ioa_last_with_dev_vpd);

  FUNC_1("Adapter Card Information:\n");
  FUNC_2(&VAR_5->cfc_last_with_dev_vpd);
 }
}
