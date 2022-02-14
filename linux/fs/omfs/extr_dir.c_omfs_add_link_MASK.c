
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct omfs_inode {void* i_parent; void* i_sibling; scalar_t__ i_name; } ;
struct inode {int i_ctime; int i_ino; int i_sb; } ;
struct TYPE_2__ {char* name; int len; } ;
struct dentry {TYPE_1__ d_name; int d_parent; } ;
struct buffer_head {int * b_data; } ;
typedef void* __be64 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (struct buffer_head*) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct inode*) ;
 struct inode* FUNC_4 (int ) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (scalar_t__,char const*,int) ;
 int FUNC_8 (scalar_t__,int ,scalar_t__) ;
 struct buffer_head* FUNC_9 (int ,int ) ;
 struct buffer_head* FUNC_10 (struct inode*,char const*,int,int*) ;

__attribute__((used)) static int FUNC_11(struct dentry *VAR_2, struct inode *VAR_3)
{
 struct inode *VAR_4 = FUNC_4(VAR_2->d_parent);
 const char *VAR_5 = VAR_2->d_name.name;
 int VAR_6 = VAR_2->d_name.len;
 struct omfs_inode *VAR_7;
 struct buffer_head *VAR_8;
 u64 VAR_9;
 __be64 *VAR_10;
 int VAR_11;


 VAR_8 = FUNC_10(VAR_4, VAR_5, VAR_6, &VAR_11);
 if (!VAR_8)
  goto out;

 VAR_10 = (__be64 *) &VAR_8->b_data[VAR_11];
 VAR_9 = FUNC_0(*VAR_10);
 *VAR_10 = FUNC_2(VAR_3->i_ino);
 FUNC_5(VAR_8);
 FUNC_1(VAR_8);


 VAR_8 = FUNC_9(VAR_4->i_sb, VAR_3->i_ino);
 if (!VAR_8)
  goto out;

 VAR_7 = (struct omfs_inode *) VAR_8->b_data;
 FUNC_7(VAR_7->i_name, VAR_5, VAR_6);
 FUNC_8(VAR_7->i_name + VAR_6, 0, VAR_1 - VAR_6);
 VAR_7->i_sibling = FUNC_2(VAR_9);
 VAR_7->i_parent = FUNC_2(VAR_4->i_ino);
 FUNC_5(VAR_8);
 FUNC_1(VAR_8);

 VAR_4->i_ctime = FUNC_3(VAR_4);


 FUNC_6(VAR_4);
 FUNC_6(VAR_3);
 return 0;
out:
 return -VAR_0;
}
