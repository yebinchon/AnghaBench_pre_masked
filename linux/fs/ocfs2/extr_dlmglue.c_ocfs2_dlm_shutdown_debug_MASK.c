
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {struct ocfs2_dlm_debug* osb_dlm_debug; } ;
struct ocfs2_dlm_debug {int dummy; } ;


 int FUNC_0 (struct ocfs2_dlm_debug*) ;

__attribute__((used)) static void FUNC_1(struct ocfs2_super *VAR_0)
{
 struct ocfs2_dlm_debug *VAR_1 = VAR_0->osb_dlm_debug;

 if (VAR_1)
  FUNC_0(VAR_1);
}
