
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct dentry {int dummy; } ;
struct configfs_fragment {int dummy; } ;
struct config_item {int dummy; } ;
struct TYPE_4__ {int i_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct config_item*,struct dentry*,struct configfs_fragment*) ;
 int FUNC_1 (struct config_item*) ;
 int FUNC_2 (struct dentry*) ;
 TYPE_1__* FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct config_item*) ;

__attribute__((used)) static int FUNC_8(struct config_item *VAR_1,
    struct config_item *VAR_2,
    struct dentry *VAR_3,
    struct configfs_fragment *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);
 if (!VAR_5) {
  VAR_5 = FUNC_7(VAR_2);
  if (VAR_5) {





   FUNC_5(FUNC_3(VAR_3));
   FUNC_1(VAR_2);
   FUNC_3(VAR_3)->i_flags |= VAR_0;
   FUNC_4(VAR_3);
   FUNC_6(FUNC_3(VAR_3));
   FUNC_2(VAR_3);
  }
 }

 return VAR_5;
}
