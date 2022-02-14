
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct metapath {int mp_aheight; } ;
struct iomap {scalar_t__ type; scalar_t__ length; int flags; int addr; } ;
struct inode {int i_blkbits; int i_sb; } ;
struct gfs2_inode {int dummy; } ;
struct buffer_head {int b_size; } ;
typedef scalar_t__ sector_t ;
typedef int loff_t ;


 struct gfs2_inode* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct inode*,struct iomap*,struct metapath*) ;
 int FUNC_5 (struct inode*,int,int,int ,struct iomap*,struct metapath*) ;
 int FUNC_6 (struct buffer_head*,int ,int) ;
 int FUNC_7 (struct metapath*) ;
 int FUNC_8 (struct buffer_head*) ;
 int FUNC_9 (struct buffer_head*) ;
 int FUNC_10 (struct gfs2_inode*,struct buffer_head*,scalar_t__,int,int) ;

int FUNC_11(struct inode *VAR_5, sector_t VAR_6,
     struct buffer_head *VAR_7, int VAR_8)
{
 struct gfs2_inode *VAR_9 = FUNC_0(VAR_5);
 loff_t VAR_10 = (loff_t)VAR_6 << VAR_5->i_blkbits;
 loff_t VAR_11 = VAR_7->b_size;
 struct metapath VAR_12 = { .mp_aheight = 1, };
 struct iomap VAR_13 = { };
 int VAR_14;

 FUNC_2(VAR_7);
 FUNC_3(VAR_7);
 FUNC_1(VAR_7);
 FUNC_10(VAR_9, VAR_7, VAR_6, VAR_8, 1);

 if (VAR_8) {
  VAR_14 = FUNC_5(VAR_5, VAR_10, VAR_11, VAR_4, &VAR_13, &VAR_12);
  if (!VAR_14 && VAR_13.type == VAR_2)
   VAR_14 = FUNC_4(VAR_5, &VAR_13, &VAR_12);
  FUNC_7(&VAR_12);
 } else {
  VAR_14 = FUNC_5(VAR_5, VAR_10, VAR_11, 0, &VAR_13, &VAR_12);
  FUNC_7(&VAR_12);
 }
 if (VAR_14)
  goto out;

 if (VAR_13.length > VAR_7->b_size) {
  VAR_13.length = VAR_7->b_size;
  VAR_13.flags &= ~VAR_0;
 }
 if (VAR_13.addr != VAR_3)
  FUNC_6(VAR_7, VAR_5->i_sb, VAR_13.addr >> VAR_5->i_blkbits);
 VAR_7->b_size = VAR_13.length;
 if (VAR_13.flags & VAR_0)
  FUNC_8(VAR_7);
 if (VAR_13.flags & VAR_1)
  FUNC_9(VAR_7);

out:
 FUNC_10(VAR_9, VAR_7, VAR_6, VAR_8, VAR_14);
 return VAR_14;
}
