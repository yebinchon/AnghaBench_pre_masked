
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_cmd_buffer {int dummy; } ;
struct qeth_card {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qeth_card*,int,char*) ;
 int FUNC_1 (int ) ;
 struct qeth_cmd_buffer* FUNC_2 (struct qeth_card*,int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct qeth_card*,struct qeth_cmd_buffer*,int ,int *) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct qeth_card *VAR_4)
{
 int VAR_5;
 struct qeth_cmd_buffer *VAR_6;

 FUNC_0(VAR_4, 3, "queryadp");
 VAR_6 = FUNC_2(VAR_4, VAR_1,
       FUNC_1(VAR_3));
 if (!VAR_6)
  return -VAR_0;
 VAR_5 = FUNC_3(VAR_4, VAR_6, VAR_2, ((void*)0));
 return VAR_5;
}
