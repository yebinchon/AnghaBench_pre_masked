
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct the_nilfs {int dummy; } ;
struct nilfs_sufile_info {unsigned long ncleansegs; } ;
struct nilfs_sufile_header {int sh_ncleansegs; } ;
struct inode {TYPE_1__* i_sb; } ;
struct buffer_head {int b_page; } ;
typedef unsigned long __u64 ;
struct TYPE_4__ {int mi_sem; } ;
struct TYPE_3__ {struct the_nilfs* s_fs_info; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 struct nilfs_sufile_info* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (int *) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (struct buffer_head*) ;
 int FUNC_9 (struct inode*) ;
 unsigned long FUNC_10 (struct the_nilfs*,unsigned long) ;
 int FUNC_11 (struct the_nilfs*,unsigned long) ;
 int FUNC_12 (struct inode*,struct buffer_head**) ;
 unsigned long FUNC_13 (struct inode*) ;
 int FUNC_14 (struct inode*,unsigned long,unsigned long) ;
 int FUNC_15 (int *) ;

int FUNC_16(struct inode *VAR_1, __u64 VAR_2)
{
 struct the_nilfs *VAR_3 = VAR_1->i_sb->s_fs_info;
 struct buffer_head *VAR_4;
 struct nilfs_sufile_header *VAR_5;
 struct nilfs_sufile_info *VAR_6 = FUNC_1(VAR_1);
 void *VAR_7;
 unsigned long VAR_8, VAR_9;
 int VAR_10 = 0;

 FUNC_5(&FUNC_0(VAR_1)->mi_sem);

 VAR_8 = FUNC_13(VAR_1);
 if (VAR_8 == VAR_2)
  goto out;

 VAR_10 = -VAR_0;
 VAR_9 = FUNC_10(VAR_3, VAR_2);
 if (VAR_2 < VAR_8 && VAR_8 - VAR_2 + VAR_9 > VAR_6->ncleansegs)
  goto out;

 VAR_10 = FUNC_12(VAR_1, &VAR_4);
 if (VAR_10 < 0)
  goto out;

 if (VAR_2 > VAR_8) {
  VAR_6->ncleansegs += VAR_2 - VAR_8;
 } else {
  VAR_10 = FUNC_14(VAR_1, VAR_2, VAR_8 - 1);
  if (VAR_10 < 0)
   goto out_header;

  VAR_6->ncleansegs -= VAR_8 - VAR_2;
 }

 VAR_7 = FUNC_6(VAR_4->b_page);
 VAR_5 = VAR_7 + FUNC_2(VAR_4);
 VAR_5->sh_ncleansegs = FUNC_4(VAR_6->ncleansegs);
 FUNC_7(VAR_7);

 FUNC_8(VAR_4);
 FUNC_9(VAR_1);
 FUNC_11(VAR_3, VAR_2);

out_header:
 FUNC_3(VAR_4);
out:
 FUNC_15(&FUNC_0(VAR_1)->mi_sem);
 return VAR_10;
}
