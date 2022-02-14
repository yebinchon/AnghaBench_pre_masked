
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ft_sess {int se_sess; } ;
struct ft_cmd {int se_cmd; struct fc_frame* req_frame; struct ft_sess* sess; } ;
struct fc_frame {int dummy; } ;


 int FUNC_0 (struct fc_frame*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct fc_frame*) ;
 int FUNC_3 (struct ft_sess*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct ft_cmd *VAR_0)
{
 struct fc_frame *VAR_1;
 struct ft_sess *VAR_2;

 if (!VAR_0)
  return;
 VAR_2 = VAR_0->sess;
 VAR_1 = VAR_0->req_frame;
 if (FUNC_2(VAR_1))
  FUNC_1(FUNC_2(VAR_1));
 FUNC_0(VAR_1);
 FUNC_4(VAR_2->se_sess, &VAR_0->se_cmd);
 FUNC_3(VAR_2);
}
