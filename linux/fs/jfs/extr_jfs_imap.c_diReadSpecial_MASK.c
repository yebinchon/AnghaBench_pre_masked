
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint ;
struct super_block {int dummy; } ;
struct metapage {scalar_t__ data; } ;
struct jfs_sb_info {int l2nbperpage; scalar_t__ ipaimap2; scalar_t__ ipaimap; void* inostamp; void* gengen; int ait2; } ;
struct inode {int i_ino; int i_flags; TYPE_1__* i_mapping; } ;
struct dinode {int di_inostamp; int di_gengen; } ;
typedef int ino_t ;
struct TYPE_4__ {scalar_t__ ipimap; } ;
struct TYPE_3__ {int * a_ops; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 struct jfs_sb_info* FUNC_2 (struct super_block*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct dinode*,struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (char*) ;
 int VAR_7 ;
 void* FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 struct inode* FUNC_10 (struct super_block*) ;
 struct metapage* FUNC_11 (struct inode*,int,int ,int) ;
 int FUNC_12 (struct metapage*) ;
 int FUNC_13 (struct inode*,int) ;

struct inode *FUNC_14(struct super_block *VAR_8, ino_t VAR_9, int VAR_10)
{
 struct jfs_sb_info *VAR_11 = FUNC_2(VAR_8);
 uint VAR_12;
 struct dinode *VAR_13;
 struct inode *VAR_14;
 struct metapage *VAR_15;

 VAR_14 = FUNC_10(VAR_8);
 if (VAR_14 == ((void*)0)) {
  FUNC_7("diReadSpecial: new_inode returned NULL!");
  return VAR_14;
 }

 if (VAR_10) {
  VAR_12 = FUNC_3(&VAR_11->ait2) >> VAR_11->l2nbperpage;
  FUNC_1(VAR_14)->ipimap = VAR_11->ipaimap2;
 } else {
  VAR_12 = VAR_0 >> VAR_4;
  FUNC_1(VAR_14)->ipimap = VAR_11->ipaimap;
 }

 FUNC_0(VAR_9 < VAR_3);

 VAR_14->i_ino = VAR_9;

 VAR_12 += VAR_9 >> 3;


 VAR_15 = FUNC_11(VAR_14, VAR_12 << VAR_11->l2nbperpage, VAR_5, 1);
 if (VAR_15 == ((void*)0)) {
  FUNC_13(VAR_14, 1);
  FUNC_6(VAR_14);
  return (((void*)0));
 }


 VAR_13 = (struct dinode *) (VAR_15->data);
 VAR_13 += VAR_9 % 8;


 if ((FUNC_4(VAR_13, VAR_14)) != 0) {

  FUNC_13(VAR_14, 1);
  FUNC_6(VAR_14);

  FUNC_12(VAR_15);
  return (((void*)0));

 }

 VAR_14->i_mapping->a_ops = &VAR_7;
 FUNC_9(VAR_14->i_mapping, VAR_2);


 VAR_14->i_flags |= VAR_6;

 if ((VAR_9 == VAR_1) && (FUNC_1(VAR_14)->ipimap == VAR_11->ipaimap)) {
  VAR_11->gengen = FUNC_8(VAR_13->di_gengen);
  VAR_11->inostamp = FUNC_8(VAR_13->di_inostamp);
 }


 FUNC_12(VAR_15);

 FUNC_5(VAR_14);

 return (VAR_14);
}
