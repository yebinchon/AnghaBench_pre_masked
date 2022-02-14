
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_caching_info {int ci_flags; } ;
struct buffer_head {scalar_t__ b_blocknr; } ;


 int VAR_0 ;
 int FUNC_0 (struct ocfs2_caching_info*,scalar_t__,int) ;
 int FUNC_1 (struct ocfs2_caching_info*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct ocfs2_caching_info*,struct buffer_head*) ;
 scalar_t__ FUNC_3 (struct ocfs2_caching_info*) ;
 int FUNC_4 (struct ocfs2_caching_info*) ;
 scalar_t__ FUNC_5 (struct ocfs2_caching_info*) ;
 int FUNC_6 (struct ocfs2_caching_info*) ;
 int FUNC_7 (unsigned long long,unsigned long long) ;

void FUNC_8(struct ocfs2_caching_info *VAR_1,
          struct buffer_head *VAR_2)
{
 int VAR_3;



 if (FUNC_2(VAR_1, VAR_2))
  return;

 FUNC_7(
  (unsigned long long)FUNC_5(VAR_1),
  (unsigned long long)VAR_2->b_blocknr);



 FUNC_4(VAR_1);
 if (FUNC_3(VAR_1)) {


  FUNC_1(VAR_1, VAR_2->b_blocknr);
  FUNC_6(VAR_1);
  return;
 }

 VAR_3 = 0;
 if (VAR_1->ci_flags & VAR_0) {

  VAR_3 = 1;
 }
 FUNC_6(VAR_1);

 FUNC_0(VAR_1, VAR_2->b_blocknr, VAR_3);
}
