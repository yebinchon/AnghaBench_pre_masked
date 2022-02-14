
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctlr_info {int resubmit_wq; } ;
struct CommandList {int work; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct ctlr_info *VAR_1, struct CommandList *VAR_2)
{
 FUNC_0(&VAR_2->work, VAR_0);
 FUNC_1(FUNC_2(), VAR_1->resubmit_wq, &VAR_2->work);
}
