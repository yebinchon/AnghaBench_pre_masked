
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_quota_types; TYPE_1__* s_qcop; } ;
struct TYPE_2__ {int (* quota_sync ) (struct super_block*,int) ;} ;


 int FUNC_0 (struct super_block*,int) ;

__attribute__((used)) static void FUNC_1(struct super_block *VAR_0, void *VAR_1)
{
 int VAR_2 = *(int *)VAR_1;

 if (VAR_0->s_qcop && VAR_0->s_qcop->quota_sync &&
     (VAR_0->s_quota_types & (1 << VAR_2)))
  VAR_0->s_qcop->quota_sync(VAR_0, VAR_2);
}
