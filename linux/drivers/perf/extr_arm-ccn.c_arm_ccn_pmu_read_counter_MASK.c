
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {scalar_t__ base; } ;
struct arm_ccn {TYPE_1__ dt; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static u64 FUNC_4(struct arm_ccn *VAR_6, int VAR_7)
{
 u64 VAR_8;

 if (VAR_7 == VAR_5) {




  FUNC_3(0x1, VAR_6->dt.base + VAR_4);
  while (!(FUNC_1(VAR_6->dt.base + VAR_2) & 0x1))
   ;
  FUNC_3(0x1, VAR_6->dt.base + VAR_3);
  VAR_8 = FUNC_1(VAR_6->dt.base + VAR_1 + 4) & 0xff;
  VAR_8 <<= 32;
  VAR_8 |= FUNC_1(VAR_6->dt.base + VAR_1);

 } else {
  VAR_8 = FUNC_1(VAR_6->dt.base + FUNC_0(VAR_7));
 }

 return VAR_8;
}
