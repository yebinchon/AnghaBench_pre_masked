
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {TYPE_1__* s_qcop; } ;
struct TYPE_2__ {int (* quota_off ) (struct super_block*,int) ;int (* quota_disable ) (struct super_block*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct super_block*,int ) ;
 int FUNC_2 (struct super_block*,int) ;

__attribute__((used)) static int FUNC_3(struct super_block *VAR_1, int VAR_2)
{
 if (!VAR_1->s_qcop->quota_off && !VAR_1->s_qcop->quota_disable)
  return -VAR_0;
 if (VAR_1->s_qcop->quota_disable)
  return VAR_1->s_qcop->quota_disable(VAR_1, FUNC_0(VAR_2));
 return VAR_1->s_qcop->quota_off(VAR_1, VAR_2);
}
