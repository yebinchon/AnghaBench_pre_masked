
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wr_verifier; int wr_stable_how; } ;
struct nfsd4_copy {int cp_synchronous; TYPE_2__* cp_clp; TYPE_1__ cp_res; } ;
struct TYPE_4__ {int net; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(struct nfsd4_copy *VAR_1, bool VAR_2)
{
 VAR_1->cp_res.wr_stable_how = VAR_0;
 VAR_1->cp_synchronous = VAR_2;
 FUNC_0(&VAR_1->cp_res.wr_verifier, VAR_1->cp_clp->net);
}
