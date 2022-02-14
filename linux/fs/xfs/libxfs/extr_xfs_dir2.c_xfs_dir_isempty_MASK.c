
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ if_data; } ;
struct TYPE_12__ {TYPE_2__ if_u1; } ;
struct TYPE_10__ {scalar_t__ di_size; } ;
struct TYPE_13__ {TYPE_3__ i_df; TYPE_1__ i_d; } ;
typedef TYPE_4__ xfs_inode_t ;
struct TYPE_14__ {int count; } ;
typedef TYPE_5__ xfs_dir2_sf_hdr_t ;
struct TYPE_15__ {int i_mode; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_8__* FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;

int
FUNC_4(
 xfs_inode_t *VAR_0)
{
 xfs_dir2_sf_hdr_t *VAR_1;

 FUNC_0(FUNC_1(FUNC_2(VAR_0)->i_mode));
 if (VAR_0->i_d.di_size == 0)
  return 1;
 if (VAR_0->i_d.di_size > FUNC_3(VAR_0))
  return 0;
 VAR_1 = (xfs_dir2_sf_hdr_t *)VAR_0->i_df.if_u1.if_data;
 return !VAR_1->count;
}
