
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {scalar_t__ i_size; int i_mode; int i_nlink; struct super_block* i_sb; } ;
struct TYPE_2__ {int file_count; int folder_count; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct super_block*) ;

void FUNC_6(struct inode *VAR_0)
{
 struct super_block *VAR_1 = VAR_0->i_sb;

 if (FUNC_1(VAR_0->i_mode)) {
  FUNC_0(VAR_1)->folder_count--;
  FUNC_5(VAR_1);
  return;
 }
 FUNC_0(VAR_1)->file_count--;
 if (FUNC_3(VAR_0->i_mode)) {
  if (!VAR_0->i_nlink) {
   VAR_0->i_size = 0;
   FUNC_4(VAR_0);
  }
 } else if (FUNC_2(VAR_0->i_mode)) {
  VAR_0->i_size = 0;
  FUNC_4(VAR_0);
 }
 FUNC_5(VAR_1);
}
