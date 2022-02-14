
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* if_root; } ;
struct xfs_ifork {size_t if_bytes; TYPE_1__ if_u1; } ;
struct xfs_iext_rec {int dummy; } ;
struct xfs_iext_cursor {void* leaf; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 void* FUNC_0 (void*,size_t,int ) ;
 int FUNC_1 (void*,int ,int) ;

__attribute__((used)) static void
FUNC_2(
 struct xfs_ifork *VAR_3,
 struct xfs_iext_cursor *VAR_4)
{
 size_t VAR_5 = VAR_3->if_bytes + sizeof(struct xfs_iext_rec);
 void *VAR_6;


 if (VAR_5 / sizeof(struct xfs_iext_rec) == VAR_2)
  VAR_5 = VAR_1;

 VAR_6 = FUNC_0(VAR_3->if_u1.if_root, VAR_5, VAR_0);
 FUNC_1(VAR_6 + VAR_3->if_bytes, 0, VAR_5 - VAR_3->if_bytes);
 VAR_3->if_u1.if_root = VAR_6;
 VAR_4->leaf = VAR_6;
}
