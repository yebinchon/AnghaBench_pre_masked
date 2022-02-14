
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_daddr_t ;
typedef int xfs_buf_flags_t ;
struct xfs_buftarg {int dummy; } ;
struct xfs_buf {int dummy; } ;


 int FUNC_0 (int ,int ,size_t) ;
 int VAR_0 ;
 int FUNC_1 (struct xfs_buftarg*,int *,int,int ,int *,struct xfs_buf**) ;

struct xfs_buf *
FUNC_2(
 struct xfs_buftarg *VAR_1,
 xfs_daddr_t VAR_2,
 size_t VAR_3,
 xfs_buf_flags_t VAR_4)
{
 struct xfs_buf *VAR_5;
 int VAR_6;
 FUNC_0(VAR_0, VAR_2, VAR_3);

 VAR_6 = FUNC_1(VAR_1, &VAR_0, 1, VAR_4, ((void*)0), &VAR_5);
 if (VAR_6)
  return ((void*)0);
 return VAR_5;
}
