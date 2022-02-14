
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* sc_client; } ;
struct nfs4_ol_stateid {TYPE_2__ st_stid; } ;
struct TYPE_3__ {int cl_lock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nfs4_ol_stateid*,int *) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct nfs4_ol_stateid*,int *) ;

__attribute__((used)) static void FUNC_6(struct nfs4_ol_stateid *VAR_1)
{
 FUNC_0(VAR_0);

 FUNC_3(&VAR_1->st_stid.sc_client->cl_lock);
 if (FUNC_5(VAR_1, &VAR_0))
  FUNC_2(VAR_1, &VAR_0);
 FUNC_4(&VAR_1->st_stid.sc_client->cl_lock);
 FUNC_1(&VAR_0);
}
