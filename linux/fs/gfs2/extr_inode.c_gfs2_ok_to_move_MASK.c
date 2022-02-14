
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_root; } ;
struct inode {struct super_block* i_sb; } ;
struct gfs2_inode {struct inode i_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 struct inode* FUNC_2 (int ) ;
 struct inode* FUNC_3 (struct inode*,int *,int) ;
 int VAR_2 ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;

__attribute__((used)) static int FUNC_6(struct gfs2_inode *VAR_3, struct gfs2_inode *VAR_4)
{
 struct inode *VAR_5 = &VAR_4->i_inode;
 struct super_block *VAR_6 = VAR_5->i_sb;
 struct inode *VAR_7;
 int VAR_8 = 0;

 FUNC_4(VAR_5);

 for (;;) {
  if (VAR_5 == &VAR_3->i_inode) {
   VAR_8 = -VAR_0;
   break;
  }
  if (VAR_5 == FUNC_2(VAR_6->s_root)) {
   VAR_8 = 0;
   break;
  }

  VAR_7 = FUNC_3(VAR_5, &VAR_2, 1);
  if (!VAR_7) {
   VAR_8 = -VAR_1;
   break;
  }
  if (FUNC_0(VAR_7)) {
   VAR_8 = FUNC_1(VAR_7);
   break;
  }

  FUNC_5(VAR_5);
  VAR_5 = VAR_7;
 }

 FUNC_5(VAR_5);

 return VAR_8;
}
