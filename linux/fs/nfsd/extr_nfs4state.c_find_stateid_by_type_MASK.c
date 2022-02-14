
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_stid {char sc_type; int sc_count; } ;
struct nfs4_client {int cl_lock; } ;
typedef int stateid_t ;


 struct nfs4_stid* FUNC_0 (struct nfs4_client*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct nfs4_stid *
FUNC_4(struct nfs4_client *VAR_0, stateid_t *VAR_1, char VAR_2)
{
 struct nfs4_stid *VAR_3;

 FUNC_2(&VAR_0->cl_lock);
 VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (VAR_3 != ((void*)0)) {
  if (VAR_2 & VAR_3->sc_type)
   FUNC_1(&VAR_3->sc_count);
  else
   VAR_3 = ((void*)0);
 }
 FUNC_3(&VAR_0->cl_lock);
 return VAR_3;
}
