
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct super_block*,char*) ;
 int FUNC_4 (struct super_block*,int) ;

__attribute__((used)) static void FUNC_5(struct super_block *VAR_3, unsigned long VAR_4)
{
 if (VAR_4 & (1 << VAR_0)) {
  if (!FUNC_0(VAR_3)) {
   FUNC_4(VAR_3, VAR_0);
   FUNC_3(VAR_3, "switching to journaled data mode\n");
  }
 } else if (VAR_4 & (1 << VAR_1)) {
  if (!FUNC_1(VAR_3)) {
   FUNC_4(VAR_3, VAR_1);
   FUNC_3(VAR_3, "switching to ordered data mode\n");
  }
 } else if (VAR_4 & (1 << VAR_2)) {
  if (!FUNC_2(VAR_3)) {
   FUNC_4(VAR_3, VAR_2);
   FUNC_3(VAR_3, "switching to writeback data mode\n");
  }
 }
}
