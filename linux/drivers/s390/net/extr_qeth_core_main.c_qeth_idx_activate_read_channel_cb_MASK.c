
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct qeth_cmd_buffer {int data; struct qeth_channel* channel; } ;
struct qeth_channel {int ccwdev; } ;
struct TYPE_4__ {scalar_t__* mcl_level; int func_level; } ;
struct TYPE_3__ {scalar_t__ issuer_rm_r; } ;
struct qeth_card {TYPE_2__ info; TYPE_1__ token; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct qeth_card*,int,char*) ;
 int FUNC_2 (int,char*,int ,int ,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (scalar_t__*,int ,int) ;
 int FUNC_7 (struct qeth_card*,struct qeth_channel*,struct qeth_cmd_buffer*) ;
 int FUNC_8 (struct qeth_cmd_buffer*,int) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct qeth_cmd_buffer*) ;

__attribute__((used)) static void FUNC_11(struct qeth_card *VAR_3,
           struct qeth_cmd_buffer *VAR_4,
           unsigned int VAR_5)
{
 struct qeth_channel *VAR_6 = VAR_4->channel;
 u16 VAR_7;
 int VAR_8;

 FUNC_1(VAR_3, 2, "idxrdcb");

 VAR_8 = FUNC_7(VAR_3, VAR_6, VAR_4);
 if (VAR_8)
  goto out;

 FUNC_6(&VAR_7, FUNC_3(VAR_4->data), 2);
 if (VAR_7 != FUNC_9(VAR_3->info.func_level)) {
  FUNC_2(2, "IDX_ACTIVATE on channel %x: function level mismatch (sent: %#x, received: %#x)\n",
     FUNC_0(VAR_6->ccwdev),
     VAR_3->info.func_level, VAR_7);
  VAR_8 = -VAR_0;
  goto out;
 }

 FUNC_6(&VAR_3->token.issuer_rm_r,
        FUNC_4(VAR_4->data),
        VAR_2);
 FUNC_6(&VAR_3->info.mcl_level[0],
        FUNC_5(VAR_4->data), VAR_1);

out:
 FUNC_8(VAR_4, VAR_8);
 FUNC_10(VAR_4);
}
