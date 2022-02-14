
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct iomap {scalar_t__ offset; int length; int flags; int addr; } ;
struct inode {int i_blkbits; struct super_block* i_sb; } ;
struct gfs2_inode {int i_gl; } ;
struct buffer_head {int dummy; } ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 struct gfs2_inode* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int VAR_1 ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct inode*,scalar_t__,scalar_t__,struct iomap*) ;
 scalar_t__ FUNC_5 (struct gfs2_inode*) ;
 int FUNC_6 (struct gfs2_inode*,struct buffer_head**) ;
 int FUNC_7 (int ,struct buffer_head*) ;
 int FUNC_8 (struct gfs2_inode*,int *) ;
 int FUNC_9 (struct super_block*,int,int,int ) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct inode *VAR_2, loff_t VAR_3, loff_t VAR_4,
      int VAR_5)
{
 struct super_block *VAR_6 = VAR_2->i_sb;
 struct gfs2_inode *VAR_7 = FUNC_0(VAR_2);
 loff_t VAR_8 = VAR_3 + VAR_4;
 struct buffer_head *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_6(VAR_7, &VAR_9);
 if (FUNC_10(VAR_10))
  return VAR_10;

 FUNC_7(VAR_7->i_gl, VAR_9);

 if (FUNC_5(VAR_7)) {
  VAR_10 = FUNC_8(VAR_7, ((void*)0));
  if (FUNC_10(VAR_10))
   goto out;
 }

 while (VAR_3 < VAR_8) {
  struct iomap VAR_11 = { };

  VAR_10 = FUNC_4(VAR_2, VAR_3, VAR_8 - VAR_3,
          &VAR_11);
  if (VAR_10)
   goto out;
  VAR_3 = VAR_11.offset + VAR_11.length;
  if (!(VAR_11.flags & VAR_1))
   continue;
  VAR_10 = FUNC_9(VAR_6, VAR_11.addr >> VAR_2->i_blkbits,
      VAR_11.length >> VAR_2->i_blkbits,
      VAR_0);
  if (VAR_10) {
   FUNC_3(FUNC_1(VAR_2), "Failed to zero data buffers\n");
   goto out;
  }
 }
out:
 FUNC_2(VAR_9);
 return VAR_10;
}
