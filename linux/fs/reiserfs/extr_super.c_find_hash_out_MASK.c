
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_root; } ;
struct reiserfs_dir_entry {int de_entry_num; int de_namelen; int de_name; struct reiserfs_de_head* de_deh; } ;
struct reiserfs_de_head {int dummy; } ;
struct inode {int dummy; } ;
struct cpu_key {int dummy; } ;
typedef scalar_t__ __u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 struct inode* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct reiserfs_de_head*) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (struct cpu_key*,struct inode*,int ,int ,int) ;
 int VAR_9 ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (struct super_block*,char*) ;
 scalar_t__ FUNC_9 (struct super_block*) ;
 int FUNC_10 (struct super_block*,char*,char*) ;
 int FUNC_11 (struct super_block*,struct cpu_key*,int *,struct reiserfs_dir_entry*) ;
 int FUNC_12 (struct reiserfs_dir_entry*) ;
 scalar_t__ FUNC_13 (int ,int ) ;

__attribute__((used)) static __u32 FUNC_14(struct super_block *VAR_10)
{
 int VAR_11;
 struct inode *VAR_12;
 struct cpu_key VAR_13;
 FUNC_1(VAR_9);
 struct reiserfs_dir_entry VAR_14;
 struct reiserfs_de_head *VAR_15;
 __u32 VAR_16 = VAR_0;
 __u32 VAR_17, VAR_18, VAR_19, VAR_20;

 VAR_12 = FUNC_2(VAR_10->s_root);

 FUNC_5(&VAR_13, VAR_12, ~0, VAR_6, 3);
 VAR_11 = FUNC_11(VAR_10, &VAR_13, &VAR_9, &VAR_14);
 if (VAR_11 == VAR_2) {
  FUNC_6(&VAR_9);
  return VAR_7;
 }
 if (VAR_11 == VAR_3)
  VAR_14.de_entry_num--;

 FUNC_12(&VAR_14);
 VAR_15 = VAR_14.de_deh + VAR_14.de_entry_num;

 if (FUNC_3(VAR_15) == VAR_1) {

  if (FUNC_9(VAR_10))
   VAR_16 = VAR_8;
  FUNC_8(VAR_10, "FS seems to be empty, autodetect is using the default hash\n");
  goto out;
 }

 VAR_17 = FUNC_0(FUNC_3(VAR_15));
 VAR_19 = FUNC_0(FUNC_7(VAR_14.de_name, VAR_14.de_namelen));
 VAR_18 = FUNC_0(FUNC_4(VAR_14.de_name, VAR_14.de_namelen));
 VAR_20 = FUNC_0(FUNC_13(VAR_14.de_name, VAR_14.de_namelen));

 if ((VAR_18 == VAR_19 && VAR_17 == VAR_19) ||
     (VAR_18 == VAR_20 && VAR_17 == VAR_20) ||
     (VAR_19 == VAR_20 && VAR_17 == VAR_20)) {
  FUNC_10(VAR_10, "reiserfs-2506",
     "Unable to automatically detect hash "
     "function. Please mount with -o "
     "hash={tea,rupasov,r5}");
  VAR_16 = VAR_7;
  goto out;
 }

 if (VAR_17 == VAR_20)
  VAR_16 = VAR_8;
 else if (VAR_17 == VAR_18)
  VAR_16 = VAR_5;
 else if (VAR_17 == VAR_19)
  VAR_16 = VAR_4;
 else {
  FUNC_10(VAR_10, "reiserfs-2506",
     "Unrecognised hash function");
  VAR_16 = VAR_7;
 }
out:
 FUNC_6(&VAR_9);
 return VAR_16;
}
