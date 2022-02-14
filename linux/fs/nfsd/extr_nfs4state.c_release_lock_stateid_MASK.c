
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct nfs4_client* sc_client; } ;
struct nfs4_ol_stateid {TYPE_1__ st_stid; } ;
struct nfs4_client {int cl_lock; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nfs4_ol_stateid*) ;

__attribute__((used)) static void FUNC_4(struct nfs4_ol_stateid *VAR_0)
{
 struct nfs4_client *VAR_1 = VAR_0->st_stid.sc_client;
 bool VAR_2;

 FUNC_1(&VAR_1->cl_lock);
 VAR_2 = FUNC_3(VAR_0);
 FUNC_2(&VAR_1->cl_lock);
 if (VAR_2)
  FUNC_0(&VAR_0->st_stid);
}
