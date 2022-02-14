
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct gfs2_inode {int i_gl; } ;
struct gfs2_holder {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gfs2_inode* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct inode*,int) ;
 int FUNC_3 (struct gfs2_holder*) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,struct gfs2_holder*) ;
 scalar_t__ FUNC_6 (struct gfs2_holder*) ;
 int FUNC_7 (struct gfs2_holder*) ;

int FUNC_8(struct inode *VAR_6, int VAR_7)
{
 struct gfs2_inode *VAR_8;
 struct gfs2_holder VAR_9;
 int VAR_10;

 FUNC_7(&VAR_9);
 VAR_8 = FUNC_0(VAR_6);
 if (FUNC_4(VAR_8->i_gl) == ((void*)0)) {
  if (VAR_7 & VAR_4)
   return -VAR_0;
  VAR_10 = FUNC_5(VAR_8->i_gl, VAR_3, VAR_2, &VAR_9);
  if (VAR_10)
   return VAR_10;
 }

 if ((VAR_7 & VAR_5) && FUNC_1(VAR_6))
  VAR_10 = -VAR_1;
 else
  VAR_10 = FUNC_2(VAR_6, VAR_7);
 if (FUNC_6(&VAR_9))
  FUNC_3(&VAR_9);

 return VAR_10;
}
