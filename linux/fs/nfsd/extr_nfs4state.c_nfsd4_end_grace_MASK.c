
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd_net {int grace_ended; int nfsd4_manager; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nfsd_net*) ;

void
FUNC_2(struct nfsd_net *VAR_0)
{

 if (VAR_0->grace_ended)
  return;

 VAR_0->grace_ended = 1;






 FUNC_1(VAR_0);
 FUNC_0(&VAR_0->nfsd4_manager);





}
