
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_ino; int i_sb; int i_nlink; scalar_t__ i_size; int i_data; } ;
struct TYPE_2__ {int i_ext_last; int * i_ext_bh; int * i_ac; int * i_lc; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int *) ;

void
FUNC_10(struct inode *VAR_0)
{
 unsigned long VAR_1;
 FUNC_8("evict_inode(ino=%lu, nlink=%u)\n",
   VAR_0->i_ino, VAR_0->i_nlink);
 FUNC_9(&VAR_0->i_data);

 if (!VAR_0->i_nlink) {
  VAR_0->i_size = 0;
  FUNC_4(VAR_0);
 }

 FUNC_7(VAR_0);
 FUNC_5(VAR_0);
 FUNC_3(VAR_0);
 VAR_1 = (unsigned long)FUNC_0(VAR_0)->i_lc;
 if (VAR_1) {
  FUNC_8("freeing ext cache\n");
  FUNC_0(VAR_0)->i_lc = ((void*)0);
  FUNC_0(VAR_0)->i_ac = ((void*)0);
  FUNC_6(VAR_1);
 }
 FUNC_1(FUNC_0(VAR_0)->i_ext_bh);
 FUNC_0(VAR_0)->i_ext_last = ~1;
 FUNC_0(VAR_0)->i_ext_bh = ((void*)0);

 if (!VAR_0->i_nlink)
  FUNC_2(VAR_0->i_sb, VAR_0->i_ino);
}
