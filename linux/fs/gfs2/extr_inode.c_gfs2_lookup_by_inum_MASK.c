
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct gfs2_sbd {struct super_block* sd_vfs; } ;
struct TYPE_2__ {scalar_t__ i_no_formal_ino; int i_diskflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct inode* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 struct inode* FUNC_3 (struct super_block*,int ,scalar_t__,int ,unsigned int) ;
 int FUNC_4 (struct inode*) ;

struct inode *FUNC_5(struct gfs2_sbd *VAR_4, u64 VAR_5,
      u64 *VAR_6, unsigned int VAR_7)
{
 struct super_block *VAR_8 = VAR_4->sd_vfs;
 struct inode *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_3(VAR_8, VAR_0, VAR_5, 0, VAR_7);
 if (FUNC_2(VAR_9))
  return VAR_9;


 if (VAR_6) {
  VAR_10 = -VAR_2;
  if (FUNC_1(VAR_9)->i_no_formal_ino != *VAR_6)
   goto fail_iput;

  VAR_10 = -VAR_1;
  if (FUNC_1(VAR_9)->i_diskflags & VAR_3)
   goto fail_iput;
 }
 return VAR_9;

fail_iput:
 FUNC_4(VAR_9);
 return FUNC_0(VAR_10);
}
