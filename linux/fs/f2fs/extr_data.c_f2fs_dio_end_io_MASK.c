
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_private_dio {int orig_end_io; struct f2fs_private_dio* orig_private; scalar_t__ write; int inode; } ;
struct bio {int bi_end_io; struct f2fs_private_dio* bi_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct f2fs_private_dio*) ;

__attribute__((used)) static void FUNC_4(struct bio *VAR_2)
{
 struct f2fs_private_dio *VAR_3 = VAR_2->bi_private;

 FUNC_2(FUNC_0(VAR_3->inode),
   VAR_3->write ? VAR_1 : VAR_0);

 VAR_2->bi_private = VAR_3->orig_private;
 VAR_2->bi_end_io = VAR_3->orig_end_io;

 FUNC_3(VAR_3);

 FUNC_1(VAR_2);
}
