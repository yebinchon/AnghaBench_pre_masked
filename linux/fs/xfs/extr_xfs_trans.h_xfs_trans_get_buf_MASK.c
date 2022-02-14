
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_daddr_t ;
typedef int uint ;
struct xfs_trans {int dummy; } ;
struct xfs_buftarg {int dummy; } ;
struct xfs_buf {int dummy; } ;


 int FUNC_0 (int ,int ,int) ;
 int VAR_0 ;
 struct xfs_buf* FUNC_1 (struct xfs_trans*,struct xfs_buftarg*,int *,int,int ) ;

__attribute__((used)) static inline struct xfs_buf *
FUNC_2(
 struct xfs_trans *VAR_1,
 struct xfs_buftarg *VAR_2,
 xfs_daddr_t VAR_3,
 int VAR_4,
 uint VAR_5)
{
 FUNC_0(VAR_0, VAR_3, VAR_4);
 return FUNC_1(VAR_1, VAR_2, &VAR_0, 1, VAR_5);
}
