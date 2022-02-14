
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qedf_ctx {int flags; int cdev; int dbg_ctx; } ;
struct TYPE_4__ {TYPE_1__* common; } ;
struct TYPE_3__ {int (* drain ) (int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int) ;
 TYPE_2__* VAR_1 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct qedf_ctx *VAR_2)
{
 if (FUNC_5(VAR_0, &VAR_2->flags)) {
  FUNC_0(&(VAR_2->dbg_ctx), "MCP drain already active.\n");
  return;
 }


 FUNC_3(VAR_0, &VAR_2->flags);


 VAR_1->common->drain(VAR_2->cdev);


 FUNC_2(100);


 FUNC_1(VAR_0, &VAR_2->flags);
}
