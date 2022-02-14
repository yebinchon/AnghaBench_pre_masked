
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct btrfs_io_bio {int dummy; } ;
struct btrfs_dio_private {int flags; struct bio* dio_bio; scalar_t__ bytes; scalar_t__ logical_offset; struct inode* inode; } ;
struct bio {int bi_status; struct btrfs_dio_private* bi_private; } ;
typedef int blk_status_t ;
struct TYPE_2__ {int io_tree; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct bio*) ;
 struct btrfs_io_bio* FUNC_2 (struct bio*) ;
 int FUNC_3 (struct btrfs_io_bio*) ;
 int FUNC_4 (struct inode*,struct btrfs_io_bio*,int ) ;
 int FUNC_5 (struct bio*) ;
 int FUNC_6 (struct btrfs_dio_private*) ;
 int FUNC_7 (int *,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct bio *VAR_1)
{
 struct btrfs_dio_private *VAR_2 = VAR_1->bi_private;
 struct inode *VAR_3 = VAR_2->inode;
 struct bio *VAR_4;
 struct btrfs_io_bio *VAR_5 = FUNC_2(VAR_1);
 blk_status_t VAR_6 = VAR_1->bi_status;

 if (VAR_2->flags & VAR_0)
  VAR_6 = FUNC_4(VAR_3, VAR_5, VAR_6);

 FUNC_7(&FUNC_0(VAR_3)->io_tree, VAR_2->logical_offset,
        VAR_2->logical_offset + VAR_2->bytes - 1);
 VAR_4 = VAR_2->dio_bio;

 FUNC_6(VAR_2);

 VAR_4->bi_status = VAR_6;
 FUNC_5(VAR_4);
 FUNC_3(VAR_5);
 FUNC_1(VAR_1);
}
