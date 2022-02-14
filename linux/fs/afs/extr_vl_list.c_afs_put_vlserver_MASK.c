
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct afs_vlserver {int rcu; int usage; } ;
struct afs_net {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;

void FUNC_2(struct afs_net *VAR_1, struct afs_vlserver *VAR_2)
{
 if (VAR_2) {
  unsigned int VAR_3 = FUNC_0(&VAR_2->usage);


  if (VAR_3 == 0)
   FUNC_1(&VAR_2->rcu, VAR_0);
 }
}
