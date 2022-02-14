
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ufs_hba {scalar_t__ ufs_version; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

u32 FUNC_0(struct ufs_hba *VAR_4)
{

 if ((VAR_4->ufs_version == VAR_0) ||
     (VAR_4->ufs_version == VAR_1))
  return VAR_2;
 else
  return VAR_3;
}
