
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_open {int dummy; } ;
struct nfs4_openowner {int dummy; } ;
struct nfs4_client {int cl_lock; } ;


 struct nfs4_openowner* FUNC_0 (unsigned int,struct nfsd4_open*,struct nfs4_client*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct nfs4_openowner *
FUNC_3(unsigned int VAR_0, struct nfsd4_open *VAR_1,
   struct nfs4_client *VAR_2)
{
 struct nfs4_openowner *VAR_3;

 FUNC_1(&VAR_2->cl_lock);
 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2(&VAR_2->cl_lock);
 return VAR_3;
}
