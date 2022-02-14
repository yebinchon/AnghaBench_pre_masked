
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_writeverf {int verifier; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static int FUNC_1(const struct nfs_writeverf *VAR_0,
  const struct nfs_writeverf *VAR_1)
{
 return FUNC_0(&VAR_0->verifier, &VAR_1->verifier);
}
