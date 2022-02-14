
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_cmd_buffer {int dummy; } ;
struct qeth_card {scalar_t__ read_or_write_problem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qeth_card*,int,char*) ;
 int FUNC_1 (struct qeth_card*) ;
 int FUNC_2 (struct qeth_cmd_buffer*) ;
 int FUNC_3 (struct qeth_card*) ;
 int FUNC_4 (struct qeth_card*,struct qeth_cmd_buffer*,int (*) (struct qeth_card*,struct qeth_reply*,unsigned long),void*) ;
 int FUNC_5 (struct qeth_card*,struct qeth_reply*,unsigned long) ;

int FUNC_6(struct qeth_card *VAR_2, struct qeth_cmd_buffer *VAR_3,
  int (*VAR_4)(struct qeth_card *, struct qeth_reply*,
   unsigned long),
  void *VAR_5)
{
 int VAR_6;

 FUNC_0(VAR_2, 4, "sendipa");

 if (VAR_2->read_or_write_problem) {
  FUNC_2(VAR_3);
  return -VAR_0;
 }

 if (VAR_4 == ((void*)0))
  VAR_4 = FUNC_5;
 VAR_6 = FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_6 == -VAR_1) {
  FUNC_1(VAR_2);
  FUNC_3(VAR_2);
 }
 return VAR_6;
}
