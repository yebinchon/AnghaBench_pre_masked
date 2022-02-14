
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reada_machine_work {int work; struct btrfs_fs_info* fs_info; } ;
struct btrfs_fs_info {int reada_works_cnt; int readahead_workers; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ,int *,int *) ;
 int FUNC_3 (int ,int *) ;
 int VAR_1 ;
 struct reada_machine_work* FUNC_4 (int,int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_5(struct btrfs_fs_info *VAR_3)
{
 struct reada_machine_work *VAR_4;

 VAR_4 = FUNC_4(sizeof(*VAR_4), VAR_0);
 if (!VAR_4) {

  FUNC_0();
 }
 FUNC_2(&VAR_4->work, VAR_1,
   VAR_2, ((void*)0), ((void*)0));
 VAR_4->fs_info = VAR_3;

 FUNC_3(VAR_3->readahead_workers, &VAR_4->work);
 FUNC_1(&VAR_3->reada_works_cnt);
}
