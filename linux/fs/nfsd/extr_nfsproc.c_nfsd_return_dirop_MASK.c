
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd_diropres {int stat; int fh; } ;
typedef scalar_t__ __be32 ;


 scalar_t__ FUNC_0 (int *,int *) ;

__attribute__((used)) static __be32
FUNC_1(__be32 VAR_0, struct nfsd_diropres *VAR_1)
{
 if (VAR_0) return VAR_0;
 return FUNC_0(&VAR_1->fh, &VAR_1->stat);
}
