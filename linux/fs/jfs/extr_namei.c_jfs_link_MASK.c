
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tid_t ;
struct inode {void* i_mtime; void* i_ctime; int i_ino; int i_sb; } ;
struct dentry {int dummy; } ;
struct component_name {int dummy; } ;
struct btstack {int dummy; } ;
typedef int ino_t ;
struct TYPE_2__ {int commit_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 void* FUNC_1 (struct inode*) ;
 struct inode* FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*,struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (int ,struct inode*,struct component_name*,int *,struct btstack*) ;
 int FUNC_7 (struct inode*,struct component_name*,int *,struct btstack*,int ) ;
 int FUNC_8 (struct component_name*) ;
 int FUNC_9 (struct component_name*,struct dentry*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (char*,int,...) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ,int,struct inode**,int ) ;
 int FUNC_19 (int ) ;

__attribute__((used)) static int FUNC_20(struct dentry *VAR_3,
      struct inode *VAR_4, struct dentry *VAR_5)
{
 int VAR_6;
 tid_t VAR_7;
 struct inode *VAR_8 = FUNC_2(VAR_3);
 ino_t VAR_9;
 struct component_name VAR_10;
 struct btstack VAR_11;
 struct inode *VAR_12[2];

 FUNC_13("jfs_link: %pd %pd", VAR_3, VAR_5);

 VAR_6 = FUNC_4(VAR_4);
 if (VAR_6)
  goto out;

 VAR_7 = FUNC_17(VAR_8->i_sb, 0);

 FUNC_15(&FUNC_0(VAR_4)->commit_mutex, VAR_1);
 FUNC_15(&FUNC_0(VAR_8)->commit_mutex, VAR_0);




 if ((VAR_6 = FUNC_9(&VAR_10, VAR_5)))
  goto out_tx;

 if ((VAR_6 = FUNC_7(VAR_4, &VAR_10, &VAR_9, &VAR_11, VAR_2)))
  goto free_dname;




 VAR_9 = VAR_8->i_ino;
 if ((VAR_6 = FUNC_6(VAR_7, VAR_4, &VAR_10, &VAR_9, &VAR_11)))
  goto free_dname;


 FUNC_11(VAR_8);
 VAR_8->i_ctime = FUNC_1(VAR_8);
 VAR_4->i_ctime = VAR_4->i_mtime = FUNC_1(VAR_4);
 FUNC_14(VAR_4);
 FUNC_10(VAR_8);

 VAR_12[0] = VAR_8;
 VAR_12[1] = VAR_4;
 VAR_6 = FUNC_18(VAR_7, 2, &VAR_12[0], 0);

 if (VAR_6) {
  FUNC_5(VAR_8);
  FUNC_12(VAR_8);
 } else
  FUNC_3(VAR_5, VAR_8);

      free_dname:
 FUNC_8(&VAR_10);

      out_tx:
 FUNC_19(VAR_7);

 FUNC_16(&FUNC_0(VAR_8)->commit_mutex);
 FUNC_16(&FUNC_0(VAR_4)->commit_mutex);

      out:
 FUNC_13("jfs_link: rc:%d", VAR_6);
 return VAR_6;
}
