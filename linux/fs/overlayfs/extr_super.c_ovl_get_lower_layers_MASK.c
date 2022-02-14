
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vfsmount {int mnt_flags; } ;
struct super_block {int dummy; } ;
struct path {int dentry; } ;
struct ovl_sb {int dummy; } ;
struct ovl_layer {int dummy; } ;
struct TYPE_4__ {scalar_t__ xino; } ;
struct ovl_fs {size_t numlower; int numlowerfs; int xino_bits; TYPE_2__ config; int upper_mnt; int * lower_fs; TYPE_1__* lower_layers; } ;
struct inode {int dummy; } ;
struct TYPE_3__ {unsigned int idx; int fsid; int * fs; struct vfsmount* mnt; struct inode* trap; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct vfsmount*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (struct vfsmount*) ;
 struct vfsmount* FUNC_3 (struct path*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct inode*) ;
 void* FUNC_6 (unsigned int,int,int ) ;
 int FUNC_7 (struct ovl_fs*,struct path*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (struct ovl_fs*,char*) ;
 int FUNC_10 (struct super_block*,int ,struct inode**,char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,int) ;

__attribute__((used)) static int FUNC_13(struct super_block *VAR_7, struct ovl_fs *VAR_8,
    struct path *VAR_9, unsigned int VAR_10)
{
 int VAR_11;
 unsigned int VAR_12;

 VAR_11 = -VAR_0;
 VAR_8->lower_layers = FUNC_6(VAR_10, sizeof(struct ovl_layer),
        VAR_1);
 if (VAR_8->lower_layers == ((void*)0))
  goto out;

 VAR_8->lower_fs = FUNC_6(VAR_10, sizeof(struct ovl_sb),
    VAR_1);
 if (VAR_8->lower_fs == ((void*)0))
  goto out;

 for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
  struct vfsmount *VAR_13;
  struct inode *VAR_14;
  int VAR_15;

  VAR_11 = VAR_15 = FUNC_7(VAR_8, &VAR_9[VAR_12]);
  if (VAR_11 < 0)
   goto out;

  VAR_11 = FUNC_10(VAR_7, VAR_9[VAR_12].dentry, &VAR_14, "lowerdir");
  if (VAR_11)
   goto out;

  if (FUNC_8(VAR_9[VAR_12].dentry)) {
   VAR_11 = FUNC_9(VAR_8, "lowerdir");
   if (VAR_11)
    goto out;
  }

  VAR_13 = FUNC_3(&VAR_9[VAR_12]);
  VAR_11 = FUNC_2(VAR_13);
  if (FUNC_1(VAR_13)) {
   FUNC_11("overlayfs: failed to clone lowerpath\n");
   FUNC_5(VAR_14);
   goto out;
  }





  VAR_13->mnt_flags |= VAR_3 | VAR_2;

  VAR_8->lower_layers[VAR_8->numlower].trap = VAR_14;
  VAR_8->lower_layers[VAR_8->numlower].mnt = VAR_13;
  VAR_8->lower_layers[VAR_8->numlower].idx = VAR_12 + 1;
  VAR_8->lower_layers[VAR_8->numlower].fsid = VAR_15;
  if (VAR_15) {
   VAR_8->lower_layers[VAR_8->numlower].fs =
    &VAR_8->lower_fs[VAR_15 - 1];
  }
  VAR_8->numlower++;
 }
 if (!VAR_8->numlowerfs || (VAR_8->numlowerfs == 1 && !VAR_8->upper_mnt)) {
  VAR_8->xino_bits = 0;
  VAR_8->config.xino = VAR_5;
 } else if (VAR_8->config.xino == VAR_6 && !VAR_8->xino_bits) {





  FUNC_0(FUNC_4(VAR_4) > 31);
  VAR_8->xino_bits = FUNC_4(VAR_8->numlowerfs) + 1;
 }

 if (VAR_8->xino_bits) {
  FUNC_12("overlayfs: \"xino\" feature enabled using %d upper inode bits.\n",
   VAR_8->xino_bits);
 }

 VAR_11 = 0;
out:
 return VAR_11;
}
