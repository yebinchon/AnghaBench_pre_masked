
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct f2fs_private_dio {int write; struct f2fs_private_dio* orig_private; int orig_end_io; struct inode* inode; } ;
struct bio {int bi_status; struct f2fs_private_dio* bi_private; int bi_end_io; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inode*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct bio*) ;
 scalar_t__ FUNC_2 (struct bio*) ;
 int VAR_5 ;
 struct f2fs_private_dio* FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct bio*) ;

__attribute__((used)) static void FUNC_6(struct bio *VAR_6, struct inode *VAR_7,
       loff_t VAR_8)
{
 struct f2fs_private_dio *VAR_9;
 bool VAR_10 = (FUNC_2(VAR_6) == VAR_4);

 VAR_9 = FUNC_3(FUNC_0(VAR_7),
   sizeof(struct f2fs_private_dio), VAR_3);
 if (!VAR_9)
  goto out;

 VAR_9->inode = VAR_7;
 VAR_9->orig_end_io = VAR_6->bi_end_io;
 VAR_9->orig_private = VAR_6->bi_private;
 VAR_9->write = VAR_10;

 VAR_6->bi_end_io = VAR_5;
 VAR_6->bi_private = VAR_9;

 FUNC_4(FUNC_0(VAR_7),
   VAR_10 ? VAR_2 : VAR_1);

 FUNC_5(VAR_6);
 return;
out:
 VAR_6->bi_status = VAR_0;
 FUNC_1(VAR_6);
}
