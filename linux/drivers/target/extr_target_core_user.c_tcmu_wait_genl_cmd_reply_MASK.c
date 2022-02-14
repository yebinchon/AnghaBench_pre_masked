
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcmu_nl_cmd {int status; int cmd; int complete; } ;
struct tcmu_dev {scalar_t__ nl_reply_supported; struct tcmu_nl_cmd curr_nl_cmd; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct tcmu_dev *VAR_3)
{
 struct tcmu_nl_cmd *VAR_4 = &VAR_3->curr_nl_cmd;
 int VAR_5;

 if (!VAR_1)
  return 0;

 if (VAR_3->nl_reply_supported <= 0)
  return 0;

 FUNC_2("sleeping for nl reply\n");
 FUNC_3(&VAR_4->complete);

 FUNC_0(&VAR_2);
 VAR_4->cmd = VAR_0;
 VAR_5 = VAR_4->status;
 FUNC_1(&VAR_2);

 return VAR_5;
}
