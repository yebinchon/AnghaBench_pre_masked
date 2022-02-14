
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reada_control {int refcnt; int elems; int wait; struct btrfs_fs_info* fs_info; } ;
struct btrfs_fs_info {int reada_works_cnt; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct btrfs_fs_info*) ;
 int FUNC_3 (int ,int,int) ;

int FUNC_4(void *VAR_2)
{
 struct reada_control *VAR_3 = VAR_2;
 struct btrfs_fs_info *VAR_4 = VAR_3->fs_info;

 while (FUNC_0(&VAR_3->elems)) {
  if (!FUNC_0(&VAR_4->reada_works_cnt))
   FUNC_2(VAR_4);
  FUNC_3(VAR_3->wait, FUNC_0(&VAR_3->elems) == 0,
       (VAR_0 + 9) / 10);
 }

 FUNC_1(&VAR_3->refcnt, VAR_1);

 return 0;
}
