
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int umode_t ;
struct inode {struct efivar_entry* i_private; int i_sb; } ;
struct TYPE_4__ {char* VariableName; int VendorGuid; } ;
struct efivar_entry {TYPE_2__ var; } ;
struct TYPE_3__ {char* name; int len; } ;
struct dentry {TYPE_1__ d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dentry*,struct inode*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct efivar_entry*,int *) ;
 scalar_t__ FUNC_3 (int ,char*,int) ;
 struct inode* FUNC_4 (int ,struct inode*,int ,int ,int) ;
 int VAR_4 ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char*,int *) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct efivar_entry*) ;
 struct efivar_entry* FUNC_9 (int,int ) ;

__attribute__((used)) static int FUNC_10(struct inode *VAR_5, struct dentry *VAR_6,
     umode_t VAR_7, bool VAR_8)
{
 struct inode *VAR_9 = ((void*)0);
 struct efivar_entry *VAR_10;
 int VAR_11, VAR_12 = 0, VAR_13 = 0;
 bool VAR_14 = 0;

 if (!FUNC_5(VAR_6->d_name.name, VAR_6->d_name.len))
  return -VAR_1;

 VAR_10 = FUNC_9(sizeof(struct efivar_entry), VAR_3);
 if (!VAR_10)
  return -VAR_2;


 VAR_11 = VAR_6->d_name.len - VAR_0 - 1;

 VAR_13 = FUNC_6(VAR_6->d_name.name + VAR_11 + 1, &VAR_10->var.VendorGuid);
 if (VAR_13)
  goto out;

 if (FUNC_3(VAR_10->var.VendorGuid,
      VAR_6->d_name.name, VAR_11))
  VAR_14 = 1;

 VAR_9 = FUNC_4(VAR_5->i_sb, VAR_5, VAR_7, 0, VAR_14);
 if (!VAR_9) {
  VAR_13 = -VAR_2;
  goto out;
 }

 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++)
  VAR_10->var.VariableName[VAR_12] = VAR_6->d_name.name[VAR_12];

 VAR_10->var.VariableName[VAR_12] = '\0';

 VAR_9->i_private = VAR_10;

 VAR_13 = FUNC_2(VAR_10, &VAR_4);
 if (VAR_13)
  goto out;

 FUNC_0(VAR_6, VAR_9);
 FUNC_1(VAR_6);
out:
 if (VAR_13) {
  FUNC_8(VAR_10);
  if (VAR_9)
   FUNC_7(VAR_9);
 }
 return VAR_13;
}
