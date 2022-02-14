
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qeth_cmd_buffer {int dummy; } ;
struct TYPE_5__ {int ipa; } ;
struct qeth_card {TYPE_2__ seqno; } ;
struct TYPE_4__ {scalar_t__ seqno; } ;
struct TYPE_6__ {TYPE_1__ hdr; } ;


 TYPE_3__* FUNC_0 (struct qeth_cmd_buffer*) ;
 int FUNC_1 (struct qeth_card*,struct qeth_cmd_buffer*) ;

__attribute__((used)) static void FUNC_2(struct qeth_card *VAR_0,
      struct qeth_cmd_buffer *VAR_1)
{
 FUNC_1(VAR_0, VAR_1);


 FUNC_0(VAR_1)->hdr.seqno = VAR_0->seqno.ipa++;
}
