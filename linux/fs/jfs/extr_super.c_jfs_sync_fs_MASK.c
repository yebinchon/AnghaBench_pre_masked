
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct jfs_log {int dummy; } ;
struct TYPE_2__ {struct jfs_log* log; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*,int) ;
 int FUNC_2 (struct jfs_log*,int) ;
 int FUNC_3 (struct jfs_log*,int ) ;

__attribute__((used)) static int FUNC_4(struct super_block *VAR_0, int VAR_1)
{
 struct jfs_log *VAR_2 = FUNC_0(VAR_0)->log;


 if (VAR_2) {




  FUNC_1(VAR_0, -1);
  FUNC_2(VAR_2, VAR_1);
  FUNC_3(VAR_2, 0);
 }

 return 0;
}
