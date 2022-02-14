
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct afs_net {int servers_outstanding; int fs_timer; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct afs_net*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;

void FUNC_8(struct afs_net *VAR_0)
{
 FUNC_1("");

 if (FUNC_6(&VAR_0->fs_timer))
  FUNC_4(&VAR_0->servers_outstanding);

 FUNC_3(VAR_0);

 FUNC_0("wait");
 FUNC_7(&VAR_0->servers_outstanding,
         !FUNC_5(&VAR_0->servers_outstanding));
 FUNC_2("");
}
