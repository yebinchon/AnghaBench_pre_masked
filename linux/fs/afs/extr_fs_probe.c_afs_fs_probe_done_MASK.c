
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct afs_server {int flags; int probe_outstanding; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static bool FUNC_4(struct afs_server *VAR_1)
{
 if (!FUNC_0(&VAR_1->probe_outstanding))
  return 0;

 FUNC_3(&VAR_1->probe_outstanding);
 FUNC_1(VAR_0, &VAR_1->flags);
 FUNC_2(&VAR_1->flags, VAR_0);
 return 1;
}
