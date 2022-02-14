
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_daddr_t ;
typedef int xfs_buf_flags_t ;
struct xfs_buftarg {int dummy; } ;
struct xfs_buf_ops {int dummy; } ;
struct xfs_buf {int dummy; } ;


 int FUNC_0 (int ,int ,size_t) ;
 int VAR_0 ;
 struct xfs_buf* FUNC_1 (struct xfs_buftarg*,int *,int,int ,struct xfs_buf_ops const*) ;

__attribute__((used)) static inline struct xfs_buf *
FUNC_2(
 struct xfs_buftarg *VAR_1,
 xfs_daddr_t VAR_2,
 size_t VAR_3,
 xfs_buf_flags_t VAR_4,
 const struct xfs_buf_ops *VAR_5)
{
 FUNC_0(VAR_0, VAR_2, VAR_3);
 return FUNC_1(VAR_1, &VAR_0, 1, VAR_4, VAR_5);
}
