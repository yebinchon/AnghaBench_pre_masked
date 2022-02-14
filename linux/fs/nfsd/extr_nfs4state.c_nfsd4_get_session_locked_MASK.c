
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_session {int se_ref; int se_client; } ;
typedef scalar_t__ __be32 ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct nfsd4_session*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static __be32 FUNC_3(struct nfsd4_session *VAR_2)
{
 __be32 VAR_3;

 if (FUNC_2(VAR_2))
  return VAR_1;
 VAR_3 = FUNC_1(VAR_2->se_client);
 if (VAR_3)
  return VAR_3;
 FUNC_0(&VAR_2->se_ref);
 return VAR_0;
}
