
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pkt_attrib {int hdrlen; int nr_frags; int priority; int qsel; scalar_t__ rate; int bswenc; int qos_en; int ht_en; int sgi; int retry_ctrl; scalar_t__ mbssid; int seqnum; int ch_offset; int bwmode; int encrypt; int raid; scalar_t__ pktlen; scalar_t__ mac_id; } ;
struct mlme_ext_priv {scalar_t__ tx_rate; int mgnt_seq; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct adapter*,int ) ;

void FUNC_1(struct adapter *VAR_6, struct pkt_attrib *VAR_7)
{
 u8 VAR_8;
 struct mlme_ext_priv *VAR_9 = &(VAR_6->mlmeextpriv);



 VAR_7->hdrlen = 24;
 VAR_7->nr_frags = 1;
 VAR_7->priority = 7;
 VAR_7->mac_id = 0;
 VAR_7->qsel = 0x12;

 VAR_7->pktlen = 0;

 if (VAR_9->tx_rate == VAR_2)
  VAR_8 = VAR_3;
 else
  VAR_8 = VAR_4;
 VAR_7->raid = FUNC_0(VAR_6, VAR_8);
 VAR_7->rate = VAR_9->tx_rate;

 VAR_7->encrypt = VAR_5;
 VAR_7->bswenc = 0;

 VAR_7->qos_en = 0;
 VAR_7->ht_en = 0;
 VAR_7->bwmode = VAR_0;
 VAR_7->ch_offset = VAR_1;
 VAR_7->sgi = 0;

 VAR_7->seqnum = VAR_9->mgnt_seq;

 VAR_7->retry_ctrl = 1;

 VAR_7->mbssid = 0;

}
