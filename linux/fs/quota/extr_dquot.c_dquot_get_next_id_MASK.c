
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct quota_info {TYPE_1__** ops; } ;
struct kqid {size_t type; } ;
struct TYPE_2__ {int (* get_next_id ) (struct super_block*,struct kqid*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct quota_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*,size_t) ;
 int FUNC_2 (struct super_block*,struct kqid*) ;

int FUNC_3(struct super_block *VAR_2, struct kqid *VAR_3)
{
 struct quota_info *VAR_4 = FUNC_0(VAR_2);

 if (!FUNC_1(VAR_2, VAR_3->type))
  return -VAR_1;
 if (!VAR_4->ops[VAR_3->type]->get_next_id)
  return -VAR_0;
 return VAR_4->ops[VAR_3->type]->get_next_id(VAR_2, VAR_3);
}
