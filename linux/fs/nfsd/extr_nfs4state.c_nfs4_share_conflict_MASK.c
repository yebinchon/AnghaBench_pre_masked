
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_fh {int fh_handle; } ;
struct nfs4_file {unsigned int fi_share_deny; int fi_lock; } ;
typedef int __be32 ;


 struct nfs4_file* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct nfs4_file*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static __be32
FUNC_4(struct svc_fh *VAR_2, unsigned int VAR_3)
{
 struct nfs4_file *VAR_4;
 __be32 VAR_5 = VAR_0;

 VAR_4 = FUNC_0(&VAR_2->fh_handle);
 if (!VAR_4)
  return VAR_5;

 FUNC_2(&VAR_4->fi_lock);
 if (VAR_4->fi_share_deny & VAR_3)
  VAR_5 = VAR_1;
 FUNC_3(&VAR_4->fi_lock);
 FUNC_1(VAR_4);
 return VAR_5;
}
