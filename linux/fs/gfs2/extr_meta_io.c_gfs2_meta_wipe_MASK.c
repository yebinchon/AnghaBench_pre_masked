
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct gfs2_sbd {int dummy; } ;
struct gfs2_inode {int i_gl; int i_inode; } ;
struct buffer_head {int dummy; } ;


 struct gfs2_sbd* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct buffer_head*) ;
 struct buffer_head* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct gfs2_sbd*) ;
 int FUNC_4 (struct gfs2_sbd*) ;
 int FUNC_5 (struct buffer_head*,int ) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct buffer_head*) ;

void FUNC_8(struct gfs2_inode *VAR_2, u64 VAR_3, u32 VAR_4)
{
 struct gfs2_sbd *VAR_5 = FUNC_0(&VAR_2->i_inode);
 struct buffer_head *VAR_6;

 while (VAR_4) {
  VAR_6 = FUNC_2(VAR_2->i_gl, VAR_3, VAR_0);
  if (VAR_6) {
   FUNC_6(VAR_6);
   FUNC_3(VAR_5);
   FUNC_5(VAR_6, VAR_1);
   FUNC_4(VAR_5);
   FUNC_7(VAR_6);
   FUNC_1(VAR_6);
  }

  VAR_3++;
  VAR_4--;
 }
}
