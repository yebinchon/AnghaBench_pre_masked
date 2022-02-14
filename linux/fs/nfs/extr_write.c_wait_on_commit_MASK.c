
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_mds_commit_info {int rpcs_out; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2(struct nfs_mds_commit_info *VAR_0)
{
 return FUNC_1(&VAR_0->rpcs_out,
           !FUNC_0(&VAR_0->rpcs_out));
}
