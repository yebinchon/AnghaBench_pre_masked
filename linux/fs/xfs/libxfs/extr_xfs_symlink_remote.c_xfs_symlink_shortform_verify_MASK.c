
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int * xfs_failaddr_t ;
struct TYPE_3__ {scalar_t__ di_format; } ;
struct xfs_inode {TYPE_1__ i_d; } ;
struct TYPE_4__ {scalar_t__ if_data; } ;
struct xfs_ifork {int if_bytes; TYPE_2__ if_u1; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct xfs_ifork* FUNC_1 (struct xfs_inode*,int ) ;
 int VAR_2 ;
 int * VAR_3 ;
 scalar_t__ FUNC_2 (char*,int ,int) ;

xfs_failaddr_t
FUNC_3(
 struct xfs_inode *VAR_4)
{
 char *VAR_5;
 char *VAR_6;
 struct xfs_ifork *VAR_7;
 int VAR_8;

 FUNC_0(VAR_4->i_d.di_format == VAR_1);
 VAR_7 = FUNC_1(VAR_4, VAR_0);
 VAR_5 = (char *)VAR_7->if_u1.if_data;
 VAR_8 = VAR_7->if_bytes;
 VAR_6 = VAR_5 + VAR_8;





 if (!VAR_8)
  return VAR_3;


 if (VAR_8 < 0 || VAR_8 > VAR_2)
  return VAR_3;


 if (FUNC_2(VAR_5, 0, VAR_8 - 1))
  return VAR_3;


 if (*VAR_6 != 0)
  return VAR_3;
 return ((void*)0);
}
