
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned int u64 ;
struct ovl_layer {TYPE_2__* fs; scalar_t__ fsid; } ;
struct kstat {unsigned int ino; int dev; } ;
struct dentry {TYPE_1__* d_inode; TYPE_3__* d_sb; } ;
struct TYPE_7__ {int s_dev; } ;
struct TYPE_6__ {int pseudo_dev; } ;
struct TYPE_5__ {unsigned int i_ino; int i_mode; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 unsigned int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (char*,struct dentry*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct dentry *VAR_0, struct kstat *VAR_1,
      struct ovl_layer *VAR_2)
{
 bool VAR_3 = FUNC_1(VAR_0->d_sb);
 unsigned int VAR_4 = FUNC_2(VAR_0->d_sb);

 if (VAR_3) {





  VAR_1->dev = VAR_0->d_sb->s_dev;
  return 0;
 } else if (VAR_4) {
  unsigned int VAR_5 = 64 - VAR_4;
  if (VAR_1->ino >> VAR_5) {
   FUNC_3("overlayfs: inode number too big (%pd2, ino=%llu, xinobits=%d)\n",
         VAR_0, VAR_1->ino, VAR_4);
  } else {
   if (VAR_2)
    VAR_1->ino |= ((u64)VAR_2->fsid) << VAR_5;

   VAR_1->dev = VAR_0->d_sb->s_dev;
   return 0;
  }
 }


 if (FUNC_0(VAR_0->d_inode->i_mode)) {
  VAR_1->dev = VAR_0->d_sb->s_dev;
  VAR_1->ino = VAR_0->d_inode->i_ino;
 } else if (VAR_2 && VAR_2->fsid) {







  VAR_1->dev = VAR_2->fs->pseudo_dev;
 }

 return 0;
}
