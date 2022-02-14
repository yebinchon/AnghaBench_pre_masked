
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct omfs_inode {int i_sibling; } ;
struct inode {int i_sb; int * b_data; } ;
struct TYPE_2__ {char* name; int len; } ;
struct dentry {TYPE_1__ d_name; int d_parent; } ;
struct buffer_head {int i_sb; int * b_data; } ;
typedef int __be64 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct inode*) ;
 struct inode* FUNC_4 (int ) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 struct inode* FUNC_8 (int ,int ) ;
 struct inode* FUNC_9 (struct inode*,char const*,int,int*) ;
 struct inode* FUNC_10 (int ,int ) ;
 struct inode* FUNC_11 (struct inode*,int ,char const*,int,int *) ;

__attribute__((used)) static int FUNC_12(struct dentry *VAR_1)
{
 struct inode *VAR_2 = FUNC_4(VAR_1->d_parent);
 struct inode *VAR_3;
 const char *VAR_4 = VAR_1->d_name.name;
 int VAR_5 = VAR_1->d_name.len;
 struct omfs_inode *VAR_6;
 struct buffer_head *VAR_7, *VAR_8;
 __be64 *VAR_9, VAR_10;
 u64 VAR_11, VAR_12;
 int VAR_13;
 int VAR_14 = -VAR_0;


 VAR_7 = FUNC_9(VAR_2, VAR_4, VAR_5, &VAR_13);
 if (!VAR_7)
  goto out;

 VAR_9 = (__be64 *) &VAR_7->b_data[VAR_13];
 VAR_11 = FUNC_2(*VAR_9);

 VAR_8 = FUNC_11(VAR_2, VAR_11, VAR_4, VAR_5, &VAR_12);
 if (FUNC_0(VAR_8)) {
  VAR_14 = FUNC_1(VAR_8);
  goto out_free_bh;
 }

 VAR_6 = (struct omfs_inode *) VAR_8->b_data;
 VAR_10 = VAR_6->i_sibling;
 FUNC_3(VAR_8);

 if (VAR_12 != ~0) {

  FUNC_3(VAR_7);
  VAR_7 = FUNC_8(VAR_2->i_sb, VAR_12);
  if (!VAR_7)
   goto out;

  VAR_6 = (struct omfs_inode *) VAR_7->b_data;
  VAR_9 = &VAR_6->i_sibling;
 }

 *VAR_9 = VAR_10;
 FUNC_6(VAR_7);

 if (VAR_12 != ~0) {
  VAR_3 = FUNC_10(VAR_2->i_sb, VAR_12);
  if (!FUNC_0(VAR_3)) {
   FUNC_7(VAR_3);
   FUNC_5(VAR_3);
  }
 }

 VAR_14 = 0;
out_free_bh:
 FUNC_3(VAR_7);
out:
 return VAR_14;
}
