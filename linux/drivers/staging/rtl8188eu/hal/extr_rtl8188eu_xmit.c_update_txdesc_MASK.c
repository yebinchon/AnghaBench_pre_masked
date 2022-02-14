
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint ;
typedef int u8 ;
struct pkt_attrib {int mac_id; int qsel; int raid; int seqnum; int ether_type; int dhcp_pkt; scalar_t__ qos_en; scalar_t__ retry_ctrl; scalar_t__ ht_en; scalar_t__ ampdu_en; int ra; } ;
struct xmit_frame {scalar_t__ pkt_offset; int frame_tag; int agg_num; scalar_t__ ack_report; struct pkt_attrib attrib; struct adapter* padapter; } ;
struct tx_desc {int txdw4; int txdw3; int txdw5; int txdw1; int txdw2; int txdw6; int txdw0; } ;
struct odm_dm_struct {int dummy; } ;
struct mlme_ext_info {scalar_t__ preamble_mode; } ;
struct mlme_ext_priv {int tx_rate; struct mlme_ext_info mlmext_info; } ;
struct TYPE_4__ {scalar_t__ mp_mode; } ;
struct adapter {TYPE_2__ registrypriv; struct mlme_ext_priv mlmeextpriv; TYPE_1__* HalData; } ;
typedef int s32 ;
struct TYPE_3__ {struct odm_dm_struct odmpriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct odm_dm_struct*,int) ;
 int FUNC_4 (struct odm_dm_struct*,int) ;
 scalar_t__ FUNC_5 (struct odm_dm_struct*,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_6 (struct adapter*,int,struct tx_desc*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct pkt_attrib*,int *) ;
 int FUNC_9 (struct pkt_attrib*,struct tx_desc*) ;
 int FUNC_10 (struct pkt_attrib*,int *) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (struct tx_desc*,int ,int) ;
 int FUNC_13 (struct tx_desc*) ;
 int FUNC_14 (struct odm_dm_struct*,int*,int) ;
 scalar_t__ FUNC_15 (struct adapter*,int) ;

__attribute__((used)) static s32 FUNC_16(struct xmit_frame *VAR_25, u8 *VAR_26, s32 VAR_27, u8 VAR_28)
{
 int VAR_29 = 0;
 uint VAR_30;
 u8 VAR_31, VAR_32, VAR_33;
 struct adapter *VAR_34 = VAR_25->padapter;
 struct pkt_attrib *VAR_35 = &VAR_25->attrib;
 struct odm_dm_struct *VAR_36 = &VAR_34->HalData->odmpriv;
 struct tx_desc *VAR_37 = (struct tx_desc *)VAR_26;
 struct mlme_ext_priv *VAR_38 = &VAR_34->mlmeextpriv;
 struct mlme_ext_info *VAR_39 = &VAR_38->mlmext_info;

 if (VAR_34->registrypriv.mp_mode == 0) {
  if ((!VAR_28) && (FUNC_15(VAR_34, VAR_27) == 0)) {
   VAR_37 = (struct tx_desc *)(VAR_26+VAR_12);
   VAR_29 = 1;
  }
 }

 FUNC_12(VAR_37, 0, sizeof(struct tx_desc));


 VAR_37->txdw0 |= FUNC_7(VAR_11 | VAR_5 | VAR_7);
 VAR_37->txdw0 |= FUNC_7(VAR_27 & 0x0000ffff);

 VAR_33 = VAR_22 + VAR_10;

 VAR_37->txdw0 |= FUNC_7(((VAR_33) << VAR_9) & 0x00ff0000);

 if (FUNC_11(VAR_35->ra))
  VAR_37->txdw0 |= FUNC_7(VAR_2);

 if (VAR_34->registrypriv.mp_mode == 0) {
  if (!VAR_28) {
   if ((VAR_29) && (VAR_25->pkt_offset > 0))
    VAR_25->pkt_offset = VAR_25->pkt_offset - 1;
  }
 }


 if (VAR_25->pkt_offset > 0)
  VAR_37->txdw1 |= FUNC_7((VAR_25->pkt_offset << 26) & 0x7c000000);


 VAR_37->txdw4 |= FUNC_7(VAR_24);

 if ((VAR_25->frame_tag & 0x0f) == VAR_3) {

  VAR_37->txdw1 |= FUNC_7(VAR_35->mac_id & 0x3F);

  VAR_30 = (uint)(VAR_35->qsel & 0x0000001f);
  VAR_37->txdw1 |= FUNC_7((VAR_30 << VAR_16) & 0x00001f00);

  VAR_37->txdw1 |= FUNC_7((VAR_35->raid << VAR_17) & 0x000F0000);

  FUNC_9(VAR_35, VAR_37);

  if (VAR_35->ampdu_en) {
   VAR_37->txdw2 |= FUNC_7(VAR_1);
   VAR_37->txdw6 = FUNC_7(0x6666f800);
  } else {
   VAR_37->txdw2 |= FUNC_7(VAR_0);
  }




  VAR_37->txdw3 |= FUNC_7((VAR_35->seqnum << VAR_19) & 0x0FFF0000);


  if (VAR_35->qos_en)
   VAR_37->txdw4 |= FUNC_7(VAR_15);


  if (VAR_25->agg_num > 1)
   VAR_37->txdw5 |= FUNC_7((VAR_25->agg_num << VAR_23) & 0xFF000000);

  if ((VAR_35->ether_type != 0x888e) &&
      (VAR_35->ether_type != 0x0806) &&
      (VAR_35->ether_type != 0x88b4) &&
      (VAR_35->dhcp_pkt != 1)) {


   FUNC_10(VAR_35, &VAR_37->txdw4);
   FUNC_8(VAR_35, &VAR_37->txdw4);

   VAR_37->txdw4 |= FUNC_7(0x00000008);
   VAR_37->txdw5 |= FUNC_7(0x0001ff00);

   if (VAR_35->ht_en) {
    if (FUNC_5(VAR_36, VAR_35->mac_id))
     VAR_37->txdw5 |= FUNC_7(VAR_20);
   }
   VAR_31 = FUNC_3(VAR_36, VAR_35->mac_id);
   VAR_37->txdw5 |= FUNC_7(VAR_31 & 0x3F);
   VAR_32 = FUNC_4(VAR_36, VAR_35->mac_id);
   VAR_37->txdw4 |= FUNC_7((VAR_32 & 0x7) << VAR_14);
  } else {



   VAR_37->txdw2 |= FUNC_7(VAR_0);
   if (VAR_39->preamble_mode == VAR_13)
    VAR_37->txdw4 |= FUNC_7(FUNC_0(24));
   VAR_37->txdw5 |= FUNC_7(FUNC_2(VAR_38->tx_rate));
  }
 } else if ((VAR_25->frame_tag&0x0f) == VAR_8) {

  VAR_37->txdw1 |= FUNC_7(VAR_35->mac_id & 0x3f);

  VAR_30 = (uint)(VAR_35->qsel&0x0000001f);
  VAR_37->txdw1 |= FUNC_7((VAR_30 << VAR_16) & 0x00001f00);

  VAR_37->txdw1 |= FUNC_7((VAR_35->raid << VAR_17) & 0x000f0000);



  if (VAR_25->ack_report)
   VAR_37->txdw2 |= FUNC_7(FUNC_0(19));


  VAR_37->txdw3 |= FUNC_7((VAR_35->seqnum<<VAR_19)&0x0FFF0000);


  VAR_37->txdw5 |= FUNC_7(VAR_18);
  if (VAR_35->retry_ctrl)
   VAR_37->txdw5 |= FUNC_7(0x00180000);
  else
   VAR_37->txdw5 |= FUNC_7(0x00300000);

  VAR_37->txdw5 |= FUNC_7(FUNC_2(VAR_38->tx_rate));
 } else if ((VAR_25->frame_tag&0x0f) == VAR_21) {
  FUNC_1("pxmitframe->frame_tag == TXAGG_FRAMETAG\n");
 } else {
  FUNC_1("pxmitframe->frame_tag = %d\n", VAR_25->frame_tag);


  VAR_37->txdw1 |= FUNC_7((4) & 0x3f);

  VAR_37->txdw1 |= FUNC_7((6 << VAR_17) & 0x000f0000);




  VAR_37->txdw3 |= FUNC_7((VAR_35->seqnum<<VAR_19)&0x0fff0000);


  VAR_37->txdw5 |= FUNC_7(FUNC_2(VAR_38->tx_rate));
 }
 if (!VAR_35->qos_en) {
  VAR_37->txdw3 |= FUNC_7(VAR_4);
  VAR_37->txdw4 |= FUNC_7(VAR_6);
 }

 FUNC_14(VAR_36, VAR_26, VAR_35->mac_id);

 FUNC_13(VAR_37);
 FUNC_6(VAR_34, VAR_25->frame_tag, VAR_37);
 return VAR_29;
}
