
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct macsec_tx_sc {int encoding_sa; scalar_t__ encrypt; scalar_t__ scb; scalar_t__ end_station; } ;
struct macsec_secy {scalar_t__ icv_len; int sci; struct macsec_tx_sc tx_sc; } ;
struct TYPE_2__ {int h_proto; } ;
struct macsec_eth_header {int tci_an; int packet_number; int secure_channel_id; TYPE_1__ eth; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct macsec_eth_header *VAR_7,
          const struct macsec_secy *VAR_8, u32 VAR_9,
          bool VAR_10)
{
 const struct macsec_tx_sc *VAR_11 = &VAR_8->tx_sc;

 FUNC_4(&VAR_7->tci_an, 0, FUNC_2(VAR_10));
 VAR_7->eth.h_proto = FUNC_1(VAR_1);

 if (VAR_10) {
  VAR_7->tci_an |= VAR_5;
  FUNC_3(&VAR_7->secure_channel_id, &VAR_8->sci,
         sizeof(VAR_7->secure_channel_id));
 } else {
  if (VAR_11->end_station)
   VAR_7->tci_an |= VAR_4;
  if (VAR_11->scb)
   VAR_7->tci_an |= VAR_6;
 }

 VAR_7->packet_number = FUNC_0(VAR_9);


 if (VAR_11->encrypt)
  VAR_7->tci_an |= VAR_3;
 else if (VAR_8->icv_len != VAR_0)
  VAR_7->tci_an |= VAR_2;

 VAR_7->tci_an |= VAR_11->encoding_sa;
}
