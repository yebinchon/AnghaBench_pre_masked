
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ocfs2_xattr_entry {int dummy; } ;
struct ocfs2_xa_loc {int * xl_entry; TYPE_1__* xl_header; } ;
struct TYPE_2__ {int xh_count; int * xh_entries; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static void FUNC_3(struct ocfs2_xa_loc *VAR_0, u32 VAR_1)
{
 int VAR_2 = FUNC_1(VAR_0->xl_header->xh_count);
 VAR_0->xl_entry = &(VAR_0->xl_header->xh_entries[VAR_2]);
 FUNC_0(&VAR_0->xl_header->xh_count, 1);
 FUNC_2(VAR_0->xl_entry, 0, sizeof(struct ocfs2_xattr_entry));
}
