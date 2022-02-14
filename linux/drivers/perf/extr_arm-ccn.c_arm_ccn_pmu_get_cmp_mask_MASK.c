
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {TYPE_1__* cmp_mask; } ;
struct arm_ccn {TYPE_2__ dt; } ;
struct TYPE_3__ {int h; int l; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char const) ;
 int FUNC_2 (char const) ;
 int FUNC_3 (char const) ;

__attribute__((used)) static u64 *FUNC_4(struct arm_ccn *VAR_0, const char *VAR_1)
{
 unsigned long VAR_2;

 if (FUNC_0(!VAR_1 || !VAR_1[0] || !FUNC_2(VAR_1[0]) || !VAR_1[1]))
  return ((void*)0);
 VAR_2 = FUNC_1(VAR_1[0]) ? VAR_1[0] - '0' : 0xa + FUNC_3(VAR_1[0]) - 'a';

 switch (VAR_1[1]) {
 case 'l':
  return &VAR_0->dt.cmp_mask[VAR_2].l;
 case 'h':
  return &VAR_0->dt.cmp_mask[VAR_2].h;
 default:
  return ((void*)0);
 }
}
