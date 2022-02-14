
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_dir_entry {char const* data; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;
struct delayed_call {int dummy; } ;


 int VAR_0 ;
 char const* FUNC_0 (int ) ;
 struct proc_dir_entry* FUNC_1 (struct inode*) ;
 int VAR_1 ;
 int FUNC_2 (struct delayed_call*,int ,struct proc_dir_entry*) ;
 int FUNC_3 (struct proc_dir_entry*) ;

__attribute__((used)) static const char *FUNC_4(struct dentry *VAR_2,
     struct inode *VAR_3,
     struct delayed_call *VAR_4)
{
 struct proc_dir_entry *VAR_5 = FUNC_1(VAR_3);
 if (!FUNC_3(VAR_5))
  return FUNC_0(-VAR_0);
 FUNC_2(VAR_4, VAR_1, VAR_5);
 return VAR_5->data;
}
