
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_dio_private {int bytes; int logical_offset; int inode; struct bio* dio_bio; } ;
struct bio {scalar_t__ bi_status; struct btrfs_dio_private* bi_private; } ;


 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (struct btrfs_dio_private*) ;

__attribute__((used)) static void FUNC_4(struct bio *VAR_0)
{
 struct btrfs_dio_private *VAR_1 = VAR_0->bi_private;
 struct bio *VAR_2 = VAR_1->dio_bio;

 FUNC_0(VAR_1->inode, VAR_1->logical_offset,
         VAR_1->bytes, !VAR_0->bi_status);

 FUNC_3(VAR_1);

 VAR_2->bi_status = VAR_0->bi_status;
 FUNC_2(VAR_2);
 FUNC_1(VAR_0);
}
