
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_rx_packet {scalar_t__ data; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct iwl_priv {scalar_t__ missed_beacon_threshold; int status; } ;
struct iwl_missed_beacon_notif {int num_expected_beacons; int num_recvd_beacons; int total_missed_becons; int consecutive_missed_beacons; } ;


 int FUNC_0 (struct iwl_priv*,char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (struct iwl_priv*) ;
 scalar_t__ FUNC_2 (int ) ;
 struct iwl_rx_packet* FUNC_3 (struct iwl_rx_cmd_buffer*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct iwl_priv *VAR_1,
       struct iwl_rx_cmd_buffer *VAR_2)

{
 struct iwl_rx_packet *VAR_3 = FUNC_3(VAR_2);
 struct iwl_missed_beacon_notif *VAR_4 = (void *)VAR_3->data;

 if (FUNC_2(VAR_4->consecutive_missed_beacons) >
     VAR_1->missed_beacon_threshold) {
  FUNC_0(VAR_1,
      "missed bcn cnsq %d totl %d rcd %d expctd %d\n",
      FUNC_2(VAR_4->consecutive_missed_beacons),
      FUNC_2(VAR_4->total_missed_becons),
      FUNC_2(VAR_4->num_recvd_beacons),
      FUNC_2(VAR_4->num_expected_beacons));
  if (!FUNC_4(VAR_0, &VAR_1->status))
   FUNC_1(VAR_1);
 }
}
