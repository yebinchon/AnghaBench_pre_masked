
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_client {int cl_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct nfs_client*) ;
 int FUNC_2 (struct nfs_client*,int) ;
 int FUNC_3 (struct nfs_client*) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct nfs_client *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_1(VAR_5);
 if (VAR_6 < 0)
  return FUNC_2(VAR_5, VAR_6);
 if (FUNC_5(VAR_4, &VAR_5->cl_state))
  FUNC_3(VAR_5);
 if (!FUNC_6(VAR_2, &VAR_5->cl_state))
  FUNC_4(VAR_3, &VAR_5->cl_state);
 FUNC_0(VAR_0, &VAR_5->cl_state);
 FUNC_0(VAR_1, &VAR_5->cl_state);
 return 0;
}
