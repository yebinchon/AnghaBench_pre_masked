
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qeth_cmd_buffer {int callback; int data; } ;
struct TYPE_2__ {int pdu_hdr_ack; int pdu_hdr; } ;
struct qeth_card {TYPE_1__ seqno; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (struct qeth_card*,struct qeth_cmd_buffer*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(struct qeth_card *VAR_2,
      struct qeth_cmd_buffer *VAR_3)
{
 FUNC_3(VAR_2, VAR_3);

 FUNC_2(FUNC_1(VAR_3->data),
        &VAR_2->seqno.pdu_hdr, VAR_0);
 VAR_2->seqno.pdu_hdr++;
 FUNC_2(FUNC_0(VAR_3->data),
        &VAR_2->seqno.pdu_hdr_ack, VAR_0);

 VAR_3->callback = VAR_1;
}
