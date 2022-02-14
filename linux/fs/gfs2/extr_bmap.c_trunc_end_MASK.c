
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct gfs2_sbd {int dummy; } ;
struct TYPE_4__ {int i_ctime; int i_mtime; } ;
struct gfs2_inode {int i_rw_mutex; int i_gl; int i_diskflags; TYPE_1__ i_inode; int i_no_addr; int i_goal; scalar_t__ i_height; } ;
struct gfs2_dinode {int dummy; } ;
struct buffer_head {int b_data; } ;


 int VAR_0 ;
 struct gfs2_sbd* FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct buffer_head*,int) ;
 int FUNC_5 (struct gfs2_inode*,int ) ;
 int FUNC_6 (struct gfs2_inode*,struct buffer_head**) ;
 int FUNC_7 (struct gfs2_inode*) ;
 int FUNC_8 (int ,struct buffer_head*) ;
 int FUNC_9 (struct gfs2_sbd*,int ,int ) ;
 int FUNC_10 (struct gfs2_sbd*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct gfs2_inode *VAR_2)
{
 struct gfs2_sbd *VAR_3 = FUNC_0(&VAR_2->i_inode);
 struct buffer_head *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_9(VAR_3, VAR_1, 0);
 if (VAR_5)
  return VAR_5;

 FUNC_3(&VAR_2->i_rw_mutex);

 VAR_5 = FUNC_6(VAR_2, &VAR_4);
 if (VAR_5)
  goto out;

 if (!FUNC_11(&VAR_2->i_inode)) {
  VAR_2->i_height = 0;
  VAR_2->i_goal = VAR_2->i_no_addr;
  FUNC_4(VAR_4, sizeof(struct gfs2_dinode));
  FUNC_7(VAR_2);
 }
 VAR_2->i_inode.i_mtime = VAR_2->i_inode.i_ctime = FUNC_2(&VAR_2->i_inode);
 VAR_2->i_diskflags &= ~VAR_0;

 FUNC_8(VAR_2->i_gl, VAR_4);
 FUNC_5(VAR_2, VAR_4->b_data);
 FUNC_1(VAR_4);

out:
 FUNC_12(&VAR_2->i_rw_mutex);
 FUNC_10(VAR_3);
 return VAR_5;
}
