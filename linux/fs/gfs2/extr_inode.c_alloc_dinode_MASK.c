
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct gfs2_sbd {int dummy; } ;
struct TYPE_2__ {int i_ino; } ;
struct gfs2_inode {int i_no_addr; int i_goal; TYPE_1__ i_inode; int i_generation; int i_no_formal_ino; } ;
struct gfs2_alloc_parms {unsigned int target; int aflags; } ;


 struct gfs2_sbd* FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct gfs2_inode*,int *,unsigned int*,int,int *) ;
 int FUNC_2 (struct gfs2_inode*) ;
 int FUNC_3 (struct gfs2_inode*,struct gfs2_alloc_parms*) ;
 int FUNC_4 (struct gfs2_inode*,struct gfs2_alloc_parms*) ;
 int FUNC_5 (struct gfs2_inode*) ;
 int FUNC_6 (struct gfs2_sbd*,scalar_t__,int ) ;
 int FUNC_7 (struct gfs2_sbd*) ;

__attribute__((used)) static int FUNC_8(struct gfs2_inode *VAR_3, u32 VAR_4, unsigned *VAR_5)
{
 struct gfs2_sbd *VAR_6 = FUNC_0(&VAR_3->i_inode);
 struct gfs2_alloc_parms VAR_7 = { .target = *VAR_5, .aflags = VAR_4, };
 int VAR_8;

 VAR_8 = FUNC_4(VAR_3, &VAR_7);
 if (VAR_8)
  goto out;

 VAR_8 = FUNC_3(VAR_3, &VAR_7);
 if (VAR_8)
  goto out_quota;

 VAR_8 = FUNC_6(VAR_6, (*VAR_5 * VAR_1) + VAR_2 + VAR_0, 0);
 if (VAR_8)
  goto out_ipreserv;

 VAR_8 = FUNC_1(VAR_3, &VAR_3->i_no_addr, VAR_5, 1, &VAR_3->i_generation);
 VAR_3->i_no_formal_ino = VAR_3->i_generation;
 VAR_3->i_inode.i_ino = VAR_3->i_no_addr;
 VAR_3->i_goal = VAR_3->i_no_addr;

 FUNC_7(VAR_6);

out_ipreserv:
 FUNC_2(VAR_3);
out_quota:
 FUNC_5(VAR_3);
out:
 return VAR_8;
}
