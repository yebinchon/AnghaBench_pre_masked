
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct dentry {int dummy; } ;
struct debugfs_devm_entry {int (* read ) (struct seq_file*,void*) ;struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dentry* FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int VAR_3 ;
 struct dentry* FUNC_2 (char const*,int ,struct dentry*,struct debugfs_devm_entry*,int *) ;
 int VAR_4 ;
 struct debugfs_devm_entry* FUNC_3 (struct device*,int,int ) ;

struct dentry *FUNC_4(struct device *VAR_5, const char *VAR_6,
        struct dentry *VAR_7,
        int (*VAR_8)(struct seq_file *VAR_9,
         void *VAR_10))
{
 struct debugfs_devm_entry *VAR_11;

 if (FUNC_1(VAR_7))
  return FUNC_0(-VAR_0);

 VAR_11 = FUNC_3(VAR_5, sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return FUNC_0(-VAR_1);

 VAR_11->read = VAR_8;
 VAR_11->dev = VAR_5;

 return FUNC_2(VAR_6, VAR_3, VAR_7, VAR_11,
       &VAR_4);
}
