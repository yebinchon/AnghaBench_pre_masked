
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_xa_loc {TYPE_1__* xl_ops; } ;
struct TYPE_2__ {int (* xlo_wipe_namevalue ) (struct ocfs2_xa_loc*) ;} ;


 int FUNC_0 (struct ocfs2_xa_loc*) ;

__attribute__((used)) static void FUNC_1(struct ocfs2_xa_loc *VAR_0)
{
 VAR_0->xl_ops->xlo_wipe_namevalue(VAR_0);
}
