
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct super_block {int dummy; } ;
struct inode {int i_state; } ;
struct hfs_iget_data {TYPE_3__* member_1; struct hfs_cat_key* member_0; } ;
struct hfs_cat_key {int dummy; } ;
struct TYPE_6__ {int FlNum; } ;
struct TYPE_5__ {int DirID; } ;
struct TYPE_7__ {int type; TYPE_2__ file; TYPE_1__ dir; } ;
typedef TYPE_3__ hfs_cat_rec ;




 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct inode* FUNC_1 (struct super_block*,int ,int ,int ,struct hfs_iget_data*) ;
 int FUNC_2 (struct inode*) ;

struct inode *FUNC_3(struct super_block *VAR_3, struct hfs_cat_key *VAR_4, hfs_cat_rec *VAR_5)
{
 struct hfs_iget_data VAR_6 = { VAR_4, VAR_5 };
 struct inode *VAR_7;
 u32 VAR_8;

 switch (VAR_5->type) {
 case 129:
  VAR_8 = FUNC_0(VAR_5->dir.DirID);
  break;
 case 128:
  VAR_8 = FUNC_0(VAR_5->file.FlNum);
  break;
 default:
  return ((void*)0);
 }
 VAR_7 = FUNC_1(VAR_3, VAR_8, VAR_2, VAR_1, &VAR_6);
 if (VAR_7 && (VAR_7->i_state & VAR_0))
  FUNC_2(VAR_7);
 return VAR_7;
}
