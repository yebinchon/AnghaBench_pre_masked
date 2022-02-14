
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_inumbers {int dummy; } ;
struct xfs_inogrp {int dummy; } ;
struct xfs_ibulk {int ubuffer; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct xfs_inogrp*,int) ;
 int FUNC_1 (struct xfs_ibulk*,int) ;
 int FUNC_2 (struct xfs_inogrp*,struct xfs_inumbers const*) ;

int
FUNC_3(
 struct xfs_ibulk *VAR_1,
 const struct xfs_inumbers *VAR_2)
{
 struct xfs_inogrp VAR_3;

 FUNC_2(&VAR_3, VAR_2);
 if (FUNC_0(VAR_1->ubuffer, &VAR_3, sizeof(struct xfs_inogrp)))
  return -VAR_0;
 return FUNC_1(VAR_1, sizeof(struct xfs_inogrp));
}
