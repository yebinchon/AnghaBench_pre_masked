
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfi_mbmsg {int dummy; } ;
struct bfa_msgq {int rspq; int cmdq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void
FUNC_1(struct bfa_msgq *VAR_2,
   struct bfi_mbmsg *VAR_3)
{
 FUNC_0(&VAR_2->cmdq, VAR_0);
 FUNC_0(&VAR_2->rspq, VAR_1);
}
