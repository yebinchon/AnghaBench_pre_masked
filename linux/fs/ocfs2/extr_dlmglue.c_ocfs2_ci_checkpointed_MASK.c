
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_lock_res {scalar_t__ l_level; } ;
struct ocfs2_caching_info {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ocfs2_caching_info*) ;
 int FUNC_3 (struct ocfs2_caching_info*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct ocfs2_caching_info *VAR_3,
     struct ocfs2_lock_res *VAR_4,
     int VAR_5)
{
 int VAR_6 = FUNC_2(VAR_3);

 FUNC_0(VAR_5 != VAR_1 && VAR_5 != VAR_2);
 FUNC_0(VAR_4->l_level != VAR_0 && !VAR_6);

 if (VAR_6)
  return 1;

 FUNC_4(FUNC_1(FUNC_3(VAR_3)));
 return 0;
}
