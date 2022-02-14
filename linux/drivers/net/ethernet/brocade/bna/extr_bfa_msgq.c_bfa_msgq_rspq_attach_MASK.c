
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_msgq_rspq {struct bfa_msgq* msgq; int depth; } ;
struct bfa_msgq {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bfa_msgq_rspq*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1(struct bfa_msgq_rspq *VAR_2, struct bfa_msgq *VAR_3)
{
 VAR_2->depth = VAR_0;
 VAR_2->msgq = VAR_3;
 FUNC_0(VAR_2, VAR_1);
}
