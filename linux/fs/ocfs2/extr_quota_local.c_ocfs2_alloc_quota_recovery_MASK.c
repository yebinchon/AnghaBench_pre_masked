
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_quota_recovery {int * r_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 struct ocfs2_quota_recovery* FUNC_1 (int,int ) ;

__attribute__((used)) static struct ocfs2_quota_recovery *FUNC_2(void)
{
 int VAR_2;
 struct ocfs2_quota_recovery *VAR_3;

 VAR_3 = FUNC_1(sizeof(struct ocfs2_quota_recovery), VAR_0);
 if (!VAR_3)
  return ((void*)0);
 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
  FUNC_0(&(VAR_3->r_list[VAR_2]));
 return VAR_3;
}
