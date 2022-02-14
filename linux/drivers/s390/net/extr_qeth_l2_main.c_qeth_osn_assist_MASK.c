
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct qeth_cmd_buffer {int callback; } ;
struct qeth_card {int write; } ;
struct net_device {struct qeth_card* ml_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct qeth_card*,int,char*) ;
 int VAR_4 ;
 int FUNC_1 (struct qeth_cmd_buffer*) ;
 int FUNC_2 (int ,void*,int) ;
 struct qeth_cmd_buffer* FUNC_3 (int *,scalar_t__,int,int ) ;
 int FUNC_4 (struct qeth_card*) ;
 int VAR_5 ;
 int FUNC_5 (struct qeth_card*,struct qeth_cmd_buffer*,int ) ;
 int FUNC_6 (struct qeth_card*,struct qeth_cmd_buffer*,int *,int *) ;

int FUNC_7(struct net_device *VAR_6, void *VAR_7, int VAR_8)
{
 struct qeth_cmd_buffer *VAR_9;
 struct qeth_card *VAR_10;

 if (VAR_8 < 0)
  return -VAR_0;
 if (!VAR_6)
  return -VAR_1;
 VAR_10 = VAR_6->ml_priv;
 if (!VAR_10)
  return -VAR_1;
 FUNC_0(VAR_10, 2, "osnsdmc");
 if (!FUNC_4(VAR_10))
  return -VAR_1;

 VAR_9 = FUNC_3(&VAR_10->write, VAR_3 + VAR_8, 1,
        VAR_4);
 if (!VAR_9)
  return -VAR_2;

 FUNC_5(VAR_10, VAR_9, (u16) VAR_8);
 FUNC_2(FUNC_1(VAR_9), VAR_7, VAR_8);
 VAR_9->callback = VAR_5;
 return FUNC_6(VAR_10, VAR_9, ((void*)0), ((void*)0));
}
