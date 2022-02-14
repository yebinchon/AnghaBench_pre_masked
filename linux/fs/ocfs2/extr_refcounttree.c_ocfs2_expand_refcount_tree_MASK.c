
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_caching_info {int dummy; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;


 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,struct ocfs2_caching_info*,struct buffer_head*,struct buffer_head**,struct ocfs2_alloc_context*) ;
 int FUNC_4 (int *,struct ocfs2_caching_info*,struct buffer_head*,struct buffer_head*,struct ocfs2_alloc_context*) ;

__attribute__((used)) static int FUNC_5(handle_t *VAR_0,
          struct ocfs2_caching_info *VAR_1,
          struct buffer_head *VAR_2,
          struct buffer_head *VAR_3,
          struct ocfs2_alloc_context *VAR_4)
{
 int VAR_5;
 struct buffer_head *VAR_6 = ((void*)0);

 if (VAR_2 == VAR_3) {




  VAR_5 = FUNC_3(VAR_0, VAR_1, VAR_2,
         &VAR_6, VAR_4);
  if (VAR_5) {
   FUNC_2(VAR_5);
   goto out;
  }
 } else {
  VAR_6 = VAR_3;
  FUNC_1(VAR_6);
 }



 VAR_5 = FUNC_4(VAR_0, VAR_1, VAR_2,
         VAR_6, VAR_4);
 if (VAR_5)
  FUNC_2(VAR_5);
out:
 FUNC_0(VAR_6);
 return VAR_5;
}
