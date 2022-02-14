
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct afs_net {int cells_manager; int cells_outstanding; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct afs_net*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct afs_net *VAR_1)
{
 int VAR_2 = FUNC_2(&VAR_1->cells_outstanding);

 FUNC_0("%d", VAR_2);

 if (!FUNC_3(VAR_0, &VAR_1->cells_manager))
  FUNC_1(VAR_1);
}
