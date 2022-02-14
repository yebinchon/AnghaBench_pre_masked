
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct nfs4_client* sc_client; } ;
struct nfs4_ol_stateid {TYPE_1__ st_stid; } ;
struct nfs4_client {int net; int cl_lock; scalar_t__ cl_minorversion; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nfs4_ol_stateid*,int ) ;
 int FUNC_3 (struct nfs4_ol_stateid*,int *) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct nfs4_ol_stateid*,int *) ;

__attribute__((used)) static void FUNC_7(struct nfs4_ol_stateid *VAR_1)
{
 struct nfs4_client *VAR_2 = VAR_1->st_stid.sc_client;
 bool VAR_3;
 FUNC_0(VAR_0);

 FUNC_4(&VAR_2->cl_lock);
 VAR_3 = FUNC_6(VAR_1, &VAR_0);

 if (VAR_2->cl_minorversion) {
  if (VAR_3)
   FUNC_3(VAR_1, &VAR_0);
  FUNC_5(&VAR_2->cl_lock);
  FUNC_1(&VAR_0);
 } else {
  FUNC_5(&VAR_2->cl_lock);
  FUNC_1(&VAR_0);
  if (VAR_3)
   FUNC_2(VAR_1, VAR_2->net);
 }
}
