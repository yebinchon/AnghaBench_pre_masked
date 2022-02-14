
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reserve_ticket {scalar_t__ bytes; int wait; int error; int list; } ;
struct btrfs_space_info {int lock; } ;
struct btrfs_fs_info {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_7(struct btrfs_fs_info *VAR_3,
    struct btrfs_space_info *VAR_4,
    struct reserve_ticket *VAR_5)

{
 FUNC_0(VAR_2);
 int VAR_6 = 0;

 FUNC_5(&VAR_4->lock);
 while (VAR_5->bytes > 0 && VAR_5->error == 0) {
  VAR_6 = FUNC_3(&VAR_5->wait, &VAR_2, VAR_1);
  if (VAR_6) {
   FUNC_2(&VAR_5->list);
   VAR_5->error = -VAR_0;
   break;
  }
  FUNC_6(&VAR_4->lock);

  FUNC_4();

  FUNC_1(&VAR_5->wait, &VAR_2);
  FUNC_5(&VAR_4->lock);
 }
 FUNC_6(&VAR_4->lock);
}
