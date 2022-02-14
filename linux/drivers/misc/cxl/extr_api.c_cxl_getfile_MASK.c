
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct inode {void* private_data; } ;
struct file_operations {scalar_t__ owner; } ;
struct file {void* private_data; } ;
struct TYPE_5__ {int mnt_sb; } ;


 int VAR_0 ;
 struct inode* FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct inode* FUNC_3 (int ) ;
 struct inode* FUNC_4 (struct inode*,TYPE_1__*,char const*,int,struct file_operations const*) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (int *,TYPE_1__**,int *) ;
 int FUNC_9 (TYPE_1__**,int *) ;
 int FUNC_10 (scalar_t__) ;

__attribute__((used)) static struct file *FUNC_11(const char *VAR_6,
    const struct file_operations *VAR_7,
    void *VAR_8, int VAR_9)
{
 struct file *VAR_10;
 struct inode *VAR_11;
 int VAR_12;



 if (VAR_7->owner && !FUNC_10(VAR_7->owner))
  return FUNC_1(-VAR_0);

 VAR_12 = FUNC_8(&VAR_4, &VAR_5, &VAR_3);
 if (VAR_12 < 0) {
  FUNC_7("Cannot mount cxl pseudo filesystem: %d\n", VAR_12);
  VAR_10 = FUNC_1(VAR_12);
  goto err_module;
 }

 VAR_11 = FUNC_3(VAR_5->mnt_sb);
 if (FUNC_2(VAR_11)) {
  VAR_10 = FUNC_0(VAR_11);
  goto err_fs;
 }

 VAR_10 = FUNC_4(VAR_11, VAR_5, VAR_6,
     VAR_9 & (VAR_1 | VAR_2), VAR_7);
 if (FUNC_2(VAR_10))
  goto err_inode;

 VAR_10->private_data = VAR_8;

 return VAR_10;

err_inode:
 FUNC_5(VAR_11);
err_fs:
 FUNC_9(&VAR_5, &VAR_3);
err_module:
 FUNC_6(VAR_7->owner);
 return VAR_10;
}
