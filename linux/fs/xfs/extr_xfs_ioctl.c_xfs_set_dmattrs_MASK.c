
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int xfs_trans_t ;
typedef int xfs_mount_t ;
struct TYPE_8__ {int di_dmstate; int di_dmevmask; } ;
struct TYPE_9__ {TYPE_1__ i_d; int * i_mount; } ;
typedef TYPE_2__ xfs_inode_t ;
typedef int uint16_t ;
typedef int uint ;
struct TYPE_10__ {int tr_ichange; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_7__* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (int *,int *,int ,int ,int ,int **) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,TYPE_2__*,int ) ;
 int FUNC_7 (int *,TYPE_2__*,int ) ;

int
FUNC_8(
 xfs_inode_t *VAR_5,
 uint VAR_6,
 uint16_t VAR_7)
{
 xfs_mount_t *VAR_8 = VAR_5->i_mount;
 xfs_trans_t *VAR_9;
 int VAR_10;

 if (!FUNC_2(VAR_0))
  return -VAR_2;

 if (FUNC_1(VAR_8))
  return -VAR_1;

 VAR_10 = FUNC_4(VAR_8, &FUNC_0(VAR_8)->tr_ichange, 0, 0, 0, &VAR_9);
 if (VAR_10)
  return VAR_10;

 FUNC_3(VAR_5, VAR_3);
 FUNC_6(VAR_9, VAR_5, VAR_3);

 VAR_5->i_d.di_dmevmask = VAR_6;
 VAR_5->i_d.di_dmstate = VAR_7;

 FUNC_7(VAR_9, VAR_5, VAR_4);
 VAR_10 = FUNC_5(VAR_9);

 return VAR_10;
}
