
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct gfs2_trans {int tr_flags; } ;
struct gfs2_sbd {TYPE_1__* sd_vfs; } ;
typedef unsigned int loff_t ;
struct TYPE_4__ {struct gfs2_trans* journal_info; } ;
struct TYPE_3__ {unsigned int s_blocksize; } ;


 unsigned int VAR_0 ;
 struct gfs2_sbd* FUNC_0 (struct inode*) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_1 (struct gfs2_sbd*,int ,unsigned int) ;
 int FUNC_2 (struct gfs2_sbd*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct inode*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_6, loff_t VAR_7,
      loff_t VAR_8)
{
 struct gfs2_sbd *VAR_9 = FUNC_0(VAR_6);
 loff_t VAR_10 = VAR_0 * VAR_9->sd_vfs->s_blocksize;
 int VAR_11;

 while (VAR_8) {
  struct gfs2_trans *VAR_12;
  loff_t VAR_13;
  unsigned int VAR_14;

  VAR_13 = VAR_8;
  if (VAR_13 > VAR_10)
   VAR_13 = VAR_10;

  VAR_14 = VAR_7 & ~VAR_1;
  if (VAR_14 && VAR_13 > VAR_2)
   VAR_13 = VAR_14 + ((VAR_13 - VAR_14) & VAR_1);

  FUNC_4(VAR_6, VAR_7, VAR_13);
  VAR_7 += VAR_13;
  VAR_8 -= VAR_13;

  VAR_12 = VAR_5->journal_info;
  if (!FUNC_3(VAR_4, &VAR_12->tr_flags))
   continue;

  FUNC_2(VAR_9);
  VAR_11 = FUNC_1(VAR_9, VAR_3, VAR_0);
  if (VAR_11)
   return VAR_11;
 }
 return 0;
}
