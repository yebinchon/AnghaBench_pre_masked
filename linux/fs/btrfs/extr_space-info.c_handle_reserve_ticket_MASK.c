
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reserve_ticket {int error; scalar_t__ bytes; int list; } ;
struct btrfs_space_info {int lock; } ;
struct btrfs_fs_info {int dummy; } ;
typedef enum btrfs_reserve_flush_enum { ____Placeholder_btrfs_reserve_flush_enum } btrfs_reserve_flush_enum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int FUNC_4 (struct btrfs_fs_info*,struct btrfs_space_info*,struct reserve_ticket*,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct btrfs_fs_info*,struct btrfs_space_info*,struct reserve_ticket*) ;

__attribute__((used)) static int FUNC_8(struct btrfs_fs_info *VAR_3,
     struct btrfs_space_info *VAR_4,
     struct reserve_ticket *VAR_5,
     enum btrfs_reserve_flush_enum VAR_6)
{
 int VAR_7;

 switch (VAR_6) {
 case 130:
  FUNC_7(VAR_3, VAR_4, VAR_5);
  break;
 case 128:
  FUNC_4(VAR_3, VAR_4, VAR_5,
      VAR_2,
      FUNC_0(VAR_2));
  break;
 case 129:
  FUNC_4(VAR_3, VAR_4, VAR_5,
      VAR_1,
      FUNC_0(VAR_1));
  break;
 default:
  FUNC_1(0);
  break;
 }

 FUNC_5(&VAR_4->lock);
 VAR_7 = VAR_5->error;
 if (VAR_5->bytes || VAR_5->error) {





  FUNC_2(&VAR_5->list);
  if (!VAR_7)
   VAR_7 = -VAR_0;
 }
 FUNC_6(&VAR_4->lock);
 FUNC_1(FUNC_3(&VAR_5->list));






 FUNC_1(!(VAR_5->bytes == 0 && VAR_5->error));
 return VAR_7;
}
