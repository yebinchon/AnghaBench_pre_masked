
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gfs2_inode {int i_inode; } ;
struct gfs2_dinode {int dummy; } ;
struct TYPE_3__ {int sb_bsize; } ;
struct TYPE_4__ {TYPE_1__ sd_sb; } ;


 TYPE_2__* FUNC_0 (int *) ;

__attribute__((used)) static inline unsigned FUNC_1(const struct gfs2_inode *VAR_0)
{
 return FUNC_0(&VAR_0->i_inode)->sd_sb.sb_bsize - sizeof(struct gfs2_dinode);
}
