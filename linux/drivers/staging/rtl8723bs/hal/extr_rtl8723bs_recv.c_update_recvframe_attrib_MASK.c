
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rx_pkt_attrib {scalar_t__ pkt_rpt_type; void* pkt_len; void* data_rate; void* mdata; void* mfrag; void* frag_num; void* seq_num; void* amsdu; void* priority; void* qos; void* encrypt; void* bdecrypted; void* icv_err; void* crc_err; void* physt; void* drvinfo_sz; } ;
struct TYPE_4__ {struct rx_pkt_attrib attrib; } ;
struct TYPE_5__ {TYPE_1__ hdr; } ;
union recv_frame {TYPE_2__ u; } ;
typedef void* u8 ;
typedef void* u16 ;
struct recv_stat {int rxdw5; int rxdw4; int rxdw3; int rxdw2; int rxdw1; int rxdw0; } ;
struct adapter {int dummy; } ;
struct TYPE_6__ {int drvinfosize; scalar_t__ pktlen; scalar_t__ rx_rate; scalar_t__ md; scalar_t__ mf; scalar_t__ frag; scalar_t__ seq; scalar_t__ amsdu; scalar_t__ tid; scalar_t__ qos; scalar_t__ security; scalar_t__ swdec; scalar_t__ icverr; scalar_t__ crc32; scalar_t__ physt; scalar_t__ c2h_ind; } ;
typedef TYPE_3__* PRXREPORT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct rx_pkt_attrib*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct adapter *VAR_2,
        union recv_frame *VAR_3,
        struct recv_stat *VAR_4)
{
 struct rx_pkt_attrib *VAR_5;
 struct recv_stat VAR_6;
 PRXREPORT VAR_7 = (PRXREPORT)&VAR_6;

 VAR_6.rxdw0 = VAR_4->rxdw0;
 VAR_6.rxdw1 = VAR_4->rxdw1;
 VAR_6.rxdw2 = VAR_4->rxdw2;
 VAR_6.rxdw3 = VAR_4->rxdw3;
 VAR_6.rxdw4 = VAR_4->rxdw4;
 VAR_6.rxdw5 = VAR_4->rxdw5;

 VAR_5 = &VAR_3->u.hdr.attrib;
 FUNC_0(VAR_5, 0, sizeof(struct rx_pkt_attrib));


 VAR_5->pkt_rpt_type = VAR_7->c2h_ind ? VAR_0 : VAR_1;


 if (VAR_5->pkt_rpt_type == VAR_1) {


  VAR_5->pkt_len = (u16)VAR_7->pktlen;
  VAR_5->drvinfo_sz = (u8)(VAR_7->drvinfosize << 3);
  VAR_5->physt = (u8)VAR_7->physt;

  VAR_5->crc_err = (u8)VAR_7->crc32;
  VAR_5->icv_err = (u8)VAR_7->icverr;

  VAR_5->bdecrypted = (u8)(VAR_7->swdec ? 0 : 1);
  VAR_5->encrypt = (u8)VAR_7->security;

  VAR_5->qos = (u8)VAR_7->qos;
  VAR_5->priority = (u8)VAR_7->tid;

  VAR_5->amsdu = (u8)VAR_7->amsdu;

  VAR_5->seq_num = (u16)VAR_7->seq;
  VAR_5->frag_num = (u8)VAR_7->frag;
  VAR_5->mfrag = (u8)VAR_7->mf;
  VAR_5->mdata = (u8)VAR_7->md;

  VAR_5->data_rate = (u8)VAR_7->rx_rate;
 } else {
  VAR_5->pkt_len = (u16)VAR_7->pktlen;
 }
}
