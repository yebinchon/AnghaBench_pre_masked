
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_switch_info {int dummy; } ;
struct qeth_cmd_buffer {int dummy; } ;
struct qeth_card {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct qeth_card*,int,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct qeth_card*,int ) ;
 struct qeth_cmd_buffer* FUNC_3 (struct qeth_card*,int ,int ) ;
 int VAR_4 ;
 int FUNC_4 (struct qeth_card*,struct qeth_cmd_buffer*,int ,struct qeth_switch_info*) ;

int FUNC_5(struct qeth_card *VAR_5,
     struct qeth_switch_info *VAR_6)
{
 struct qeth_cmd_buffer *VAR_7;

 FUNC_0(VAR_5, 2, "qswiattr");
 if (!FUNC_2(VAR_5, VAR_3))
  return -VAR_2;
 if (!FUNC_1(VAR_5->dev))
  return -VAR_0;
 VAR_7 = FUNC_3(VAR_5, VAR_3, 0);
 if (!VAR_7)
  return -VAR_1;
 return FUNC_4(VAR_5, VAR_7,
    VAR_4, VAR_6);
}
