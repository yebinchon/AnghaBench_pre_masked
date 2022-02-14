
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs4_stid {int sc_stateid; } ;
struct TYPE_2__ {int sc_file; } ;
struct nfs4_ol_stateid {int st_mutex; int st_stateowner; TYPE_1__ st_stid; } ;
typedef int stateid_t ;
typedef scalar_t__ __be32 ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct nfs4_stid*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_5 (struct nfs4_ol_stateid*) ;
 scalar_t__ VAR_1 ;
 struct nfs4_ol_stateid* FUNC_6 (struct nfs4_stid*) ;
 int FUNC_7 (struct nfs4_ol_stateid*) ;

__attribute__((used)) static __be32
FUNC_8(stateid_t *VAR_2, struct nfs4_stid *VAR_3)
{
 struct nfs4_ol_stateid *VAR_4 = FUNC_6(VAR_3);
 __be32 VAR_5;

 VAR_5 = FUNC_5(VAR_4);
 if (VAR_5)
  goto out_put_stid;

 VAR_5 = FUNC_1(VAR_2, &VAR_3->sc_stateid, 1);
 if (VAR_5)
  goto out;

 VAR_5 = VAR_1;
 if (FUNC_0(VAR_4->st_stid.sc_file,
       FUNC_2(VAR_4->st_stateowner)))
  goto out;

 FUNC_7(VAR_4);
 VAR_5 = VAR_0;

out:
 FUNC_3(&VAR_4->st_mutex);
out_put_stid:
 FUNC_4(VAR_3);
 return VAR_5;
}
