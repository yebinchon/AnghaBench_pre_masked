
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcmu_nl_cmd {int nl_list; } ;
struct tcmu_dev {scalar_t__ nl_reply_supported; struct tcmu_nl_cmd curr_nl_cmd; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct tcmu_nl_cmd*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(struct tcmu_dev *VAR_2)
{
 struct tcmu_nl_cmd *VAR_3 = &VAR_2->curr_nl_cmd;

 if (!VAR_0)
  return;

 if (VAR_2->nl_reply_supported <= 0)
  return;

 FUNC_2(&VAR_1);

 FUNC_0(&VAR_3->nl_list);
 FUNC_1(VAR_3, 0, sizeof(*VAR_3));

 FUNC_3(&VAR_1);
}
