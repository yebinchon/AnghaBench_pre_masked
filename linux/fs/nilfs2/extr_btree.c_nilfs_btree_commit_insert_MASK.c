
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ bpr_ptr; } ;
struct nilfs_btree_path {int (* bp_op ) (struct nilfs_bmap*,struct nilfs_btree_path*,int,scalar_t__*,scalar_t__*) ;TYPE_1__ bp_newreq; } ;
struct nilfs_bmap {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef scalar_t__ __u64 ;


 scalar_t__ FUNC_0 (struct nilfs_bmap*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct nilfs_bmap*,TYPE_1__*,struct inode*) ;
 int FUNC_2 (struct nilfs_bmap*) ;
 struct inode* FUNC_3 (struct nilfs_bmap*) ;
 int FUNC_4 (struct nilfs_bmap*) ;
 int FUNC_5 (struct nilfs_bmap*,scalar_t__,scalar_t__) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct nilfs_bmap*,struct nilfs_btree_path*,int,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static void FUNC_8(struct nilfs_bmap *VAR_2,
          struct nilfs_btree_path *VAR_3,
          int VAR_4, __u64 VAR_5, __u64 VAR_6)
{
 struct inode *VAR_7 = ((void*)0);
 int VAR_8;

 FUNC_6((struct buffer_head *)((unsigned long)VAR_6));
 VAR_6 = VAR_3[VAR_0].bp_newreq.bpr_ptr;
 if (FUNC_0(VAR_2)) {
  FUNC_5(VAR_2, VAR_5, VAR_6);
  VAR_7 = FUNC_3(VAR_2);
 }

 for (VAR_8 = VAR_1; VAR_8 <= VAR_4; VAR_8++) {
  FUNC_1(VAR_2,
         &VAR_3[VAR_8 - 1].bp_newreq, VAR_7);
  VAR_3[VAR_8].bp_op(VAR_2, VAR_3, VAR_8, &VAR_5, &VAR_6);
 }

 if (!FUNC_2(VAR_2))
  FUNC_4(VAR_2);
}
