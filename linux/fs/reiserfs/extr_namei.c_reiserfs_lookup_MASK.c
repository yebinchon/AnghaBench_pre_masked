
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct reiserfs_dir_entry {int de_dir_id; int * de_gen_number_bit_string; } ;
struct inode {TYPE_2__* i_sb; int i_flags; } ;
struct TYPE_5__ {scalar_t__ len; int name; } ;
struct dentry {TYPE_1__ d_name; } ;
struct cpu_key {int dummy; } ;
struct TYPE_6__ {int s_blocksize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dentry* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_5 ;
 struct dentry* FUNC_5 (struct inode*,struct dentry*) ;
 int VAR_6 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct inode*,int ,scalar_t__,int *,struct reiserfs_dir_entry*) ;
 struct inode* FUNC_8 (TYPE_2__*,struct cpu_key*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;

__attribute__((used)) static struct dentry *FUNC_11(struct inode *VAR_7, struct dentry *VAR_8,
          unsigned int VAR_9)
{
 int VAR_10;
 struct inode *VAR_11 = ((void*)0);
 struct reiserfs_dir_entry VAR_12;
 FUNC_1(VAR_6);

 if (FUNC_4(VAR_7->i_sb->s_blocksize) < VAR_8->d_name.len)
  return FUNC_0(-VAR_2);

 FUNC_9(VAR_7->i_sb);

 VAR_12.de_gen_number_bit_string = ((void*)0);
 VAR_10 =
     FUNC_7(VAR_7, VAR_8->d_name.name, VAR_8->d_name.len,
    &VAR_6, &VAR_12);
 FUNC_6(&VAR_6);
 if (VAR_10 == VAR_4) {
  VAR_11 = FUNC_8(VAR_7->i_sb,
          (struct cpu_key *)&VAR_12.de_dir_id);
  if (!VAR_11 || FUNC_2(VAR_11)) {
   FUNC_10(VAR_7->i_sb);
   return FUNC_0(-VAR_0);
  }





  if (FUNC_3(VAR_7))
   VAR_11->i_flags |= VAR_5;
 }
 FUNC_10(VAR_7->i_sb);
 if (VAR_10 == VAR_3) {
  return FUNC_0(-VAR_1);
 }

 return FUNC_5(VAR_11, VAR_8);
}
