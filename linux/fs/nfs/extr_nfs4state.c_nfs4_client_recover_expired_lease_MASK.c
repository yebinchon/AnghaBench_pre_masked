
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_client {int cl_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct nfs_client*) ;
 int FUNC_1 (struct nfs_client*) ;
 int FUNC_2 (int ,int *) ;

int FUNC_3(struct nfs_client *VAR_4)
{
 unsigned int VAR_5;
 int VAR_6;

 for (VAR_5 = VAR_3; VAR_5 != 0; VAR_5--) {
  VAR_6 = FUNC_1(VAR_4);
  if (VAR_6 != 0)
   break;
  if (!FUNC_2(VAR_2, &VAR_4->cl_state) &&
      !FUNC_2(VAR_1,&VAR_4->cl_state))
   break;
  FUNC_0(VAR_4);
  VAR_6 = -VAR_0;
 }
 return VAR_6;
}
