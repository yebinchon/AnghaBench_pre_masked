
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u64 ;
struct inode {int dummy; } ;
struct gfs2_trans {int tr_flags; } ;
struct gfs2_sbd {TYPE_1__* sd_vfs; } ;
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
 int FUNC_4 (struct inode*,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_6, u64 VAR_7, u64 VAR_8)
{
 struct gfs2_sbd *VAR_9 = FUNC_0(VAR_6);
 u64 VAR_10 = VAR_0 * VAR_9->sd_vfs->s_blocksize;
 u64 VAR_11;
 int VAR_12;

 while (VAR_7 != VAR_8) {
  struct gfs2_trans *VAR_13;
  unsigned int VAR_14;

  VAR_11 = VAR_7 - VAR_8;
  if (VAR_11 > VAR_10)
   VAR_11 = VAR_10;

  VAR_14 = VAR_7 & ~VAR_1;
  if (VAR_14 && VAR_11 > VAR_2)
   VAR_11 = VAR_14 + ((VAR_11 - VAR_14) & VAR_1);

  FUNC_4(VAR_6, VAR_7 - VAR_11);
  VAR_7 -= VAR_11;

  VAR_13 = VAR_5->journal_info;
  if (!FUNC_3(VAR_4, &VAR_13->tr_flags))
   continue;

  FUNC_2(VAR_9);
  VAR_12 = FUNC_1(VAR_9, VAR_3, VAR_0);
  if (VAR_12)
   return VAR_12;
 }

 return 0;
}
