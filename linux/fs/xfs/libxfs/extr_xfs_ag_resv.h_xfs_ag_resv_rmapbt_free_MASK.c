
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_agnumber_t ;
struct xfs_perag {int dummy; } ;
struct xfs_mount {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct xfs_perag*,int ,int *,int) ;
 struct xfs_perag* FUNC_1 (struct xfs_mount*,int ) ;
 int FUNC_2 (struct xfs_perag*) ;

__attribute__((used)) static inline void
FUNC_3(
 struct xfs_mount *VAR_1,
 xfs_agnumber_t VAR_2)
{
 struct xfs_perag *VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 FUNC_0(VAR_3, VAR_0, ((void*)0), 1);
 FUNC_2(VAR_3);
}
