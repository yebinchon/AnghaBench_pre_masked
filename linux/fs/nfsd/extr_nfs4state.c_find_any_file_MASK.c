
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd_file {int dummy; } ;
struct nfs4_file {int fi_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nfsd_file* FUNC_0 (struct nfs4_file*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

struct nfsd_file *
FUNC_3(struct nfs4_file *VAR_3)
{
 struct nfsd_file *VAR_4;

 FUNC_1(&VAR_3->fi_lock);
 VAR_4 = FUNC_0(VAR_3, VAR_1);
 if (!VAR_4) {
  VAR_4 = FUNC_0(VAR_3, VAR_2);
  if (!VAR_4)
   VAR_4 = FUNC_0(VAR_3, VAR_0);
 }
 FUNC_2(&VAR_3->fi_lock);
 return VAR_4;
}
