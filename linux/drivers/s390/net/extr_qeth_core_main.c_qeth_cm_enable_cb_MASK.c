
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qeth_reply {int dummy; } ;
struct qeth_cmd_buffer {int data; } ;
struct TYPE_2__ {int cm_filter_r; } ;
struct qeth_card {TYPE_1__ token; } ;


 int FUNC_0 (struct qeth_card*,int,char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct qeth_card *VAR_1, struct qeth_reply *VAR_2,
  unsigned long VAR_3)
{
 struct qeth_cmd_buffer *VAR_4;

 FUNC_0(VAR_1, 2, "cmenblcb");

 VAR_4 = (struct qeth_cmd_buffer *) VAR_3;
 FUNC_2(&VAR_1->token.cm_filter_r,
        FUNC_1(VAR_4->data),
        VAR_0);
 return 0;
}
