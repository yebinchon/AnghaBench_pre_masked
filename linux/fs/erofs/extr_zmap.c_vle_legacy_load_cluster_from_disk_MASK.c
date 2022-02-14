
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int blkaddr; int * delta; } ;
struct z_erofs_vle_decompressed_index {TYPE_1__ di_u; int di_clusterofs; int di_advise; } ;
struct z_erofs_maprecorder {unsigned long lcn; int clusterofs; unsigned int type; int pblk; void** delta; struct z_erofs_vle_decompressed_index* kaddr; struct inode* inode; } ;
struct inode {int dummy; } ;
struct erofs_inode {int z_logical_clusterbits; scalar_t__ const xattr_isize; scalar_t__ const inode_isize; int nid; } ;
typedef scalar_t__ erofs_off_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct erofs_inode* FUNC_1 (struct inode* const) ;
 int FUNC_2 (struct inode* const) ;



 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (scalar_t__ const) ;
 int FUNC_4 (scalar_t__ const) ;
 int FUNC_5 (scalar_t__ const) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct z_erofs_maprecorder*,int ) ;

__attribute__((used)) static int FUNC_10(struct z_erofs_maprecorder *VAR_3,
          unsigned long VAR_4)
{
 struct inode *const VAR_5 = VAR_3->inode;
 struct erofs_inode *const VAR_6 = FUNC_1(VAR_5);
 const erofs_off_t VAR_7 = FUNC_6(FUNC_2(VAR_5), VAR_6->nid);
 const erofs_off_t VAR_8 =
  FUNC_3(VAR_7 + VAR_6->inode_isize +
            VAR_6->xattr_isize) +
  VAR_4 * sizeof(struct z_erofs_vle_decompressed_index);
 struct z_erofs_vle_decompressed_index *VAR_9;
 unsigned int VAR_10, VAR_11;
 int VAR_12;

 VAR_12 = FUNC_9(VAR_3, FUNC_4(VAR_8));
 if (VAR_12)
  return VAR_12;

 VAR_3->lcn = VAR_4;
 VAR_9 = VAR_3->kaddr + FUNC_5(VAR_8);

 VAR_10 = FUNC_7(VAR_9->di_advise);
 VAR_11 = (VAR_10 >> VAR_1) &
  ((1 << VAR_2) - 1);
 switch (VAR_11) {
 case 129:
  VAR_3->clusterofs = 1 << VAR_6->z_logical_clusterbits;
  VAR_3->delta[0] = FUNC_7(VAR_9->di_u.delta[0]);
  VAR_3->delta[1] = FUNC_7(VAR_9->di_u.delta[1]);
  break;
 case 128:
 case 130:
  VAR_3->clusterofs = FUNC_7(VAR_9->di_clusterofs);
  VAR_3->pblk = FUNC_8(VAR_9->di_u.blkaddr);
  break;
 default:
  FUNC_0(1);
  return -VAR_0;
 }
 VAR_3->type = VAR_11;
 return 0;
}
