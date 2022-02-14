
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_root {int cno; } ;
struct nilfs_fid {int parent_gen; int parent_ino; int gen; int ino; int cno; } ;
struct inode {int i_generation; int i_ino; } ;
typedef int __u32 ;
struct TYPE_2__ {struct nilfs_root* i_root; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_0 (struct inode*) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_5, __u32 *VAR_6, int *VAR_7,
      struct inode *VAR_8)
{
 struct nilfs_fid *VAR_9 = (struct nilfs_fid *)VAR_6;
 struct nilfs_root *VAR_10 = FUNC_0(VAR_5)->i_root;
 int VAR_11;

 if (VAR_8 && *VAR_7 < VAR_3) {
  *VAR_7 = VAR_3;
  return VAR_0;
 }
 if (*VAR_7 < VAR_4) {
  *VAR_7 = VAR_4;
  return VAR_0;
 }

 VAR_9->cno = VAR_10->cno;
 VAR_9->ino = VAR_5->i_ino;
 VAR_9->gen = VAR_5->i_generation;

 if (VAR_8) {
  VAR_9->parent_ino = VAR_8->i_ino;
  VAR_9->parent_gen = VAR_8->i_generation;
  VAR_11 = VAR_2;
  *VAR_7 = VAR_3;
 } else {
  VAR_11 = VAR_1;
  *VAR_7 = VAR_4;
 }

 return VAR_11;
}
