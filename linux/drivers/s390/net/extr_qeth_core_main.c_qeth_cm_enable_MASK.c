
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qeth_cmd_buffer {int data; } ;
struct TYPE_2__ {int cm_filter_w; int issuer_rm_r; } ;
struct qeth_card {TYPE_1__ token; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qeth_card*,int,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int ,int *,int ) ;
 int VAR_4 ;
 struct qeth_cmd_buffer* FUNC_4 (struct qeth_card*,int ,int ) ;
 int FUNC_5 (struct qeth_card*,struct qeth_cmd_buffer*,int ,int *) ;

__attribute__((used)) static int FUNC_6(struct qeth_card *VAR_5)
{
 struct qeth_cmd_buffer *VAR_6;

 FUNC_0(VAR_5, 2, "cmenable");

 VAR_6 = FUNC_4(VAR_5, VAR_0, VAR_1);
 if (!VAR_6)
  return -VAR_2;

 FUNC_3(FUNC_2(VAR_6->data),
        &VAR_5->token.issuer_rm_r, VAR_3);
 FUNC_3(FUNC_1(VAR_6->data),
        &VAR_5->token.cm_filter_w, VAR_3);

 return FUNC_5(VAR_5, VAR_6, VAR_4, ((void*)0));
}
