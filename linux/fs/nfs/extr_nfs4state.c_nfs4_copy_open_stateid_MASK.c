
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_state {int open_stateid; int flags; int seqlock; } ;
typedef int nfs4_stateid ;


 int VAR_0 ;
 int FUNC_0 (int *,int const*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int VAR_1 ;

bool FUNC_4(nfs4_stateid *VAR_2, struct nfs4_state *VAR_3)
{
 bool VAR_4;
 const nfs4_stateid *VAR_5;
 int VAR_6;

 do {
  VAR_4 = 0;
  VAR_5 = &VAR_1;
  VAR_6 = FUNC_1(&VAR_3->seqlock);
  if (FUNC_3(VAR_0, &VAR_3->flags)) {
   VAR_5 = &VAR_3->open_stateid;
   VAR_4 = 1;
  }
  FUNC_0(VAR_2, VAR_5);
 } while (FUNC_2(&VAR_3->seqlock, VAR_6));
 return VAR_4;
}
