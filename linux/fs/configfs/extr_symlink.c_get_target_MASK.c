
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct path {TYPE_1__* dentry; } ;
struct config_item {int dummy; } ;
struct TYPE_2__ {struct super_block* d_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct config_item* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char const*,int,struct path*) ;
 int FUNC_2 (struct path*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_4, struct path *VAR_5,
        struct config_item **VAR_6, struct super_block *VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_1(VAR_4, VAR_3|VAR_2, VAR_5);
 if (!VAR_8) {
  if (VAR_5->dentry->d_sb == VAR_7) {
   *VAR_6 = FUNC_0(VAR_5->dentry);
   if (!*VAR_6) {
    VAR_8 = -VAR_0;
    FUNC_2(VAR_5);
   }
  } else {
   VAR_8 = -VAR_1;
   FUNC_2(VAR_5);
  }
 }

 return VAR_8;
}
