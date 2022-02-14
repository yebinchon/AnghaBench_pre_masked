
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* sb_lvbptr; } ;
struct ocfs2_dlm_lksb {TYPE_1__ lksb_fsdlm; } ;
struct dlm_lksb {int dummy; } ;



__attribute__((used)) static void *FUNC_0(struct ocfs2_dlm_lksb *VAR_0)
{
 if (!VAR_0->lksb_fsdlm.sb_lvbptr)
  VAR_0->lksb_fsdlm.sb_lvbptr = (char *)VAR_0 +
          sizeof(struct dlm_lksb);
 return (void *)(VAR_0->lksb_fsdlm.sb_lvbptr);
}
