
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct il_rxon_cmd {int filter_flags; scalar_t__ channel; int bssid_addr; int flags; } ;
struct il_priv {scalar_t__ switch_channel; int tx_power_next; struct il_rxon_cmd staging; scalar_t__ start_calib; TYPE_2__* cfg; int status; int active; } ;
struct TYPE_4__ {TYPE_1__* mod_params; } ;
struct TYPE_3__ {int sw_crypto; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct il_priv*) ;
 int FUNC_4 (struct il_priv*) ;
 int FUNC_5 (struct il_priv*) ;
 int FUNC_6 (struct il_priv*,int) ;
 int FUNC_7 (struct il_priv*) ;
 int FUNC_8 (struct il_priv*) ;
 int FUNC_9 (struct il_priv*) ;
 scalar_t__ FUNC_10 (struct il_priv*) ;
 int FUNC_11 (struct il_priv*) ;
 int FUNC_12 (struct il_priv*) ;
 int FUNC_13 (struct il_priv*,int ,int,struct il_rxon_cmd*) ;
 int FUNC_14 (struct il_priv*) ;
 int FUNC_15 (struct il_priv*,int) ;
 int FUNC_16 (struct il_priv*,int ,int) ;
 int FUNC_17 (scalar_t__) ;
 int FUNC_18 (struct il_rxon_cmd*,struct il_rxon_cmd*,int) ;
 scalar_t__ FUNC_19 (int ,int *) ;

__attribute__((used)) static int
FUNC_20(struct il_priv *VAR_6)
{

 struct il_rxon_cmd *VAR_7 = (void *)&VAR_6->active;
 int VAR_8;
 bool VAR_9 = !!(VAR_6->staging.filter_flags & VAR_3);

 if (!FUNC_9(VAR_6))
  return -VAR_1;


 VAR_6->staging.flags |= VAR_4;

 VAR_8 = FUNC_5(VAR_6);
 if (VAR_8) {
  FUNC_2("Invalid RXON configuration.  Not committing.\n");
  return -VAR_2;
 }





 if (FUNC_19(VAR_5, &VAR_6->status) &&
     VAR_6->switch_channel != VAR_6->staging.channel) {
  FUNC_0("abort channel switch on %d\n",
        FUNC_17(VAR_6->switch_channel));
  FUNC_6(VAR_6, 0);
 }




 if (!FUNC_8(VAR_6)) {
  VAR_8 = FUNC_14(VAR_6);
  if (VAR_8) {
   FUNC_2("Error setting RXON_ASSOC (%d)\n", VAR_8);
   return VAR_8;
  }

  FUNC_18(VAR_7, &VAR_6->staging, sizeof(*VAR_7));
  FUNC_11(VAR_6);




  FUNC_16(VAR_6, VAR_6->tx_power_next, 0);
  return 0;
 }





 if (FUNC_10(VAR_6) && VAR_9) {
  FUNC_1("Toggling associated bit on current RXON\n");
  VAR_7->filter_flags &= ~VAR_3;

  VAR_8 =
      FUNC_13(VAR_6, VAR_0,
        sizeof(struct il_rxon_cmd), VAR_7);



  if (VAR_8) {
   VAR_7->filter_flags |= VAR_3;
   FUNC_2("Error clearing ASSOC_MSK (%d)\n", VAR_8);
   return VAR_8;
  }
  FUNC_7(VAR_6);
  FUNC_12(VAR_6);
  VAR_8 = FUNC_4(VAR_6);
  if (VAR_8) {
   FUNC_2("Failed to restore WEP keys (%d)\n", VAR_8);
   return VAR_8;
  }
 }

 FUNC_1("Sending RXON\n" "* with%s RXON_FILTER_ASSOC_MSK\n"
        "* channel = %d\n" "* bssid = %pM\n", (VAR_9 ? "" : "out"),
        FUNC_17(VAR_6->staging.channel), VAR_6->staging.bssid_addr);

 FUNC_15(VAR_6, !VAR_6->cfg->mod_params->sw_crypto);





 if (!VAR_9) {
  VAR_8 =
      FUNC_13(VAR_6, VAR_0,
        sizeof(struct il_rxon_cmd), &VAR_6->staging);
  if (VAR_8) {
   FUNC_2("Error setting new RXON (%d)\n", VAR_8);
   return VAR_8;
  }
  FUNC_1("Return from !new_assoc RXON.\n");
  FUNC_18(VAR_7, &VAR_6->staging, sizeof(*VAR_7));
  FUNC_7(VAR_6);
  FUNC_12(VAR_6);
  VAR_8 = FUNC_4(VAR_6);
  if (VAR_8) {
   FUNC_2("Failed to restore WEP keys (%d)\n", VAR_8);
   return VAR_8;
  }
 }
 if (VAR_9) {
  VAR_6->start_calib = 0;



  VAR_8 =
      FUNC_13(VAR_6, VAR_0,
        sizeof(struct il_rxon_cmd), &VAR_6->staging);
  if (VAR_8) {
   FUNC_2("Error setting new RXON (%d)\n", VAR_8);
   return VAR_8;
  }
  FUNC_18(VAR_7, &VAR_6->staging, sizeof(*VAR_7));
 }
 FUNC_11(VAR_6);

 FUNC_3(VAR_6);



 VAR_8 = FUNC_16(VAR_6, VAR_6->tx_power_next, 1);
 if (VAR_8) {
  FUNC_2("Error sending TX power (%d)\n", VAR_8);
  return VAR_8;
 }

 return 0;
}
