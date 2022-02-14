
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buff_size; } ;
struct TYPE_4__ {TYPE_1__ lcs_startup; } ;
struct lcs_cmd {TYPE_2__ cmd; int initiator; int cmd_code; } ;
struct lcs_card {int dummy; } ;
struct lcs_buffer {scalar_t__ data; } ;
typedef int __u8 ;


 int VAR_0 ;
 int FUNC_0 (int,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct lcs_buffer* FUNC_1 (struct lcs_card*,int ) ;
 int FUNC_2 (struct lcs_card*,struct lcs_buffer*,int *) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_3(struct lcs_card *VAR_4, __u8 VAR_5)
{
 struct lcs_buffer *VAR_6;
 struct lcs_cmd *VAR_7;

 FUNC_0(2, VAR_3, "startup");
 VAR_6 = FUNC_1(VAR_4, VAR_2);
 VAR_7 = (struct lcs_cmd *) VAR_6->data;
 VAR_7->cmd_code = VAR_0;
 VAR_7->initiator = VAR_5;
 VAR_7->cmd.lcs_startup.buff_size = VAR_1;
 return FUNC_2(VAR_4, VAR_6, ((void*)0));
}
