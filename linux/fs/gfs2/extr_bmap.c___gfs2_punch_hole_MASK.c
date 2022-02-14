
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct gfs2_sbd {int dummy; } ;
struct gfs2_inode {int dummy; } ;
struct file {int dummy; } ;
typedef unsigned int loff_t ;
struct TYPE_2__ {scalar_t__ journal_info; } ;


 int FUNC_0 (int) ;
 struct gfs2_inode* FUNC_1 (struct inode*) ;
 int VAR_0 ;
 struct gfs2_sbd* FUNC_2 (struct inode*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 struct inode* FUNC_3 (struct file*) ;
 int FUNC_4 (struct file*) ;
 int FUNC_5 (struct inode*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_6 (struct gfs2_inode*) ;
 scalar_t__ FUNC_7 (struct gfs2_inode*) ;
 int FUNC_8 (struct inode*,unsigned int,unsigned int) ;
 int FUNC_9 (struct gfs2_sbd*,scalar_t__,int ) ;
 int FUNC_10 (struct gfs2_sbd*) ;
 unsigned int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (struct gfs2_inode*,unsigned int,unsigned int) ;
 int FUNC_14 (struct inode*,unsigned int,unsigned int) ;
 int FUNC_15 (struct inode*,unsigned int,unsigned int) ;

int FUNC_16(struct file *VAR_4, loff_t VAR_5, loff_t VAR_6)
{
 struct inode *VAR_7 = FUNC_3(VAR_4);
 struct gfs2_inode *VAR_8 = FUNC_1(VAR_7);
 struct gfs2_sbd *VAR_9 = FUNC_2(VAR_7);
 int VAR_10;

 if (FUNC_6(VAR_8))
  VAR_10 = FUNC_9(VAR_9, VAR_1 + 2 * VAR_2,
      VAR_0);
 else
  VAR_10 = FUNC_9(VAR_9, VAR_1, 0);
 if (VAR_10)
  return VAR_10;

 if (FUNC_7(VAR_8)) {
  VAR_10 = FUNC_14(VAR_7, VAR_5, VAR_6);
  if (VAR_10)
   goto out;
 } else {
  unsigned int VAR_11, VAR_12, VAR_13;

  VAR_13 = FUNC_11(VAR_7);
  VAR_11 = VAR_5 & (VAR_13 - 1);
  VAR_12 = (VAR_5 + VAR_6) & (VAR_13 - 1);
  if (VAR_11) {
   unsigned int VAR_14 = VAR_6;
   if (VAR_6 > VAR_13 - VAR_11)
    VAR_14 = VAR_13 - VAR_11;
   VAR_10 = FUNC_5(VAR_7, VAR_5, VAR_14);
   if (VAR_10)
    goto out;
   if (VAR_11 + VAR_6 < VAR_13)
    VAR_12 = 0;
  }
  if (VAR_12) {
   VAR_10 = FUNC_5(VAR_7,
    VAR_5 + VAR_6 - VAR_12, VAR_12);
   if (VAR_10)
    goto out;
  }
 }

 if (FUNC_6(VAR_8)) {
  FUNC_0(!VAR_3->journal_info);
  FUNC_8(VAR_7, VAR_5, VAR_6);
 } else
  FUNC_15(VAR_7, VAR_5, VAR_5 + VAR_6 - 1);

 FUNC_4(VAR_4);
 FUNC_12(VAR_7);

 if (VAR_3->journal_info)
  FUNC_10(VAR_9);

 if (!FUNC_7(VAR_8))
  VAR_10 = FUNC_13(VAR_8, VAR_5, VAR_6);

out:
 if (VAR_3->journal_info)
  FUNC_10(VAR_9);
 return VAR_10;
}
