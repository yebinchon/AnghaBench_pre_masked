
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd_file {int dummy; } ;
struct nfs4_file {int fi_lock; } ;


 struct nfsd_file* FUNC_0 (struct nfs4_file*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct nfsd_file *
FUNC_3(struct nfs4_file *VAR_0)
{
 struct nfsd_file *VAR_1;

 FUNC_1(&VAR_0->fi_lock);
 VAR_1 = FUNC_0(VAR_0);
 FUNC_2(&VAR_0->fi_lock);

 return VAR_1;
}
