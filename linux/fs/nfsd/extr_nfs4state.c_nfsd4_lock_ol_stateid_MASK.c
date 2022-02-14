
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_ol_stateid {int st_mutex; int st_stid; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static __be32
FUNC_3(struct nfs4_ol_stateid *VAR_2)
{
 __be32 VAR_3;

 FUNC_0(&VAR_2->st_mutex, VAR_0);
 VAR_3 = FUNC_2(&VAR_2->st_stid);
 if (VAR_3 != VAR_1)
  FUNC_1(&VAR_2->st_mutex);
 return VAR_3;
}
