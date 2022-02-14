
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_session {int se_flags; int se_ref; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static __be32 FUNC_1(struct nfsd4_session *VAR_3, int VAR_4)
{
 if (FUNC_0(&VAR_3->se_ref) > VAR_4)
  return VAR_2;
 VAR_3->se_flags |= VAR_0;
 return VAR_1;
}
