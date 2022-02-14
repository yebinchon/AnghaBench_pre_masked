
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_agnumber_t ;
struct xfs_perag {int dummy; } ;
struct xfs_mount {int dummy; } ;
struct xfs_alloc_arg {int len; int * member_0; } ;


 int VAR_0 ;
 int FUNC_0 (struct xfs_perag*,int ,struct xfs_alloc_arg*) ;
 struct xfs_perag* FUNC_1 (struct xfs_mount*,int ) ;
 int FUNC_2 (struct xfs_perag*) ;

__attribute__((used)) static inline void
FUNC_3(
 struct xfs_mount *VAR_1,
 xfs_agnumber_t VAR_2)
{
 struct xfs_alloc_arg VAR_3 = { ((void*)0) };
 struct xfs_perag *VAR_4;

 VAR_3.len = 1;
 VAR_4 = FUNC_1(VAR_1, VAR_2);
 FUNC_0(VAR_4, VAR_0, &VAR_3);
 FUNC_2(VAR_4);
}
