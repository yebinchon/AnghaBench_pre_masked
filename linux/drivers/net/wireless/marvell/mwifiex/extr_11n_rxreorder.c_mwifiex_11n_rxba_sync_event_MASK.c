
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct mwifiex_rx_reorder_tbl {int dummy; } ;
struct mwifiex_private {int adapter; } ;
struct TYPE_2__ {int len; int type; } ;
struct mwifiex_ie_types_rxba_sync {int* bitmap; int mac; int tid; int bitmap_len; int seq_num; TYPE_1__ header; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 struct mwifiex_rx_reorder_tbl* FUNC_1 (struct mwifiex_private*,int ,int ) ;
 int FUNC_2 (struct mwifiex_private*,scalar_t__,int ,int ,int ,int *) ;
 int FUNC_3 (int ,int ,char*,...) ;
 int FUNC_4 (int ,int ,char*,scalar_t__*,scalar_t__) ;

void FUNC_5(struct mwifiex_private *VAR_5,
     u8 *VAR_6, u16 VAR_7)
{
 struct mwifiex_ie_types_rxba_sync *VAR_8 = (void *)VAR_6;
 u16 VAR_9, VAR_10;
 struct mwifiex_rx_reorder_tbl *VAR_11;
 u8 VAR_12, VAR_13;
 u16 VAR_14, VAR_15, VAR_16;
 int VAR_17 = VAR_7;
 int VAR_18;
 u8 *VAR_19;

 FUNC_4(VAR_5->adapter, VAR_1, "RXBA_SYNC event:",
    VAR_6, VAR_7);
 while (VAR_17 >= sizeof(*VAR_8)) {
  VAR_9 = FUNC_0(VAR_8->header.type);
  VAR_10 = FUNC_0(VAR_8->header.len);
  if (VAR_9 != VAR_4) {
   FUNC_3(VAR_5->adapter, VAR_0,
        "Wrong TLV id=0x%x\n", VAR_9);
   return;
  }

  VAR_15 = FUNC_0(VAR_8->seq_num);
  VAR_16 = FUNC_0(VAR_8->bitmap_len);
  FUNC_3(VAR_5->adapter, VAR_2,
       "%pM tid=%d seq_num=%d bitmap_len=%d\n",
       VAR_8->mac, VAR_8->tid, VAR_15,
       VAR_16);

  VAR_11 =
   FUNC_1(VAR_5, VAR_8->tid,
             VAR_8->mac);
  if (!VAR_11) {
   FUNC_3(VAR_5->adapter, VAR_0,
        "Can not find rx_reorder_tbl!");
   return;
  }

  for (VAR_12 = 0; VAR_12 < VAR_16; VAR_12++) {
   for (VAR_13 = 0 ; VAR_13 < 8; VAR_13++) {
    if (VAR_8->bitmap[VAR_12] & (1 << VAR_13)) {
     VAR_14 = (VAR_3 - 1) &
      (VAR_15 + VAR_12 * 8 + VAR_13);

     FUNC_3(VAR_5->adapter, VAR_0,
          "drop packet,seq=%d\n",
          VAR_14);

     VAR_18 = FUNC_2
     (VAR_5, VAR_14, VAR_8->tid,
      VAR_8->mac, 0, ((void*)0));

     if (VAR_18)
      FUNC_3(VAR_5->adapter,
           VAR_0,
           "Fail to drop packet");
    }
   }
  }

  VAR_17 -= (sizeof(*VAR_8) + VAR_10);
  VAR_19 = (u8 *)VAR_8 + VAR_10 + sizeof(*VAR_8);
  VAR_8 = (struct mwifiex_ie_types_rxba_sync *)VAR_19;
 }
}
