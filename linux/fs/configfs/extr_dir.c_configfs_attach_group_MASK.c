
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct dentry {struct configfs_dirent* d_fsdata; } ;
struct configfs_fragment {int dummy; } ;
struct configfs_dirent {int s_type; } ;
struct config_item {int dummy; } ;
struct TYPE_4__ {int i_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct configfs_dirent*) ;
 int FUNC_1 (struct configfs_dirent*) ;
 int FUNC_2 (struct config_item*,struct config_item*,struct dentry*,struct configfs_fragment*) ;
 int FUNC_3 (struct config_item*) ;
 int FUNC_4 (struct dentry*) ;
 TYPE_1__* FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct dentry*) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int ,struct configfs_fragment*) ;
 int FUNC_10 (struct config_item*) ;

__attribute__((used)) static int FUNC_11(struct config_item *VAR_3,
     struct config_item *VAR_4,
     struct dentry *VAR_5,
     struct configfs_fragment *VAR_6)
{
 int VAR_7;
 struct configfs_dirent *VAR_8;

 VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6);
 if (!VAR_7) {
  VAR_8 = VAR_5->d_fsdata;
  VAR_8->s_type |= VAR_0;
  FUNC_7(FUNC_5(VAR_5), VAR_1);
  FUNC_1(VAR_8);
  VAR_7 = FUNC_9(FUNC_10(VAR_4), VAR_6);
  if (VAR_7) {
   FUNC_3(VAR_4);
   FUNC_5(VAR_5)->i_flags |= VAR_2;
   FUNC_6(VAR_5);
  }
  FUNC_0(VAR_8);
  FUNC_8(FUNC_5(VAR_5));
  if (VAR_7)
   FUNC_4(VAR_5);
 }

 return VAR_7;
}
