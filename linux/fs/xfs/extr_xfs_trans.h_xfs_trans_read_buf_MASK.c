
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_daddr_t ;
typedef int xfs_buf_flags_t ;
struct xfs_trans {int dummy; } ;
struct xfs_mount {int dummy; } ;
struct xfs_buftarg {int dummy; } ;
struct xfs_buf_ops {int dummy; } ;
struct xfs_buf {int dummy; } ;


 int FUNC_0 (int ,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (struct xfs_mount*,struct xfs_trans*,struct xfs_buftarg*,int *,int,int ,struct xfs_buf**,struct xfs_buf_ops const*) ;

__attribute__((used)) static inline int
FUNC_2(
 struct xfs_mount *VAR_1,
 struct xfs_trans *VAR_2,
 struct xfs_buftarg *VAR_3,
 xfs_daddr_t VAR_4,
 int VAR_5,
 xfs_buf_flags_t VAR_6,
 struct xfs_buf **VAR_7,
 const struct xfs_buf_ops *VAR_8)
{
 FUNC_0(VAR_0, VAR_4, VAR_5);
 return FUNC_1(VAR_1, VAR_2, VAR_3, &VAR_0, 1,
          VAR_6, VAR_7, VAR_8);
}
