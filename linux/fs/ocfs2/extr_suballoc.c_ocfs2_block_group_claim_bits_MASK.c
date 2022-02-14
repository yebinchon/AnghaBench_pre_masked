
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_alloc_context {int dummy; } ;
typedef int handle_t ;


 int VAR_0 ;
 int FUNC_0 (int *,struct ocfs2_alloc_context*,unsigned int,int *,int *) ;

__attribute__((used)) static int FUNC_1(struct ocfs2_super *VAR_1,
     handle_t *VAR_2,
     struct ocfs2_alloc_context *VAR_3,
     unsigned int VAR_4,
     u32 *VAR_5, u32 *VAR_6)
{
 int VAR_7 = 0;

 while (VAR_4) {
  VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4,
           VAR_5, VAR_6);
  if (VAR_7 != -VAR_0)
   break;

  VAR_4 >>= 1;
 }

 return VAR_7;
}
