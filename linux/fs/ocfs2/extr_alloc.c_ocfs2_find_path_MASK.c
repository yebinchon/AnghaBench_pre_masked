
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ocfs2_path {int dummy; } ;
struct ocfs2_caching_info {int dummy; } ;
struct find_path_data {int index; struct ocfs2_path* path; } ;


 int FUNC_0 (struct ocfs2_caching_info*,int ,int ,int ,struct find_path_data*) ;
 int VAR_0 ;
 int FUNC_1 (struct ocfs2_path*) ;

int FUNC_2(struct ocfs2_caching_info *VAR_1,
      struct ocfs2_path *VAR_2, u32 VAR_3)
{
 struct find_path_data VAR_4;

 VAR_4.index = 1;
 VAR_4.path = VAR_2;
 return FUNC_0(VAR_1, FUNC_1(VAR_2), VAR_3,
     VAR_0, &VAR_4);
}
