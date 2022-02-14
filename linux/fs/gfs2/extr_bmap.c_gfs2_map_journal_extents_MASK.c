
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u64 ;
struct TYPE_3__ {unsigned int sb_bsize_shift; } ;
struct gfs2_sbd {TYPE_1__ sd_sb; } ;
struct gfs2_jdesc {scalar_t__ nr_extents; int jd_inode; int jd_jid; int extent_list; } ;
struct TYPE_4__ {unsigned int i_blkbits; } ;
struct gfs2_inode {TYPE_2__ i_inode; } ;
struct buffer_head {unsigned int b_size; scalar_t__ b_state; scalar_t__ b_blocknr; } ;
typedef int ktime_t ;


 struct gfs2_inode* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct gfs2_sbd*,char*,int ,scalar_t__,int ) ;
 int FUNC_4 (struct gfs2_sbd*,char*,int,unsigned long long,unsigned long long,scalar_t__,...) ;
 int FUNC_5 (struct gfs2_jdesc*,unsigned int,scalar_t__,unsigned int) ;
 int FUNC_6 (int ,unsigned int,struct buffer_head*,int ) ;
 int FUNC_7 (struct gfs2_jdesc*) ;
 unsigned int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int *) ;

int FUNC_12(struct gfs2_sbd *VAR_0, struct gfs2_jdesc *VAR_1)
{
 u64 VAR_2 = 0;
 u64 VAR_3;
 struct gfs2_inode *VAR_4 = FUNC_0(VAR_1->jd_inode);
 struct buffer_head VAR_5;
 unsigned int VAR_6 = VAR_0->sd_sb.sb_bsize_shift;
 u64 VAR_7;
 int VAR_8;
 ktime_t VAR_9, VAR_10;

 VAR_9 = FUNC_9();
 VAR_3 = FUNC_8(VAR_1->jd_inode) >> VAR_6;
 VAR_7 = (VAR_3 - VAR_2) << VAR_6;
 VAR_1->nr_extents = 0;
 FUNC_1(!FUNC_11(&VAR_1->extent_list));

 do {
  VAR_5.b_state = 0;
  VAR_5.b_blocknr = 0;
  VAR_5.b_size = VAR_7;
  VAR_8 = FUNC_6(VAR_1->jd_inode, VAR_2, &VAR_5, 0);
  if (VAR_8 || !FUNC_2(&VAR_5))
   goto fail;
  VAR_8 = FUNC_5(VAR_1, VAR_2, VAR_5.b_blocknr, VAR_5.b_size >> VAR_6);
  if (VAR_8)
   goto fail;
  VAR_7 -= VAR_5.b_size;
  VAR_2 += (VAR_5.b_size >> VAR_4->i_inode.i_blkbits);
 } while(VAR_7 > 0);

 VAR_10 = FUNC_9();
 FUNC_3(VAR_0, "journal %d mapped with %u extents in %lldms\n", VAR_1->jd_jid,
  VAR_1->nr_extents, FUNC_10(VAR_10, VAR_9));
 return 0;

fail:
 FUNC_4(VAR_0, "error %d mapping journal %u at offset %llu (extent %u)\n",
  VAR_8, VAR_1->jd_jid,
  (unsigned long long)(FUNC_8(VAR_1->jd_inode) - VAR_7),
  VAR_1->nr_extents);
 FUNC_4(VAR_0, "bmap=%d lblock=%llu block=%llu, state=0x%08lx, size=%llu\n",
  VAR_8, (unsigned long long)VAR_2, (unsigned long long)VAR_5.b_blocknr,
  VAR_5.b_state, (unsigned long long)VAR_5.b_size);
 FUNC_7(VAR_1);
 return VAR_8;
}
