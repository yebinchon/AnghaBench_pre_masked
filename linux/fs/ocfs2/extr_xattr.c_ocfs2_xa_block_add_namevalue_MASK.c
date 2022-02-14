
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_xa_loc {TYPE_1__* xl_entry; } ;
struct TYPE_2__ {int xe_name_offset; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ocfs2_xa_loc*) ;

__attribute__((used)) static void FUNC_2(struct ocfs2_xa_loc *VAR_0, int VAR_1)
{
 int VAR_2 = FUNC_1(VAR_0);

 VAR_0->xl_entry->xe_name_offset = FUNC_0(VAR_2 - VAR_1);
}
