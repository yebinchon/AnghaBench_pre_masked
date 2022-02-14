
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_rx_packet {scalar_t__ data; } ;
struct iwl_mvm {int dummy; } ;
struct iwl_dts_measurement_notif_v1 {int temp; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_mvm*,char*,int) ;
 int FUNC_1 (struct iwl_mvm*,char*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct iwl_rx_packet*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct iwl_mvm *VAR_1,
        struct iwl_rx_packet *VAR_2)
{
 struct iwl_dts_measurement_notif_v1 *VAR_3;
 int VAR_4 = FUNC_3(VAR_2);
 int VAR_5;




 if (FUNC_2(VAR_4 < sizeof(*VAR_3))) {
  FUNC_1(VAR_1, "Invalid DTS_MEASUREMENT_NOTIFICATION\n");
  return -VAR_0;
 }

 VAR_3 = (void *)VAR_2->data;

 VAR_5 = FUNC_4(VAR_3->temp);


 if (FUNC_2(VAR_5 < 0))
  VAR_5 = 0;

 FUNC_0(VAR_1, "DTS_MEASUREMENT_NOTIFICATION - %d\n", VAR_5);

 return VAR_5;
}
