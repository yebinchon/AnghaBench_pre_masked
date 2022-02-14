
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_trans {int dummy; } ;
struct iwl_cfg_trans_params {scalar_t__ device_family; scalar_t__ bisr_workaround; TYPE_1__* csr; } ;
struct TYPE_2__ {int flag_mac_clock_ready; int flag_init_done; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct iwl_trans*,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct iwl_trans*,int ,int ,int ,int) ;
 int FUNC_3 (struct iwl_trans*,int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;

int FUNC_6(struct iwl_trans *VAR_2,
   const struct iwl_cfg_trans_params *VAR_3)
{
 int VAR_4;

 if (VAR_3->bisr_workaround) {

  FUNC_4(2);
 }





 FUNC_3(VAR_2, VAR_0,
      FUNC_0(VAR_3->csr->flag_init_done));

 if (VAR_3->device_family == VAR_1)
  FUNC_5(2);






 VAR_4 = FUNC_2(VAR_2, VAR_0,
      FUNC_0(VAR_3->csr->flag_mac_clock_ready),
      FUNC_0(VAR_3->csr->flag_mac_clock_ready),
      25000);
 if (VAR_4 < 0)
  FUNC_1(VAR_2, "Failed to wake NIC\n");

 if (VAR_3->bisr_workaround) {

  FUNC_5(200);
 }

 return VAR_4 < 0 ? VAR_4 : 0;
}
