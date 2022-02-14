
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qeth_cmd_buffer {int * channel; int data; } ;
struct TYPE_2__ {int trans_hdr; } ;
struct qeth_card {TYPE_1__ seqno; int write; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_2(struct qeth_card *VAR_1,
      struct qeth_cmd_buffer *VAR_2)
{
 FUNC_1(FUNC_0(VAR_2->data), &VAR_1->seqno.trans_hdr,
        VAR_0);
 if (VAR_2->channel == &VAR_1->write)
  VAR_1->seqno.trans_hdr++;
}
