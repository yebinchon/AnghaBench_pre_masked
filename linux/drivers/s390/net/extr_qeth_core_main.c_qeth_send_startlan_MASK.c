
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_cmd_buffer {int dummy; } ;
struct qeth_card {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qeth_card*,int,char*) ;
 int VAR_2 ;
 struct qeth_cmd_buffer* FUNC_1 (struct qeth_card*,int ,int ,int ) ;
 int FUNC_2 (struct qeth_card*,struct qeth_cmd_buffer*,int ,int *) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct qeth_card *VAR_4)
{
 struct qeth_cmd_buffer *VAR_5;

 FUNC_0(VAR_4, 2, "strtlan");

 VAR_5 = FUNC_1(VAR_4, VAR_1, VAR_2, 0);
 if (!VAR_5)
  return -VAR_0;
 return FUNC_2(VAR_4, VAR_5, VAR_3, ((void*)0));
}
