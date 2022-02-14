
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd_file {int dummy; } ;
struct nfs4_file {int fi_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nfsd_file* FUNC_0 (struct nfs4_file*,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static struct nfsd_file *
FUNC_2(struct nfs4_file *VAR_2)
{
 struct nfsd_file *VAR_3;

 FUNC_1(&VAR_2->fi_lock);

 VAR_3 = FUNC_0(VAR_2, VAR_0);
 if (!VAR_3)
  VAR_3 = FUNC_0(VAR_2, VAR_1);
 return VAR_3;
}
