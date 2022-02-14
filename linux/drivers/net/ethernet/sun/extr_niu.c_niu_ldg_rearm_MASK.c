
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct niu_ldg {int ldg_num; int timer; } ;
struct niu {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct niu *VAR_1, struct niu_ldg *VAR_2, int VAR_3)
{
 u64 VAR_4 = (u64) VAR_2->timer;

 if (VAR_3)
  VAR_4 |= VAR_0;

 FUNC_1(FUNC_0(VAR_2->ldg_num), VAR_4);
}
