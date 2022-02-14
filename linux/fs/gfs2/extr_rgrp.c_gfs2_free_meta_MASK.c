
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct gfs2_sbd {int dummy; } ;
struct gfs2_rgrpd {int dummy; } ;
struct TYPE_2__ {int i_gid; int i_uid; } ;
struct gfs2_inode {TYPE_1__ i_inode; } ;
typedef int s64 ;


 struct gfs2_sbd* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct gfs2_inode*,struct gfs2_rgrpd*,int ,scalar_t__,int) ;
 int FUNC_2 (struct gfs2_inode*,int ,int ,int ) ;
 int FUNC_3 (struct gfs2_sbd*,int ,scalar_t__,int ) ;

void FUNC_4(struct gfs2_inode *VAR_0, struct gfs2_rgrpd *VAR_1,
      u64 VAR_2, u32 VAR_3)
{
 struct gfs2_sbd *VAR_4 = FUNC_0(&VAR_0->i_inode);

 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, 1);
 FUNC_3(VAR_4, 0, +VAR_3, 0);
 FUNC_2(VAR_0, -(s64)VAR_3, VAR_0->i_inode.i_uid, VAR_0->i_inode.i_gid);
}
