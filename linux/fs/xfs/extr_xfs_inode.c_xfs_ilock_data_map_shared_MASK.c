
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint ;
struct TYPE_4__ {int if_flags; } ;
struct TYPE_3__ {scalar_t__ di_format; } ;
struct xfs_inode {TYPE_2__ i_df; TYPE_1__ i_d; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct xfs_inode*,int ) ;

uint
FUNC_1(
 struct xfs_inode *VAR_4)
{
 uint VAR_5 = VAR_3;

 if (VAR_4->i_d.di_format == VAR_0 &&
     (VAR_4->i_df.if_flags & VAR_1) == 0)
  VAR_5 = VAR_2;
 FUNC_0(VAR_4, VAR_5);
 return VAR_5;
}
