
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_xa_loc {int xl_entry; TYPE_1__* xl_header; } ;
struct TYPE_2__ {int xh_name_value_len; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ocfs2_xa_loc *VAR_0)
{
 FUNC_0(&VAR_0->xl_header->xh_name_value_len,
       -FUNC_1(VAR_0->xl_entry));
}
