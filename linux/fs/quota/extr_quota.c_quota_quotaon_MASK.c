
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {TYPE_1__* s_qcop; } ;
struct path {int dummy; } ;
typedef int qid_t ;
struct TYPE_2__ {int (* quota_on ) (struct super_block*,int,int ,struct path const*) ;int (* quota_enable ) (struct super_block*,int ) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct path const*) ;
 int FUNC_1 (struct path const*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct super_block*,int ) ;
 int FUNC_4 (struct super_block*,int,int ,struct path const*) ;

__attribute__((used)) static int FUNC_5(struct super_block *VAR_1, int VAR_2, qid_t VAR_3,
           const struct path *VAR_4)
{
 if (!VAR_1->s_qcop->quota_on && !VAR_1->s_qcop->quota_enable)
  return -VAR_0;
 if (VAR_1->s_qcop->quota_enable)
  return VAR_1->s_qcop->quota_enable(VAR_1, FUNC_2(VAR_2));
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);
 return VAR_1->s_qcop->quota_on(VAR_1, VAR_2, VAR_3, VAR_4);
}
