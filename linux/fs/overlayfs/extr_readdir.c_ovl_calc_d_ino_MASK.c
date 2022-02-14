
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ovl_readdir_data {TYPE_1__* dentry; int is_upper; } ;
struct ovl_cache_entry {char* name; int len; } ;
struct TYPE_2__ {int d_sb; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char*,char*) ;

__attribute__((used)) static bool FUNC_4(struct ovl_readdir_data *VAR_1,
      struct ovl_cache_entry *VAR_2)
{

 if (!VAR_1->dentry)
  return 0;


 if (FUNC_2(VAR_1->dentry->d_sb))
  return 1;


 if (FUNC_3(VAR_2->name, "..") == 0)
  return 1;


 if (!VAR_1->is_upper)
  return 0;





 if ((VAR_2->name[0] == '.' && VAR_2->len == 1) ||
     FUNC_1(VAR_0, FUNC_0(VAR_1->dentry)))
  return 1;

 return 0;
}
