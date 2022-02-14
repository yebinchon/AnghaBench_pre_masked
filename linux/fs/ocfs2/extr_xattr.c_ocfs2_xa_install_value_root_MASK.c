
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_xa_loc {TYPE_1__* xl_entry; } ;
struct TYPE_2__ {int xe_name_offset; int xe_name_len; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int *,int ) ;
 char* FUNC_3 (struct ocfs2_xa_loc*,int ) ;

__attribute__((used)) static void FUNC_4(struct ocfs2_xa_loc *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_2->xl_entry->xe_name_len);
 char *VAR_4;

 VAR_4 = FUNC_3(VAR_2,
    FUNC_1(VAR_2->xl_entry->xe_name_offset));
 FUNC_2(VAR_4 + VAR_3, &VAR_1, VAR_0);
}
