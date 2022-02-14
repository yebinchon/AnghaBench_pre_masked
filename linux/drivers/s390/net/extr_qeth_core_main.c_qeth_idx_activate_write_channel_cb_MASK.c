
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct qeth_cmd_buffer {int data; struct qeth_channel* channel; } ;
struct qeth_channel {int ccwdev; } ;
struct TYPE_2__ {int func_level; } ;
struct qeth_card {TYPE_1__ info; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct qeth_card*,int,char*) ;
 int FUNC_2 (int,char*,int ,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int*,int ,int) ;
 int FUNC_5 (struct qeth_card*,struct qeth_channel*,struct qeth_cmd_buffer*) ;
 int FUNC_6 (struct qeth_cmd_buffer*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct qeth_cmd_buffer*) ;

__attribute__((used)) static void FUNC_9(struct qeth_card *VAR_1,
            struct qeth_cmd_buffer *VAR_2,
            unsigned int VAR_3)
{
 struct qeth_channel *VAR_4 = VAR_2->channel;
 u16 VAR_5;
 int VAR_6;

 FUNC_1(VAR_1, 2, "idxwrcb");

 VAR_6 = FUNC_5(VAR_1, VAR_4, VAR_2);
 if (VAR_6)
  goto out;

 FUNC_4(&VAR_5, FUNC_3(VAR_2->data), 2);
 if ((VAR_5 & ~0x0100) !=
     FUNC_7(VAR_1->info.func_level)) {
  FUNC_2(2, "IDX_ACTIVATE on channel %x: function level mismatch (sent: %#x, received: %#x)\n",
     FUNC_0(VAR_4->ccwdev),
     VAR_1->info.func_level, VAR_5);
  VAR_6 = -VAR_0;
 }

out:
 FUNC_6(VAR_2, VAR_6);
 FUNC_8(VAR_2);
}
