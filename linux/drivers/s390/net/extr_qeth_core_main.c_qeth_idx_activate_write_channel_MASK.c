
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_cmd_buffer {int callback; int data; } ;
struct qeth_channel {int state; } ;
struct qeth_card {struct qeth_channel write; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct qeth_card*,int,char*) ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int ) ;
 struct qeth_cmd_buffer* FUNC_2 (struct qeth_channel*,int ,int,int ) ;
 int VAR_6 ;
 int FUNC_3 (struct qeth_card*,struct qeth_cmd_buffer*) ;
 int FUNC_4 (struct qeth_card*,struct qeth_cmd_buffer*,int *,int *) ;

__attribute__((used)) static int FUNC_5(struct qeth_card *VAR_7)
{
 struct qeth_channel *VAR_8 = &VAR_7->write;
 struct qeth_cmd_buffer *VAR_9;
 int VAR_10;

 FUNC_0(VAR_7, 2, "idxwrite");

 VAR_9 = FUNC_2(VAR_8, VAR_4, 2, VAR_5);
 if (!VAR_9)
  return -VAR_1;

 FUNC_1(VAR_9->data, VAR_3, VAR_2);
 FUNC_3(VAR_7, VAR_9);
 VAR_9->callback = VAR_6;

 VAR_10 = FUNC_4(VAR_7, VAR_9, ((void*)0), ((void*)0));
 if (VAR_10)
  return VAR_10;

 VAR_8->state = VAR_0;
 return 0;
}
