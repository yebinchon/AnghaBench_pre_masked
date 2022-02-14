
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef void* u16 ;
struct rx_pkt_attrib {int crc_err; int pkt_rpt_type; int drvinfo_sz; int physt; int bdecrypted; int encrypt; int qos; int priority; int amsdu; int frag_num; int mfrag; int mdata; int mcs_rate; int rxht; int icv_err; int shift_sz; int* MacIDValidEntry; void* pkt_len; void* seq_num; } ;
struct recv_stat {int rxdw0; int rxdw5; int rxdw4; int rxdw3; int rxdw1; int rxdw2; } ;
struct recv_frame {struct rx_pkt_attrib attrib; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct rx_pkt_attrib*,int ,int) ;

void FUNC_3(struct recv_frame *VAR_5,
     struct recv_stat *VAR_6)
{
 struct rx_pkt_attrib *VAR_7;
 struct recv_stat VAR_8;

 VAR_8.rxdw0 = VAR_6->rxdw0;
 VAR_8.rxdw1 = VAR_6->rxdw1;
 VAR_8.rxdw2 = VAR_6->rxdw2;
 VAR_8.rxdw3 = VAR_6->rxdw3;
 VAR_8.rxdw4 = VAR_6->rxdw4;
 VAR_8.rxdw5 = VAR_6->rxdw5;

 VAR_7 = &VAR_5->attrib;
 FUNC_2(VAR_7, 0, sizeof(struct rx_pkt_attrib));

 VAR_7->crc_err = (u8)((FUNC_1(VAR_8.rxdw0) >> 14) & 0x1);


 VAR_7->pkt_rpt_type = (u8)((FUNC_1(VAR_8.rxdw3) >> 14) & 0x3);

 if (VAR_7->pkt_rpt_type == VAR_1) {
  VAR_7->pkt_len = (u16)(FUNC_1(VAR_8.rxdw0) & 0x00003fff);
  VAR_7->drvinfo_sz = (u8)((FUNC_1(VAR_8.rxdw0) >> 16) & 0xf) * 8;

  VAR_7->physt = (u8)((FUNC_1(VAR_8.rxdw0) >> 26) & 0x1);

  VAR_7->bdecrypted = (FUNC_1(VAR_8.rxdw0) & FUNC_0(27)) ? 0 : 1;
  VAR_7->encrypt = (u8)((FUNC_1(VAR_8.rxdw0) >> 20) & 0x7);

  VAR_7->qos = (u8)((FUNC_1(VAR_8.rxdw0) >> 23) & 0x1);
  VAR_7->priority = (u8)((FUNC_1(VAR_8.rxdw1) >> 8) & 0xf);

  VAR_7->amsdu = (u8)((FUNC_1(VAR_8.rxdw1) >> 13) & 0x1);

  VAR_7->seq_num = (u16)(FUNC_1(VAR_8.rxdw2) & 0x00000fff);
  VAR_7->frag_num = (u8)((FUNC_1(VAR_8.rxdw2) >> 12) & 0xf);
  VAR_7->mfrag = (u8)((FUNC_1(VAR_8.rxdw1) >> 27) & 0x1);
  VAR_7->mdata = (u8)((FUNC_1(VAR_8.rxdw1) >> 26) & 0x1);

  VAR_7->mcs_rate = (u8)(FUNC_1(VAR_8.rxdw3) & 0x3f);
  VAR_7->rxht = (u8)((FUNC_1(VAR_8.rxdw3) >> 6) & 0x1);

  VAR_7->icv_err = (u8)((FUNC_1(VAR_8.rxdw0) >> 15) & 0x1);
  VAR_7->shift_sz = (u8)((FUNC_1(VAR_8.rxdw0) >> 24) & 0x3);
 } else if (VAR_7->pkt_rpt_type == VAR_2) {
  VAR_7->pkt_len = VAR_4;
  VAR_7->drvinfo_sz = 0;
 } else if (VAR_7->pkt_rpt_type == VAR_3) {
  VAR_7->pkt_len = (u16)(FUNC_1(VAR_8.rxdw0) & 0x3FF);
  VAR_7->drvinfo_sz = 0;




  VAR_7->MacIDValidEntry[0] = FUNC_1(VAR_8.rxdw4);
  VAR_7->MacIDValidEntry[1] = FUNC_1(VAR_8.rxdw5);

 } else if (VAR_7->pkt_rpt_type == VAR_0) {
  VAR_7->pkt_len = (u16)(FUNC_1(VAR_8.rxdw0) & 0x00003fff);
 }
}
