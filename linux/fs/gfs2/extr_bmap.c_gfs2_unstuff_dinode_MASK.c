
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct page {int dummy; } ;
struct gfs2_meta_header {int dummy; } ;
struct gfs2_inode {int i_height; int i_rw_mutex; int i_inode; int i_gl; } ;
struct gfs2_dinode {int di_height; void* di_blocks; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef void* __be64 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (struct gfs2_inode*,int *,unsigned int*,int ,int *) ;
 int FUNC_7 (struct buffer_head*,int) ;
 int FUNC_8 (struct buffer_head*,int,struct buffer_head*,int) ;
 int FUNC_9 (struct gfs2_inode*,int ,struct buffer_head**) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct gfs2_inode*) ;
 int FUNC_12 (struct gfs2_inode*,struct buffer_head**) ;
 int FUNC_13 (int ,struct buffer_head*) ;
 int FUNC_14 (int ,int ,int) ;
 int FUNC_15 (struct gfs2_inode*,struct buffer_head*,int ,struct page*) ;
 scalar_t__ FUNC_16 (int *) ;
 int FUNC_17 (int *) ;

int FUNC_18(struct gfs2_inode *VAR_0, struct page *VAR_1)
{
 struct buffer_head *VAR_2, *VAR_3;
 struct gfs2_dinode *VAR_4;
 u64 VAR_5 = 0;
 int VAR_6 = FUNC_11(VAR_0);
 int VAR_7;

 FUNC_4(&VAR_0->i_rw_mutex);

 VAR_7 = FUNC_12(VAR_0, &VAR_3);
 if (VAR_7)
  goto out;

 if (FUNC_16(&VAR_0->i_inode)) {



  unsigned int VAR_8 = 1;
  VAR_7 = FUNC_6(VAR_0, &VAR_5, &VAR_8, 0, ((void*)0));
  if (VAR_7)
   goto out_brelse;
  if (VAR_6) {
   FUNC_14(FUNC_0(&VAR_0->i_inode), VAR_5, 1);
   VAR_7 = FUNC_9(VAR_0, VAR_5, &VAR_2);
   if (VAR_7)
    goto out_brelse;
   FUNC_8(VAR_2, sizeof(struct gfs2_meta_header),
           VAR_3, sizeof(struct gfs2_dinode));
   FUNC_1(VAR_2);
  } else {
   VAR_7 = FUNC_15(VAR_0, VAR_3, VAR_5, VAR_1);
   if (VAR_7)
    goto out_brelse;
  }
 }



 FUNC_13(VAR_0->i_gl, VAR_3);
 VAR_4 = (struct gfs2_dinode *)VAR_3->b_data;
 FUNC_7(VAR_3, sizeof(struct gfs2_dinode));

 if (FUNC_16(&VAR_0->i_inode)) {
  *(__be64 *)(VAR_4 + 1) = FUNC_3(VAR_5);
  FUNC_5(&VAR_0->i_inode, 1);
  VAR_4->di_blocks = FUNC_3(FUNC_10(&VAR_0->i_inode));
 }

 VAR_0->i_height = 1;
 VAR_4->di_height = FUNC_2(1);

out_brelse:
 FUNC_1(VAR_3);
out:
 FUNC_17(&VAR_0->i_rw_mutex);
 return VAR_7;
}
