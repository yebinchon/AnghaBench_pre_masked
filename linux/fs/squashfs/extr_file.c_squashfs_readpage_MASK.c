
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct squashfs_sb_info {int block_log; int block_size; } ;
struct page {int index; TYPE_1__* mapping; } ;
struct inode {TYPE_2__* i_sb; } ;
struct file {int dummy; } ;
struct TYPE_6__ {scalar_t__ fragment_block; int start; } ;
struct TYPE_5__ {struct squashfs_sb_info* s_fs_info; } ;
struct TYPE_4__ {struct inode* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (char*,int,int ) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct inode*) ;
 void* FUNC_6 (struct page*) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (void*,int ,int) ;
 int FUNC_9 (struct inode*,int,int *) ;
 TYPE_3__* FUNC_10 (struct inode*) ;
 int FUNC_11 (struct page*,int ,int,int) ;
 int FUNC_12 (struct page*,int) ;
 int FUNC_13 (struct page*,int) ;
 int FUNC_14 (struct page*) ;

__attribute__((used)) static int FUNC_15(struct file *VAR_3, struct page *VAR_4)
{
 struct inode *VAR_5 = VAR_4->mapping->host;
 struct squashfs_sb_info *VAR_6 = VAR_5->i_sb->s_fs_info;
 int VAR_7 = VAR_4->index >> (VAR_6->block_log - VAR_0);
 int VAR_8 = FUNC_5(VAR_5) >> VAR_6->block_log;
 int VAR_9 = VAR_7 == VAR_8 ?
   (FUNC_5(VAR_5) & (VAR_6->block_size - 1)) :
    VAR_6->block_size;
 int VAR_10;
 void *VAR_11;

 FUNC_3("Entered squashfs_readpage, page index %lx, start block %llx\n",
    VAR_4->index, FUNC_10(VAR_5)->start);

 if (VAR_4->index >= ((FUNC_5(VAR_5) + VAR_1 - 1) >>
     VAR_0))
  goto out;

 if (VAR_7 < VAR_8 || FUNC_10(VAR_5)->fragment_block ==
     VAR_2) {
  u64 VAR_12 = 0;
  int VAR_13 = FUNC_9(VAR_5, VAR_7, &VAR_12);
  if (VAR_13 < 0)
   goto error_out;

  if (VAR_13 == 0)
   VAR_10 = FUNC_13(VAR_4, VAR_9);
  else
   VAR_10 = FUNC_11(VAR_4, VAR_12, VAR_13, VAR_9);
 } else
  VAR_10 = FUNC_12(VAR_4, VAR_9);

 if (!VAR_10)
  return 0;

error_out:
 FUNC_1(VAR_4);
out:
 VAR_11 = FUNC_6(VAR_4);
 FUNC_8(VAR_11, 0, VAR_1);
 FUNC_7(VAR_11);
 FUNC_4(VAR_4);
 if (!FUNC_0(VAR_4))
  FUNC_2(VAR_4);
 FUNC_14(VAR_4);

 return 0;
}
