
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int i_ctime; } ;
struct gfs2_inode {TYPE_1__ i_inode; } ;
struct gfs2_ea_request {int dummy; } ;
struct gfs2_alloc_parms {unsigned int target; } ;
typedef int (* ea_skeleton_call_t ) (struct gfs2_inode*,struct gfs2_ea_request*,void*) ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct gfs2_inode*) ;
 int FUNC_4 (struct gfs2_inode*,struct gfs2_alloc_parms*) ;
 int FUNC_5 (struct gfs2_inode*,struct gfs2_alloc_parms*) ;
 int FUNC_6 (struct gfs2_inode*) ;
 scalar_t__ FUNC_7 (struct gfs2_inode*,unsigned int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,scalar_t__,int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct gfs2_inode *VAR_4, struct gfs2_ea_request *VAR_5,
        unsigned int VAR_6,
        ea_skeleton_call_t VAR_7, void *VAR_8)
{
 struct gfs2_alloc_parms VAR_9 = { .target = VAR_6 };
 int VAR_10;

 VAR_10 = FUNC_8(FUNC_0(&VAR_4->i_inode));
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_5(VAR_4, &VAR_9);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_4(VAR_4, &VAR_9);
 if (VAR_10)
  goto out_gunlock_q;

 VAR_10 = FUNC_9(FUNC_0(&VAR_4->i_inode),
     VAR_6 + FUNC_7(VAR_4, VAR_6) +
     VAR_1 + VAR_3 + VAR_2, 0);
 if (VAR_10)
  goto out_ipres;

 VAR_10 = VAR_7(VAR_4, VAR_5, VAR_8);
 if (VAR_10)
  goto out_end_trans;

 VAR_4->i_inode.i_ctime = FUNC_2(&VAR_4->i_inode);
 FUNC_1(&VAR_4->i_inode, VAR_0);

out_end_trans:
 FUNC_10(FUNC_0(&VAR_4->i_inode));
out_ipres:
 FUNC_3(VAR_4);
out_gunlock_q:
 FUNC_6(VAR_4);
 return VAR_10;
}
