
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xfs_fileoff_t ;
struct TYPE_3__ {int l0; } ;
typedef TYPE_1__ xfs_bmbt_rec_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;

xfs_fileoff_t
FUNC_2(
 xfs_bmbt_rec_t *VAR_1)
{
 return ((xfs_fileoff_t)FUNC_0(VAR_1->l0) &
   FUNC_1(64 - VAR_0)) >> 9;
}
