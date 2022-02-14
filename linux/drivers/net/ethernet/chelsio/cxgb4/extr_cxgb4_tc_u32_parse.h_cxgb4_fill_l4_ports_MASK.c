
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int fport; int lport; } ;
struct TYPE_3__ {int fport; int lport; } ;
struct ch_filter_specification {TYPE_2__ mask; TYPE_1__ val; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(struct ch_filter_specification *VAR_0,
          u32 VAR_1, u32 VAR_2)
{
 VAR_0->val.fport = FUNC_0(VAR_1) >> 16;
 VAR_0->mask.fport = FUNC_0(VAR_2) >> 16;
 VAR_0->val.lport = FUNC_0(VAR_1) & 0x0000FFFF;
 VAR_0->mask.lport = FUNC_0(VAR_2) & 0x0000FFFF;

 return 0;
}
