
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_state {int state_lock; int flags; } ;
typedef int nfs4_stateid ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct nfs4_state*,int const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static bool FUNC_4(struct nfs4_state *VAR_1,
  const nfs4_stateid *VAR_2)
{
 bool VAR_3 = 0;

 if (FUNC_3(VAR_0, &VAR_1->flags)) {
  FUNC_1(&VAR_1->state_lock);
  if (FUNC_0(VAR_1, VAR_2))
   VAR_3 = 1;
  FUNC_2(&VAR_1->state_lock);
 }
 return VAR_3;
}
