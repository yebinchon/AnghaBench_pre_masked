
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sb_bsize_shift; } ;
struct gfs2_sbd {int sd_max_height; unsigned int sd_diptrs; TYPE_1__ sd_sb; int sd_inptrs; } ;
struct gfs2_inode {int i_inode; } ;
typedef int loff_t ;


 unsigned int FUNC_0 (unsigned int,int ) ;
 struct gfs2_sbd* FUNC_1 (int *) ;
 int FUNC_2 (struct gfs2_inode*,int,unsigned int*,unsigned int*) ;

__attribute__((used)) static void FUNC_3(struct gfs2_inode *VAR_0, loff_t *VAR_1,
       unsigned int *VAR_2, unsigned int *VAR_3,
       unsigned int VAR_4)
{
 loff_t VAR_5 = *VAR_1;
 const struct gfs2_sbd *VAR_6 = FUNC_1(&VAR_0->i_inode);
 unsigned int VAR_7, VAR_8 = VAR_4 - 3 * (VAR_6->sd_max_height - 1);

 for (VAR_7 = VAR_8; VAR_7 > VAR_6->sd_diptrs;) {
  VAR_7 = FUNC_0(VAR_7, VAR_6->sd_inptrs);
  VAR_8 -= VAR_7;
 }

 *VAR_2 = VAR_8;
 *VAR_3 = VAR_4 - VAR_8;
 *VAR_1 = ((loff_t)VAR_8 - 3) << VAR_6->sd_sb.sb_bsize_shift;
 if (*VAR_1 > VAR_5) {
  *VAR_1 = VAR_5;
  FUNC_2(VAR_0, VAR_5, VAR_2, VAR_3);
 }
}
