
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned int u64 ;
struct TYPE_5__ {unsigned int sb_bsize_shift; int sb_bsize; } ;
struct gfs2_sbd {int sd_rindex; TYPE_1__ sd_sb; } ;
struct TYPE_6__ {unsigned int i_blkbits; } ;
struct gfs2_inode {TYPE_2__ i_inode; } ;
struct buffer_head {unsigned int b_size; scalar_t__ b_state; } ;


 int FUNC_0 (int ) ;
 struct gfs2_inode* FUNC_1 (int ) ;
 struct gfs2_sbd* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (TYPE_2__*,unsigned int,struct buffer_head*,int ) ;
 int FUNC_5 (struct gfs2_inode*) ;
 scalar_t__ FUNC_6 (struct gfs2_inode*) ;
 unsigned int FUNC_7 (struct gfs2_inode*) ;
 int FUNC_8 (TYPE_2__*) ;

int FUNC_9(struct gfs2_inode *VAR_0, u64 VAR_1,
         unsigned int VAR_2)
{
 struct gfs2_sbd *VAR_3 = FUNC_2(&VAR_0->i_inode);
 struct buffer_head VAR_4;
 unsigned int VAR_5;
 u64 VAR_6, VAR_7, VAR_8;
 u64 VAR_9;

 if (!VAR_2)
  return 0;

 if (FUNC_6(VAR_0)) {
  if (VAR_1 + VAR_2 > FUNC_7(VAR_0))
   return 1;
  return 0;
 }

 VAR_5 = VAR_3->sd_sb.sb_bsize_shift;
 FUNC_0(FUNC_5(VAR_0));
 VAR_9 = (FUNC_8(&VAR_0->i_inode) + VAR_3->sd_sb.sb_bsize - 1) >> VAR_5;
 VAR_6 = VAR_1 >> VAR_5;
 VAR_7 = (VAR_1 + VAR_2 + VAR_3->sd_sb.sb_bsize - 1) >> VAR_5;
 if (VAR_7 > VAR_9 && VAR_0 != FUNC_1(VAR_3->sd_rindex))
  return 1;

 VAR_8 = (VAR_7 - VAR_6) << VAR_5;
 do {
  VAR_4.b_state = 0;
  VAR_4.b_size = VAR_8;
  FUNC_4(&VAR_0->i_inode, VAR_6, &VAR_4, 0);
  if (!FUNC_3(&VAR_4))
   return 1;
  VAR_8 -= VAR_4.b_size;
  VAR_6 += (VAR_4.b_size >> VAR_0->i_inode.i_blkbits);
 } while(VAR_8 > 0);

 return 0;
}
