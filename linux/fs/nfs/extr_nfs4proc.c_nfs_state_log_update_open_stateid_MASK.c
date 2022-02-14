
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_state {int waitq; int flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct nfs4_state *VAR_1)
{
 if (FUNC_0(VAR_0, &VAR_1->flags))
  FUNC_1(&VAR_1->waitq);
}
