
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u64 ;
struct inode {unsigned int i_size; } ;
struct gfs2_sbd {int dummy; } ;
struct TYPE_3__ {int i_ctime; int i_mtime; } ;
struct gfs2_inode {TYPE_1__ i_inode; int i_diskflags; int i_gl; } ;
struct gfs2_dinode {int dummy; } ;
struct buffer_head {int b_data; } ;
struct TYPE_4__ {scalar_t__ journal_info; } ;


 int VAR_0 ;
 struct gfs2_inode* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 struct gfs2_sbd* FUNC_1 (struct inode*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct buffer_head*) ;
 TYPE_2__* VAR_4 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct inode*,unsigned int,unsigned int) ;
 int FUNC_5 (struct buffer_head*,unsigned int) ;
 int FUNC_6 (struct gfs2_inode*,int ) ;
 int FUNC_7 (struct gfs2_inode*) ;
 scalar_t__ FUNC_8 (struct gfs2_inode*) ;
 int FUNC_9 (struct inode*,unsigned int,unsigned int) ;
 int FUNC_10 (struct gfs2_inode*,struct buffer_head**) ;
 int FUNC_11 (int ,struct buffer_head*) ;
 int FUNC_12 (struct gfs2_sbd*,scalar_t__,int ) ;
 int FUNC_13 (struct gfs2_sbd*) ;
 unsigned int FUNC_14 (struct inode*) ;
 int FUNC_15 (struct inode*,unsigned int) ;
 int FUNC_16 (struct inode*,unsigned int) ;

__attribute__((used)) static int FUNC_17(struct inode *VAR_5, u64 VAR_6)
{
 struct gfs2_inode *VAR_7 = FUNC_0(VAR_5);
 struct gfs2_sbd *VAR_8 = FUNC_1(VAR_5);
 struct buffer_head *VAR_9 = ((void*)0);
 int VAR_10 = FUNC_7(VAR_7);
 u64 VAR_11 = VAR_5->i_size;
 int VAR_12;

 if (VAR_10)
  VAR_12 = FUNC_12(VAR_8, VAR_2 + VAR_3, VAR_1);
 else
  VAR_12 = FUNC_12(VAR_8, VAR_2, 0);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_10(VAR_7, &VAR_9);
 if (VAR_12)
  goto out;

 FUNC_11(VAR_7->i_gl, VAR_9);

 if (FUNC_8(VAR_7)) {
  FUNC_5(VAR_9, sizeof(struct gfs2_dinode) + VAR_6);
 } else {
  unsigned int VAR_13 = FUNC_14(VAR_5);
  unsigned int VAR_14 = VAR_6 & (VAR_13 - 1);
  if (VAR_14) {
   VAR_12 = FUNC_4(VAR_5, VAR_6,
            VAR_13 - VAR_14);
   if (VAR_12)
    goto out;
  }
  VAR_7->i_diskflags |= VAR_0;
 }

 FUNC_15(VAR_5, VAR_6);
 VAR_7->i_inode.i_mtime = VAR_7->i_inode.i_ctime = FUNC_3(&VAR_7->i_inode);
 FUNC_6(VAR_7, VAR_9->b_data);

 if (VAR_10)
  VAR_12 = FUNC_9(VAR_5, VAR_11, VAR_6);
 else
  FUNC_16(VAR_5, VAR_6);

out:
 FUNC_2(VAR_9);
 if (VAR_4->journal_info)
  FUNC_13(VAR_8);
 return VAR_12;
}
