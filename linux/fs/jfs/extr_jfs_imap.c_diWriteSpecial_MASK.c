
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
struct metapage {scalar_t__ data; } ;
struct jfs_sb_info {int l2nbperpage; int gengen; int ait2; } ;
struct inode {int i_ino; int i_sb; } ;
struct dinode {int di_gengen; int di_xtroot; } ;
typedef int ino_t ;
struct TYPE_2__ {int i_xtroot; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 struct jfs_sb_info* FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct dinode*,struct inode*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *,int *,int) ;
 struct metapage* FUNC_8 (struct inode*,int,int ,int) ;
 int FUNC_9 (struct metapage*) ;

void FUNC_10(struct inode *VAR_5, int VAR_6)
{
 struct jfs_sb_info *VAR_7 = FUNC_2(VAR_5->i_sb);
 uint VAR_8;
 struct dinode *VAR_9;
 ino_t VAR_10 = VAR_5->i_ino;
 struct metapage *VAR_11;

 if (VAR_6)
  VAR_8 = FUNC_3(&VAR_7->ait2) >> VAR_7->l2nbperpage;
 else
  VAR_8 = VAR_0 >> VAR_3;

 FUNC_0(VAR_10 < VAR_2);

 VAR_8 += VAR_10 >> 3;


 VAR_11 = FUNC_8(VAR_5, VAR_8 << VAR_7->l2nbperpage, VAR_4, 1);
 if (VAR_11 == ((void*)0)) {
  FUNC_6("diWriteSpecial: failed to read aggregate inode extent!");
  return;
 }


 VAR_9 = (struct dinode *) (VAR_11->data);
 VAR_9 += VAR_10 % 8;


 FUNC_4(VAR_9, VAR_5);
 FUNC_7(&VAR_9->di_xtroot, &FUNC_1(VAR_5)->i_xtroot, 288);

 if (VAR_10 == VAR_1)
  VAR_9->di_gengen = FUNC_5(VAR_7->gengen);


 FUNC_9(VAR_11);
}
