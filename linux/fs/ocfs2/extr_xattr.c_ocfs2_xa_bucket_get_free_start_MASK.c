
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_xattr_bucket {int dummy; } ;
struct ocfs2_xa_loc {struct ocfs2_xattr_bucket* xl_storage; } ;
struct TYPE_2__ {int xh_free_start; } ;


 TYPE_1__* FUNC_0 (struct ocfs2_xattr_bucket*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct ocfs2_xa_loc *VAR_0)
{
 struct ocfs2_xattr_bucket *VAR_1 = VAR_0->xl_storage;
 return FUNC_1(FUNC_0(VAR_1)->xh_free_start);
}
