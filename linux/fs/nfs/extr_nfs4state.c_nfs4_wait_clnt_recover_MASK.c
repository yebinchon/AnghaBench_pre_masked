
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_client {int cl_cons_state; int cl_state; int cl_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct nfs_client*) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,int ) ;

int FUNC_4(struct nfs_client *VAR_3)
{
 int VAR_4;

 FUNC_0();

 FUNC_2(&VAR_3->cl_count);
 VAR_4 = FUNC_3(&VAR_3->cl_state, VAR_0,
     VAR_2, VAR_1);
 if (VAR_4)
  goto out;
 if (VAR_3->cl_cons_state < 0)
  VAR_4 = VAR_3->cl_cons_state;
out:
 FUNC_1(VAR_3);
 return VAR_4;
}
