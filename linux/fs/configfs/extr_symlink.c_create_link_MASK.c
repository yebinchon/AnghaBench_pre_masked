
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {int dummy; } ;
struct configfs_dirent {int s_type; int s_links; } ;
struct config_item {TYPE_1__* ci_dentry; } ;
struct TYPE_2__ {struct configfs_dirent* d_fsdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct configfs_dirent*,TYPE_1__*,struct dentry*,char*) ;
 int FUNC_1 (struct configfs_dirent*) ;
 int VAR_5 ;
 int FUNC_2 (struct configfs_dirent*) ;
 int FUNC_3 (struct config_item*,struct config_item*,char*) ;
 int FUNC_4 (struct configfs_dirent*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct config_item *VAR_6,
         struct config_item *VAR_7,
         struct dentry *VAR_8)
{
 struct configfs_dirent *VAR_9 = VAR_7->ci_dentry->d_fsdata;
 char *VAR_10;
 int VAR_11;

 if (!FUNC_1(VAR_9))
  return -VAR_1;

 VAR_10 = FUNC_6(VAR_4, VAR_3);
 if (!VAR_10)
  return -VAR_2;

 FUNC_2(VAR_9);
 FUNC_7(&VAR_5);
 if (VAR_9->s_type & VAR_0) {
  FUNC_8(&VAR_5);
  FUNC_4(VAR_9);
  FUNC_5(VAR_10);
  return -VAR_1;
 }
 VAR_9->s_links++;
 FUNC_8(&VAR_5);
 VAR_11 = FUNC_3(VAR_6, VAR_7, VAR_10);
 if (!VAR_11)
  VAR_11 = FUNC_0(VAR_9, VAR_6->ci_dentry,
        VAR_8, VAR_10);
 if (VAR_11) {
  FUNC_7(&VAR_5);
  VAR_9->s_links--;
  FUNC_8(&VAR_5);
  FUNC_4(VAR_9);
  FUNC_5(VAR_10);
 }
 return VAR_11;
}
