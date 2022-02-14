
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ocfs2_write_ctxt {int w_clen; scalar_t__ w_cpos; scalar_t__ w_first_new_cpos; struct ocfs2_write_cluster_desc* w_desc; } ;
struct ocfs2_write_cluster_desc {scalar_t__ c_cpos; int c_needs_zero; int c_new; int c_clear_unwritten; scalar_t__ c_phys; } ;
struct inode {int dummy; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct inode*,scalar_t__,scalar_t__*,unsigned int*,unsigned int*) ;
 int FUNC_3 (struct inode*,struct ocfs2_write_ctxt*,struct ocfs2_write_cluster_desc*) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_2,
         struct ocfs2_write_ctxt *VAR_3,
         unsigned int *VAR_4,
         unsigned int *VAR_5)
{
 int VAR_6;
 struct ocfs2_write_cluster_desc *VAR_7;
 unsigned int VAR_8 = 0;
 unsigned int VAR_9 = 0;
 u32 VAR_10 = 0;
 int VAR_11;

 *VAR_4 = 0;
 *VAR_5 = 0;

 for (VAR_11 = 0; VAR_11 < VAR_3->w_clen; VAR_11++) {
  VAR_7 = &VAR_3->w_desc[VAR_11];
  VAR_7->c_cpos = VAR_3->w_cpos + VAR_11;

  if (VAR_8 == 0) {



   VAR_6 = FUNC_2(VAR_2, VAR_7->c_cpos, &VAR_10,
       &VAR_8, &VAR_9);
   if (VAR_6) {
    FUNC_1(VAR_6);
    goto out;
   }


   FUNC_0(VAR_9 & VAR_0);
   if (VAR_9 & VAR_1)
    *VAR_5 = *VAR_5 + 2;
  } else if (VAR_10) {




   VAR_10++;
  }







  if (VAR_7->c_cpos >= VAR_3->w_first_new_cpos) {
   FUNC_0(VAR_10 == 0);
   VAR_7->c_needs_zero = 1;
  }

  VAR_7->c_phys = VAR_10;
  if (VAR_10 == 0) {
   VAR_7->c_new = 1;
   VAR_7->c_needs_zero = 1;
   VAR_7->c_clear_unwritten = 1;
   *VAR_4 = *VAR_4 + 1;
  }

  if (VAR_9 & VAR_1) {
   VAR_7->c_clear_unwritten = 1;
   VAR_7->c_needs_zero = 1;
  }

  VAR_6 = FUNC_3(VAR_2, VAR_3, VAR_7);
  if (VAR_6) {
   FUNC_1(VAR_6);
   goto out;
  }

  VAR_8--;
 }

 VAR_6 = 0;
out:
 return VAR_6;
}
