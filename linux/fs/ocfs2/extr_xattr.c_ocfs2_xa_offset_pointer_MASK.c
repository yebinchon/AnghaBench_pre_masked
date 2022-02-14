
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_xa_loc {int xl_size; TYPE_1__* xl_ops; } ;
struct TYPE_2__ {void* (* xlo_offset_pointer ) (struct ocfs2_xa_loc*,int) ;} ;


 int FUNC_0 (int) ;
 void* FUNC_1 (struct ocfs2_xa_loc*,int) ;

__attribute__((used)) static void *FUNC_2(struct ocfs2_xa_loc *VAR_0, int VAR_1)
{
 FUNC_0(VAR_1 >= VAR_0->xl_size);
 return VAR_0->xl_ops->xlo_offset_pointer(VAR_0, VAR_1);
}
