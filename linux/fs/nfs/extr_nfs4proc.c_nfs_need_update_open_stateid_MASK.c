
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct nfs4_state {int open_stateid; int flags; } ;
struct TYPE_6__ {scalar_t__ seqid; } ;
typedef TYPE_1__ nfs4_stateid ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__ const*,int *) ;
 int FUNC_2 (TYPE_1__ const*,int *) ;
 int FUNC_3 (struct nfs4_state*,TYPE_1__ const*) ;
 int FUNC_4 (struct nfs4_state*) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static bool FUNC_7(struct nfs4_state *VAR_2,
  const nfs4_stateid *VAR_3)
{
 if (FUNC_6(VAR_0, &VAR_2->flags) == 0 ||
     !FUNC_2(VAR_3, &VAR_2->open_stateid)) {
  if (VAR_3->seqid == FUNC_0(1))
   FUNC_4(VAR_2);
  else
   FUNC_5(VAR_1, &VAR_2->flags);
  return 1;
 }

 if (FUNC_1(VAR_3, &VAR_2->open_stateid)) {
  FUNC_3(VAR_2, VAR_3);
  return 1;
 }
 return 0;
}
