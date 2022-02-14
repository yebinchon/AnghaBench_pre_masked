
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_cmd_buffer {int dummy; } ;
struct qeth_card {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct qeth_card*,int,char*) ;
 int VAR_1 ;
 struct qeth_cmd_buffer* FUNC_1 (struct qeth_card*,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct qeth_card*,struct qeth_cmd_buffer*,int ,int *) ;

__attribute__((used)) static int FUNC_3(struct qeth_card *VAR_3)
{
 struct qeth_cmd_buffer *VAR_4;

 FUNC_0(VAR_3, 2, "qdiagass");
 VAR_4 = FUNC_1(VAR_3, VAR_1, 0);
 if (!VAR_4)
  return -VAR_0;
 return FUNC_2(VAR_3, VAR_4, VAR_2, ((void*)0));
}
