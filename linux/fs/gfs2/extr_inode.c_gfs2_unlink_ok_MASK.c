
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct qstr {int dummy; } ;
struct TYPE_5__ {int i_mode; int i_uid; } ;
struct gfs2_inode {TYPE_1__ i_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*,struct qstr const*,struct gfs2_inode const*) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct gfs2_inode *VAR_5, const struct qstr *VAR_6,
     const struct gfs2_inode *VAR_7)
{
 int VAR_8;

 if (FUNC_1(&VAR_7->i_inode) || FUNC_0(&VAR_7->i_inode))
  return -VAR_1;

 if ((VAR_5->i_inode.i_mode & VAR_4) &&
     !FUNC_6(VAR_5->i_inode.i_uid, FUNC_3()) &&
     !FUNC_6(VAR_7->i_inode.i_uid, FUNC_3()) && !FUNC_2(VAR_0))
  return -VAR_1;

 if (FUNC_0(&VAR_5->i_inode))
  return -VAR_1;

 VAR_8 = FUNC_5(&VAR_5->i_inode, VAR_3 | VAR_2);
 if (VAR_8)
  return VAR_8;

 return FUNC_4(&VAR_5->i_inode, VAR_6, VAR_7);
}
