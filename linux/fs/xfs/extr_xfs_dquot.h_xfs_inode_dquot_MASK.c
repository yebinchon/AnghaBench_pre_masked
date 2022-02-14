
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_dquot_t ;
struct xfs_inode {int * i_pdquot; int * i_gdquot; int * i_udquot; } ;


 int VAR_0 ;




__attribute__((used)) static inline xfs_dquot_t *FUNC_0(struct xfs_inode *VAR_1, int VAR_2)
{
 switch (VAR_2 & VAR_0) {
 case 128:
  return VAR_1->i_udquot;
 case 130:
  return VAR_1->i_gdquot;
 case 129:
  return VAR_1->i_pdquot;
 default:
  return ((void*)0);
 }
}
