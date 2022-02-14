
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct minix_inode {scalar_t__ i_mode; scalar_t__ i_nlinks; } ;
struct minix2_inode {scalar_t__ i_mode; scalar_t__ i_nlinks; } ;
struct inode {int i_ino; int i_sb; } ;
struct buffer_head {int dummy; } ;


 scalar_t__ FUNC_0 (struct inode*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 struct minix_inode* FUNC_3 (int ,int ,struct buffer_head**) ;
 struct minix2_inode* FUNC_4 (int ,int ,struct buffer_head**) ;

__attribute__((used)) static void FUNC_5(struct inode *VAR_1)
{
 struct buffer_head *VAR_2 = ((void*)0);

 if (FUNC_0(VAR_1) == VAR_0) {
  struct minix_inode *VAR_3;
  VAR_3 = FUNC_3(VAR_1->i_sb, VAR_1->i_ino, &VAR_2);
  if (VAR_3) {
   VAR_3->i_nlinks = 0;
   VAR_3->i_mode = 0;
  }
 } else {
  struct minix2_inode *VAR_4;
  VAR_4 = FUNC_4(VAR_1->i_sb, VAR_1->i_ino, &VAR_2);
  if (VAR_4) {
   VAR_4->i_nlinks = 0;
   VAR_4->i_mode = 0;
  }
 }
 if (VAR_2) {
  FUNC_2(VAR_2);
  FUNC_1 (VAR_2);
 }
}
