
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct afs_vlserver_list {int lock; int usage; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 struct afs_vlserver_list* FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (struct afs_vlserver_list*,int ,unsigned int) ;

struct afs_vlserver_list *FUNC_4(unsigned int VAR_2)
{
 struct afs_vlserver_list *VAR_3;

 VAR_3 = FUNC_1(FUNC_3(VAR_3, VAR_1, VAR_2), VAR_0);
 if (VAR_3) {
  FUNC_0(&VAR_3->usage, 1);
  FUNC_2(&VAR_3->lock);
 }

 return VAR_3;
}
