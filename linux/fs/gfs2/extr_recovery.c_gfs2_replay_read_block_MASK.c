
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct gfs2_jdesc {int jd_inode; } ;
struct gfs2_inode {int i_inode; struct gfs2_glock* i_gl; } ;
struct gfs2_glock {int dummy; } ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 struct gfs2_inode* FUNC_0 (int ) ;
 int FUNC_1 (struct gfs2_inode*) ;
 int FUNC_2 (int *,unsigned int,int*,int *,int *) ;
 struct buffer_head* FUNC_3 (struct gfs2_glock*,int ,int ) ;

int FUNC_4(struct gfs2_jdesc *VAR_1, unsigned int VAR_2,
      struct buffer_head **VAR_3)
{
 struct gfs2_inode *VAR_4 = FUNC_0(VAR_1->jd_inode);
 struct gfs2_glock *VAR_5 = VAR_4->i_gl;
 int VAR_6 = 0;
 u64 VAR_7;
 u32 VAR_8;
 int VAR_9;

 VAR_9 = FUNC_2(&VAR_4->i_inode, VAR_2, &VAR_6, &VAR_7, &VAR_8);
 if (VAR_9)
  return VAR_9;
 if (!VAR_7) {
  FUNC_1(VAR_4);
  return -VAR_0;
 }

 *VAR_3 = FUNC_3(VAR_5, VAR_7, VAR_8);

 return VAR_9;
}
