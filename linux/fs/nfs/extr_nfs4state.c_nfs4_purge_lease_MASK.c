
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_client {int cl_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct nfs_client*) ;
 int FUNC_2 (struct nfs_client*,int) ;
 int FUNC_3 (struct nfs_client*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct nfs_client *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3 < 0)
  return FUNC_2(VAR_2, VAR_3);
 FUNC_0(VAR_1, &VAR_2->cl_state);
 FUNC_4(VAR_0, &VAR_2->cl_state);
 FUNC_3(VAR_2);
 return 0;
}
