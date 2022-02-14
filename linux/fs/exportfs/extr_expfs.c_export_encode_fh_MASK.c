
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_generation; int i_ino; } ;
struct TYPE_2__ {int parent_gen; int parent_ino; int gen; int ino; } ;
struct fid {TYPE_1__ i32; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct inode *VAR_3, struct fid *VAR_4,
  int *VAR_5, struct inode *VAR_6)
{
 int VAR_7 = *VAR_5;
 int VAR_8 = VAR_0;

 if (VAR_6 && (VAR_7 < 4)) {
  *VAR_5 = 4;
  return VAR_2;
 } else if (VAR_7 < 2) {
  *VAR_5 = 2;
  return VAR_2;
 }

 VAR_7 = 2;
 VAR_4->i32.ino = VAR_3->i_ino;
 VAR_4->i32.gen = VAR_3->i_generation;
 if (VAR_6) {
  VAR_4->i32.parent_ino = VAR_6->i_ino;
  VAR_4->i32.parent_gen = VAR_6->i_generation;
  VAR_7 = 4;
  VAR_8 = VAR_1;
 }
 *VAR_5 = VAR_7;
 return VAR_8;
}
