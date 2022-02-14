
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_inode {char const* data; int data_len; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;
struct delayed_call {int dummy; } ;


 int VAR_0 ;
 char const* FUNC_0 (int ) ;
 int FUNC_1 (struct inode*) ;
 char const* FUNC_2 (struct inode*,char const*,int ,struct delayed_call*) ;
 struct ubifs_inode* FUNC_3 (struct inode*) ;

__attribute__((used)) static const char *FUNC_4(struct dentry *VAR_1,
         struct inode *VAR_2,
         struct delayed_call *VAR_3)
{
 struct ubifs_inode *VAR_4 = FUNC_3(VAR_2);

 if (!FUNC_1(VAR_2))
  return VAR_4->data;

 if (!VAR_1)
  return FUNC_0(-VAR_0);

 return FUNC_2(VAR_2, VAR_4->data, VAR_4->data_len, VAR_3);
}
