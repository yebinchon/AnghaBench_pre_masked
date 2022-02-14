
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct quota_info {int dqio_sem; } ;
struct kqid {int type; } ;
struct TYPE_2__ {int dqi_priv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct kqid*) ;
 TYPE_1__* FUNC_2 (struct super_block*,int ) ;
 struct quota_info* FUNC_3 (struct super_block*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct super_block *VAR_0, struct kqid *VAR_1)
{
 struct quota_info *VAR_2 = FUNC_3(VAR_0);
 int VAR_3;

 FUNC_0(&VAR_2->dqio_sem);
 VAR_3 = FUNC_1(FUNC_2(VAR_0, VAR_1->type)->dqi_priv, VAR_1);
 FUNC_4(&VAR_2->dqio_sem);
 return VAR_3;
}
