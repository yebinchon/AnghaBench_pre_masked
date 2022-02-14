
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct il3945_rxon_cmd {int filter_flags; int flags; scalar_t__ reserved5; scalar_t__ reserved4; int bssid_addr; int channel; } ;
struct il_priv {int tx_power_next; struct il3945_rxon_cmd active; int status; int staging; } ;
struct TYPE_2__ {int sw_crypto; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct il_priv*) ;
 int FUNC_3 (struct il_priv*) ;
 TYPE_1__ VAR_8 ;
 int FUNC_4 (struct il_priv*) ;
 int FUNC_5 (struct il_priv*) ;
 int FUNC_6 (struct il_priv*) ;
 int FUNC_7 (struct il_priv*) ;
 scalar_t__ FUNC_8 (struct il_priv*) ;
 int FUNC_9 (struct il_priv*) ;
 int FUNC_10 (struct il_priv*,int ,int,struct il3945_rxon_cmd*) ;
 int FUNC_11 (struct il_priv*) ;
 int FUNC_12 (struct il_priv*,int) ;
 int FUNC_13 (struct il_priv*,int ,int) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct il3945_rxon_cmd*,struct il3945_rxon_cmd*,int) ;
 scalar_t__ FUNC_16 (int ,int *) ;

int
FUNC_17(struct il_priv *VAR_9)
{

 struct il3945_rxon_cmd *VAR_10 = (void *)&VAR_9->active;
 struct il3945_rxon_cmd *VAR_11 = (void *)&VAR_9->staging;
 int VAR_12 = 0;
 bool VAR_13 = !!(VAR_11->filter_flags & VAR_3);

 if (FUNC_16(VAR_7, &VAR_9->status))
  return -VAR_1;

 if (!FUNC_7(VAR_9))
  return -1;


 VAR_11->flags |= VAR_6;


 VAR_11->flags &= ~(VAR_5 | VAR_4);
 VAR_11->flags |= FUNC_2(VAR_9);

 VAR_12 = FUNC_4(VAR_9);
 if (VAR_12) {
  FUNC_1("Invalid RXON configuration.  Not committing.\n");
  return -VAR_1;
 }




 if (!FUNC_6(VAR_9)) {
  VAR_12 = FUNC_11(VAR_9);
  if (VAR_12) {
   FUNC_1("Error setting RXON_ASSOC "
          "configuration (%d).\n", VAR_12);
   return VAR_12;
  }

  FUNC_15(VAR_10, VAR_11, sizeof(*VAR_10));




  FUNC_13(VAR_9, VAR_9->tx_power_next, 0);
  return 0;
 }





 if (FUNC_8(VAR_9) && VAR_13) {
  FUNC_0("Toggling associated bit on current RXON\n");
  VAR_10->filter_flags &= ~VAR_3;





  VAR_10->reserved4 = 0;
  VAR_10->reserved5 = 0;
  VAR_12 = FUNC_10(VAR_9, VAR_0, sizeof(struct il3945_rxon_cmd),
         &VAR_9->active);



  if (VAR_12) {
   VAR_10->filter_flags |= VAR_3;
   FUNC_1("Error clearing ASSOC_MSK on current "
          "configuration (%d).\n", VAR_12);
   return VAR_12;
  }
  FUNC_5(VAR_9);
  FUNC_9(VAR_9);
 }

 FUNC_0("Sending RXON\n" "* with%s RXON_FILTER_ASSOC_MSK\n"
        "* channel = %d\n" "* bssid = %pM\n", (VAR_13 ? "" : "out"),
        FUNC_14(VAR_11->channel), VAR_11->bssid_addr);





 VAR_11->reserved4 = 0;
 VAR_11->reserved5 = 0;

 FUNC_12(VAR_9, !VAR_8.sw_crypto);


 VAR_12 = FUNC_10(VAR_9, VAR_0, sizeof(struct il3945_rxon_cmd),
        VAR_11);
 if (VAR_12) {
  FUNC_1("Error setting new configuration (%d).\n", VAR_12);
  return VAR_12;
 }

 FUNC_15(VAR_10, VAR_11, sizeof(*VAR_10));

 if (!VAR_13) {
  FUNC_5(VAR_9);
  FUNC_9(VAR_9);
 }



 VAR_12 = FUNC_13(VAR_9, VAR_9->tx_power_next, 1);
 if (VAR_12) {
  FUNC_1("Error setting Tx power (%d).\n", VAR_12);
  return VAR_12;
 }


 VAR_12 = FUNC_3(VAR_9);
 if (VAR_12) {
  FUNC_1("Error setting HW rate table: %02X\n", VAR_12);
  return -VAR_2;
 }

 return 0;
}
