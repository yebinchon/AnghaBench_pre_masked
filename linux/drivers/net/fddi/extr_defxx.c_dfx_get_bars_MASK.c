
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device {int dummy; } ;
typedef int resource_size_t ;
struct TYPE_6__ {unsigned long base_addr; } ;
struct TYPE_4__ {int start; } ;
struct TYPE_5__ {TYPE_1__ resource; } ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 TYPE_3__* FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*) ;
 TYPE_2__* FUNC_8 (struct device*) ;

__attribute__((used)) static void FUNC_9(struct device *VAR_15,
    resource_size_t *VAR_16, resource_size_t *VAR_17)
{
 int VAR_18 = FUNC_2(VAR_15);
 int VAR_19 = FUNC_0(VAR_15);
 int VAR_20 = FUNC_1(VAR_15);
 int VAR_21 = VAR_0 || VAR_20;

 if (VAR_18) {
  int VAR_22 = VAR_21 ? 0 : 1;

  VAR_16[0] = FUNC_5(FUNC_7(VAR_15), VAR_22);
  VAR_17[0] = FUNC_4(FUNC_7(VAR_15), VAR_22);
  VAR_16[2] = VAR_16[1] = 0;
  VAR_17[2] = VAR_17[1] = 0;
 }
 if (VAR_19) {
  unsigned long VAR_23 = FUNC_6(VAR_15)->base_addr;
  resource_size_t VAR_24;
  resource_size_t VAR_25;

  if (VAR_21) {
   VAR_24 = FUNC_3(VAR_23 + VAR_11);
   VAR_24 <<= 8;
   VAR_24 |= FUNC_3(VAR_23 + VAR_10);
   VAR_24 <<= 8;
   VAR_24 |= FUNC_3(VAR_23 + VAR_9);
   VAR_24 <<= 8;
   VAR_16[0] = VAR_24;
   VAR_25 = FUNC_3(VAR_23 + VAR_8);
   VAR_25 <<= 8;
   VAR_25 |= FUNC_3(VAR_23 + VAR_7);
   VAR_25 <<= 8;
   VAR_25 |= FUNC_3(VAR_23 + VAR_6);
   VAR_25 <<= 8;
   VAR_17[0] = ((VAR_25 - VAR_24) | VAR_12) +
         1;
  } else {
   VAR_16[0] = VAR_23;
   VAR_17[0] = VAR_3;
  }
  VAR_16[1] = VAR_23 + VAR_1;
  VAR_17[1] = VAR_2;
  VAR_16[2] = VAR_23 + VAR_4;
  VAR_17[2] = VAR_5;
 }
 if (VAR_20) {
  VAR_16[0] = FUNC_8(VAR_15)->resource.start +
          VAR_14;
  VAR_17[0] = VAR_13;
  VAR_16[2] = VAR_16[1] = 0;
  VAR_17[2] = VAR_17[1] = 0;
 }
}
