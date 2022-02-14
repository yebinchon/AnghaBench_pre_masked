
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_path {int dummy; } ;
struct ocfs2_caching_info {int dummy; } ;
typedef int handle_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,struct ocfs2_caching_info*,struct ocfs2_path*,int) ;
 int FUNC_2 (struct ocfs2_path*) ;

int FUNC_3(struct ocfs2_caching_info *VAR_0,
         handle_t *VAR_1,
         struct ocfs2_path *VAR_2)
{
 int VAR_3, VAR_4 = 0;

 if (!VAR_2)
  goto out;

 for(VAR_3 = 0; VAR_3 < FUNC_2(VAR_2); VAR_3++) {
  VAR_4 = FUNC_1(VAR_1, VAR_0, VAR_2, VAR_3);
  if (VAR_4 < 0) {
   FUNC_0(VAR_4);
   goto out;
  }
 }

out:
 return VAR_4;
}
