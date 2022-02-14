
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u16 ;
struct rx_pkt_attrib {int bdecrypted; int crc_err; int tcpchk_valid; int tcp_chkrpt; int ip_chkrpt; void* htc; void* mcs_rate; } ;
struct recv_stat {int rxdw3; int rxdw0; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct rx_pkt_attrib *VAR_0,
        struct recv_stat *VAR_1)
{
 u16 VAR_2;

 VAR_2 = (FUNC_1(VAR_1->rxdw0) & 0x000f0000) >> 16;
 VAR_2 <<= 3;



 VAR_0->bdecrypted = ((FUNC_1(VAR_1->rxdw0) & FUNC_0(27)) >> 27)
     ? 0 : 1;
 VAR_0->crc_err = (FUNC_1(VAR_1->rxdw0) & FUNC_0(14)) >> 14;



 if (FUNC_1(VAR_1->rxdw3) & FUNC_0(13)) {
  VAR_0->tcpchk_valid = 1;
  if (FUNC_1(VAR_1->rxdw3) & FUNC_0(11))
   VAR_0->tcp_chkrpt = 1;
  else
   VAR_0->tcp_chkrpt = 0;
  if (FUNC_1(VAR_1->rxdw3) & FUNC_0(12))
   VAR_0->ip_chkrpt = 1;
  else
   VAR_0->ip_chkrpt = 0;
 } else {
  VAR_0->tcpchk_valid = 0;
 }
 VAR_0->mcs_rate = (u8)((FUNC_1(VAR_1->rxdw3)) & 0x3f);
 VAR_0->htc = (u8)((FUNC_1(VAR_1->rxdw3) >> 14) & 0x1);



}
