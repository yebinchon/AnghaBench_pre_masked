
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pkt_attrib {int hdrlen; int nr_frags; int priority; int qsel; int raid; int bswenc; int qos_en; int ht_en; int sgi; int retry_ctrl; int seqnum; int ch_offset; int bwmode; int encrypt; scalar_t__ pktlen; scalar_t__ mac_id; } ;
struct mlme_ext_priv {int cur_wireless_mode; int mgnt_seq; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int) ;

void FUNC_1(struct adapter *VAR_4, struct pkt_attrib *VAR_5)
{
 struct mlme_ext_priv *VAR_6 = &VAR_4->mlmeextpriv;

 FUNC_0((u8 *)(VAR_5), 0, sizeof(struct pkt_attrib));

 VAR_5->hdrlen = 24;
 VAR_5->nr_frags = 1;
 VAR_5->priority = 7;
 VAR_5->mac_id = 0;
 VAR_5->qsel = 0x12;

 VAR_5->pktlen = 0;

 if (VAR_6->cur_wireless_mode & VAR_2)
  VAR_5->raid = 6;
 else
  VAR_5->raid = 5;

 VAR_5->encrypt = VAR_3;
 VAR_5->bswenc = 0;

 VAR_5->qos_en = 0;
 VAR_5->ht_en = 0;
 VAR_5->bwmode = VAR_1;
 VAR_5->ch_offset = VAR_0;
 VAR_5->sgi = 0;

 VAR_5->seqnum = VAR_6->mgnt_seq;

 VAR_5->retry_ctrl = 1;
}
