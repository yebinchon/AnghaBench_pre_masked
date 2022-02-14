
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lcs_cmd {int initiator; int cmd_code; } ;
struct lcs_card {int dummy; } ;
struct lcs_buffer {scalar_t__ data; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct lcs_buffer* FUNC_1 (struct lcs_card*,int ) ;
 int FUNC_2 (struct lcs_card*,struct lcs_buffer*,int *) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_3(struct lcs_card *VAR_4)
{
 struct lcs_buffer *VAR_5;
 struct lcs_cmd *VAR_6;

 FUNC_0(2, VAR_3, "shutdown");
 VAR_5 = FUNC_1(VAR_4, VAR_2);
 VAR_6 = (struct lcs_cmd *) VAR_5->data;
 VAR_6->cmd_code = VAR_0;
 VAR_6->initiator = VAR_1;
 return FUNC_2(VAR_4, VAR_5, ((void*)0));
}
