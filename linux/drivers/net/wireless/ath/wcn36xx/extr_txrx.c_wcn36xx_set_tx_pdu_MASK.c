
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
typedef int u16 ;
struct TYPE_2__ {int mpdu_header_off; int bd_ssn; int tid; void* mpdu_len; void* mpdu_header_len; void* mpdu_data_off; } ;
struct wcn36xx_tx_bd {TYPE_1__ pdu; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct wcn36xx_tx_bd *VAR_1,
          u32 VAR_2,
          u32 VAR_3,
          u16 VAR_4)
{
 VAR_1->pdu.mpdu_header_len = VAR_2;
 VAR_1->pdu.mpdu_header_off = sizeof(*VAR_1);
 VAR_1->pdu.mpdu_data_off = VAR_1->pdu.mpdu_header_len +
  VAR_1->pdu.mpdu_header_off;
 VAR_1->pdu.mpdu_len = VAR_3;
 VAR_1->pdu.tid = VAR_4;
 VAR_1->pdu.bd_ssn = VAR_0;
}
