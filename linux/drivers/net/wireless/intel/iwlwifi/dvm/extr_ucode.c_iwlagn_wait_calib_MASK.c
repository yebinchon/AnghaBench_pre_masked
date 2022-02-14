
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cmd; } ;
struct iwl_rx_packet {scalar_t__ data; TYPE_1__ hdr; } ;
struct iwl_priv {int dummy; } ;
struct iwl_notif_wait_data {int dummy; } ;
struct iwl_calib_hdr {int op_code; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct iwl_priv*,char*,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct iwl_priv*,struct iwl_calib_hdr*,int ) ;
 int FUNC_3 (struct iwl_rx_packet*) ;

__attribute__((used)) static bool FUNC_4(struct iwl_notif_wait_data *VAR_2,
         struct iwl_rx_packet *VAR_3, void *VAR_4)
{
 struct iwl_priv *VAR_5 = VAR_4;
 struct iwl_calib_hdr *VAR_6;

 if (VAR_3->hdr.cmd != VAR_1) {
  FUNC_1(VAR_3->hdr.cmd != VAR_0);
  return 1;
 }

 VAR_6 = (struct iwl_calib_hdr *)VAR_3->data;

 if (FUNC_2(VAR_5, VAR_6, FUNC_3(VAR_3)))
  FUNC_0(VAR_5, "Failed to record calibration data %d\n",
   VAR_6->op_code);

 return 0;
}
