
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_node_desc {int dummy; } ;
struct qeth_cmd_buffer {int data; int length; int callback; } ;
struct qeth_channel {int ccwdev; } ;
struct qeth_card {struct qeth_channel data; } ;
struct ciw {scalar_t__ cmd; int count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct qeth_cmd_buffer*) ;
 struct ciw* FUNC_1 (int ,int ) ;
 struct qeth_cmd_buffer* FUNC_2 (struct qeth_channel*,int,int,int ) ;
 int VAR_5 ;
 int FUNC_3 (struct qeth_card*,struct qeth_cmd_buffer*,int *,int *) ;
 int FUNC_4 (int ,scalar_t__,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct qeth_card *VAR_6)
{
 struct qeth_channel *VAR_7 = &VAR_6->data;
 struct qeth_cmd_buffer *VAR_8;
 struct ciw *VAR_9;


 VAR_9 = FUNC_1(VAR_7->ccwdev, VAR_0);
 if (!VAR_9 || VAR_9->cmd == 0)
  return -VAR_3;
 if (VAR_9->count < sizeof(struct qeth_node_desc))
  return -VAR_1;

 VAR_8 = FUNC_2(VAR_7, VAR_9->count, 1, VAR_4);
 if (!VAR_8)
  return -VAR_2;

 VAR_8->callback = VAR_5;
 FUNC_4(FUNC_0(VAR_8), VAR_9->cmd, 0, VAR_8->length,
         VAR_8->data);

 return FUNC_3(VAR_6, VAR_8, ((void*)0), ((void*)0));
}
