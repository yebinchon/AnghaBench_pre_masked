
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {scalar_t__ osb_dir_resv_level; scalar_t__ osb_resv_level; } ;



int FUNC_0(struct ocfs2_super *VAR_0)
{
 return (VAR_0->osb_resv_level && VAR_0->osb_dir_resv_level);
}
