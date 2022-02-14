
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sb_flags; } ;
struct ocfs2_dlm_lksb {TYPE_1__ lksb_fsdlm; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct ocfs2_dlm_lksb *VAR_1)
{
 int VAR_2 = VAR_1->lksb_fsdlm.sb_flags & VAR_0;

 return !VAR_2;
}
