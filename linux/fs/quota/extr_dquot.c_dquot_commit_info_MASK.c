
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct quota_info {TYPE_1__** ops; } ;
struct TYPE_2__ {int (* write_file_info ) (struct super_block*,int) ;} ;


 struct quota_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*,int) ;

int FUNC_2(struct super_block *VAR_0, int VAR_1)
{
 struct quota_info *VAR_2 = FUNC_0(VAR_0);

 return VAR_2->ops[VAR_1]->write_file_info(VAR_0, VAR_1);
}
