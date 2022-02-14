
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_fsinfo {int lease_time; } ;
struct nfs_client {int cl_res_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (struct nfs_client*,struct nfs_fsinfo*) ;
 int FUNC_1 (struct nfs_client*) ;
 int FUNC_2 (struct nfs_client*,int,unsigned long) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct nfs_client *VAR_3)
{
 int VAR_4;
 struct nfs_fsinfo VAR_5;
 unsigned long VAR_6;

 if (!FUNC_3(VAR_1, &VAR_3->cl_res_state)) {
  FUNC_1(VAR_3);
  return 0;
 }

 VAR_6 = VAR_2;
 VAR_4 = FUNC_0(VAR_3, &VAR_5);
 if (VAR_4 == 0) {
  FUNC_2(VAR_3, VAR_5.lease_time * VAR_0, VAR_6);
  FUNC_1(VAR_3);
 }

 return VAR_4;
}
