
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct genwqe_ddcb_cmd {int dummy; } ;
struct ddcb_requ {struct genwqe_ddcb_cmd cmd; } ;


 int VAR_0 ;
 struct ddcb_requ* FUNC_0 (int,int ) ;

struct genwqe_ddcb_cmd *FUNC_1(void)
{
 struct ddcb_requ *VAR_1;

 VAR_1 = FUNC_0(sizeof(*VAR_1), VAR_0);
 if (!VAR_1)
  return ((void*)0);

 return &VAR_1->cmd;
}
