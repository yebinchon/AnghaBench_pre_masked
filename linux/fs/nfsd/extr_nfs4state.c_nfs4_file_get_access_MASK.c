
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nfs4_file {int fi_share_deny; int fi_lock; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (struct nfs4_file*,int) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static __be32
FUNC_2(struct nfs4_file *VAR_4, u32 VAR_5)
{
 FUNC_1(&VAR_4->fi_lock);


 if (VAR_5 & ~VAR_0)
  return VAR_2;


 if ((VAR_5 & VAR_4->fi_share_deny) != 0)
  return VAR_3;

 FUNC_0(VAR_4, VAR_5);
 return VAR_1;
}
