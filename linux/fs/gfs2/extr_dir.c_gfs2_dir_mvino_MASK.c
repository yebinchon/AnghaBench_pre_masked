
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct qstr {int dummy; } ;
struct TYPE_4__ {int i_ctime; int i_mtime; } ;
struct gfs2_inode {TYPE_1__ i_inode; int i_gl; } ;
struct gfs2_dirent {int de_type; } ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct gfs2_dirent*) ;
 int FUNC_1 (struct gfs2_dirent*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct gfs2_inode*) ;
 int VAR_1 ;
 struct gfs2_dirent* FUNC_6 (TYPE_1__*,struct qstr const*,int ,struct buffer_head**) ;
 int FUNC_7 (struct gfs2_inode const*,struct gfs2_dirent*) ;
 int FUNC_8 (int ,struct buffer_head*) ;
 int FUNC_9 (TYPE_1__*) ;

int FUNC_10(struct gfs2_inode *VAR_2, const struct qstr *VAR_3,
     const struct gfs2_inode *VAR_4, unsigned int VAR_5)
{
 struct buffer_head *VAR_6;
 struct gfs2_dirent *VAR_7;

 VAR_7 = FUNC_6(&VAR_2->i_inode, VAR_3, VAR_1, &VAR_6);
 if (!VAR_7) {
  FUNC_5(VAR_2);
  return -VAR_0;
 }
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 FUNC_8(VAR_2->i_gl, VAR_6);
 FUNC_7(VAR_4, VAR_7);
 VAR_7->de_type = FUNC_3(VAR_5);
 FUNC_2(VAR_6);

 VAR_2->i_inode.i_mtime = VAR_2->i_inode.i_ctime = FUNC_4(&VAR_2->i_inode);
 FUNC_9(&VAR_2->i_inode);
 return 0;
}
