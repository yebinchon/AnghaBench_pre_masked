
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs_context {int source; struct ffs_sb_fill_data* fs_private; } ;
struct ffs_sb_fill_data {struct ffs_data* ffs_data; int no_disconnect; int perms; } ;
struct ffs_data {void* private_data; int dev_name; int no_disconnect; int file_perms; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int ) ;
 struct ffs_data* FUNC_4 (int ) ;
 int FUNC_5 (struct ffs_data*) ;
 int VAR_2 ;
 int FUNC_6 (struct fs_context*,int ) ;
 int FUNC_7 (struct fs_context*,char*) ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct fs_context *VAR_3)
{
 struct ffs_sb_fill_data *VAR_4 = VAR_3->fs_private;
 void *VAR_5;
 struct ffs_data *VAR_6;

 FUNC_0();

 if (!VAR_3->source)
  return FUNC_7(VAR_3, "No source specified");

 VAR_6 = FUNC_4(VAR_3->source);
 if (FUNC_9(!VAR_6))
  return -VAR_0;
 VAR_6->file_perms = VAR_4->perms;
 VAR_6->no_disconnect = VAR_4->no_disconnect;

 VAR_6->dev_name = FUNC_8(VAR_3->source, VAR_1);
 if (FUNC_9(!VAR_6->dev_name)) {
  FUNC_5(VAR_6);
  return -VAR_0;
 }

 VAR_5 = FUNC_3(VAR_6->dev_name);
 if (FUNC_1(VAR_5)) {
  FUNC_5(VAR_6);
  return FUNC_2(VAR_5);
 }

 VAR_6->private_data = VAR_5;
 VAR_4->ffs_data = VAR_6;
 return FUNC_6(VAR_3, VAR_2);
}
