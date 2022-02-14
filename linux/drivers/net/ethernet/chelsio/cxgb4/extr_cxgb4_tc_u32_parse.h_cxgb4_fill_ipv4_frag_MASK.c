
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {int frag; } ;
struct TYPE_4__ {int frag; } ;
struct ch_filter_specification {TYPE_1__ mask; TYPE_2__ val; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline int FUNC_1(struct ch_filter_specification *VAR_1,
           u32 VAR_2, u32 VAR_3)
{
 u32 VAR_4;
 u8 VAR_5;

 VAR_5 = (FUNC_0(VAR_2) >> 13) & 0x00000007;
 VAR_4 = FUNC_0(VAR_3) & 0x0000FFFF;

 if (VAR_5 == 0x1 && VAR_4 != 0x3FFF) {
  VAR_1->val.frag = 1;
  VAR_1->mask.frag = 1;
 } else if (VAR_5 == 0x2 && VAR_4 != 0x3FFF) {
  VAR_1->val.frag = 0;
  VAR_1->mask.frag = 1;
 } else {
  return -VAR_0;
 }

 return 0;
}
