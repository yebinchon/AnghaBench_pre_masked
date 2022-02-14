
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_xa_loc {TYPE_1__* xl_ops; } ;
typedef int handle_t ;
struct TYPE_2__ {int (* xlo_journal_access ) (int *,struct ocfs2_xa_loc*,int) ;} ;


 int FUNC_0 (int *,struct ocfs2_xa_loc*,int) ;

__attribute__((used)) static int FUNC_1(handle_t *VAR_0, struct ocfs2_xa_loc *VAR_1,
       int VAR_2)
{
 return VAR_1->xl_ops->xlo_journal_access(VAR_0, VAR_1, VAR_2);
}
