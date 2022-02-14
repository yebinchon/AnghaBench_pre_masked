
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct autofs_sb_info {int oz_pgrp; } ;


 int FUNC_0 (struct autofs_sb_info*) ;
 struct autofs_sb_info* FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct autofs_sb_info*,int ) ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;

void FUNC_6(struct super_block *VAR_1)
{
 struct autofs_sb_info *VAR_2 = FUNC_1(VAR_1);







 if (VAR_2) {

  FUNC_0(VAR_2);
  FUNC_5(VAR_2->oz_pgrp);
 }

 FUNC_4("shutting down\n");
 FUNC_3(VAR_1);
 if (VAR_2)
  FUNC_2(VAR_2, VAR_0);
}
