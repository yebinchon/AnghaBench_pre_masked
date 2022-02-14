
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_spectrum_notification {int state; } ;
struct iwl_rx_packet {scalar_t__ data; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct iwl_priv {int measurement_status; int measure_report; } ;


 int FUNC_0 (struct iwl_priv*,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct iwl_spectrum_notification*,int) ;
 struct iwl_rx_packet* FUNC_2 (struct iwl_rx_cmd_buffer*) ;

__attribute__((used)) static void FUNC_3(struct iwl_priv *VAR_1,
          struct iwl_rx_cmd_buffer *VAR_2)
{
 struct iwl_rx_packet *VAR_3 = FUNC_2(VAR_2);
 struct iwl_spectrum_notification *VAR_4 = (void *)VAR_3->data;

 if (!VAR_4->state) {
  FUNC_0(VAR_1,
   "Spectrum Measure Notification: Start\n");
  return;
 }

 FUNC_1(&VAR_1->measure_report, VAR_4, sizeof(*VAR_4));
 VAR_1->measurement_status |= VAR_0;
}
