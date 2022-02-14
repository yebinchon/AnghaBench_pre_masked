
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct wil_rx_status_extended {int dummy; } ;
struct wil_rx_status_compressed {int dummy; } ;
struct wil_net_stats {int rx_non_data_frame; } ;
struct wil6210_vif {int dummy; } ;
struct wil6210_priv {scalar_t__ use_compressed_rx_status; struct wil6210_vif** vifs; } ;
struct sk_buff {void const* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct wil6210_priv*,char*,scalar_t__,...) ;
 int FUNC_4 (char*,int ,int,int,void const*,int,int) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct wil6210_priv*,struct wil6210_vif*,int,int,int ) ;
 scalar_t__ FUNC_7 (struct wil6210_priv*,void*) ;
 scalar_t__ FUNC_8 (struct wil6210_priv*,void*) ;
 int FUNC_9 (void*) ;
 int FUNC_10 (struct wil6210_priv*,void*) ;
 int FUNC_11 (void*) ;

__attribute__((used)) static int FUNC_12(struct wil6210_priv *VAR_4, void *VAR_5, int VAR_6,
    struct sk_buff *VAR_7, struct wil_net_stats *VAR_8)
{
 u8 VAR_9;
 u8 VAR_10;
 int VAR_11;
 int VAR_12;
 u16 VAR_13;
 struct wil6210_vif *VAR_14;

 VAR_9 = FUNC_8(VAR_4, VAR_5);
 if (VAR_9 == VAR_3)
  return 0;

 VAR_10 = FUNC_7(VAR_4, VAR_5);
 VAR_11 = FUNC_9(VAR_5);
 VAR_12 = FUNC_11(VAR_5);
 VAR_13 = FUNC_0(FUNC_10(VAR_4, VAR_5));
 VAR_14 = VAR_4->vifs[VAR_11];

 if (FUNC_2(!VAR_14)) {
  FUNC_3(VAR_4, "RX descriptor with invalid mid %d", VAR_11);
  return -VAR_2;
 }

 FUNC_3(VAR_4,
       "Non-data frame FC[7:0] 0x%02x MID %d CID %d TID %d Seq 0x%03x\n",
       VAR_10, VAR_11, VAR_6, VAR_12, VAR_13);
 if (VAR_8)
  VAR_8->rx_non_data_frame++;
 if (FUNC_5(VAR_10)) {
  FUNC_3(VAR_4,
        "BAR: MID %d CID %d TID %d Seq 0x%03x\n",
        VAR_11, VAR_6, VAR_12, VAR_13);
  FUNC_6(VAR_4, VAR_14, VAR_6, VAR_12, VAR_13);
 } else {
  u32 VAR_15 = VAR_4->use_compressed_rx_status ?
   sizeof(struct wil_rx_status_compressed) :
   sizeof(struct wil_rx_status_extended);




  FUNC_3(VAR_4,
        "Unhandled non-data frame FC[7:0] 0x%02x MID %d CID %d TID %d Seq 0x%03x\n",
        VAR_10, VAR_11, VAR_6, VAR_12, VAR_13);
  FUNC_4("RxS ", VAR_0, 32, 4,
      (const void *)VAR_5, VAR_15, 0);
  FUNC_4("Rx ", VAR_1, 16, 1,
      VAR_7->data, FUNC_1(VAR_7), 0);
 }

 return -VAR_2;
}
