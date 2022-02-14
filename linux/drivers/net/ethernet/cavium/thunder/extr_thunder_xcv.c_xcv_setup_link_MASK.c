
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {scalar_t__ reg_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 TYPE_1__* VAR_7 ;

void FUNC_3(bool VAR_8, int VAR_9)
{
 u64 VAR_10;
 int VAR_11 = 2;

 if (!VAR_7) {
  FUNC_0("XCV init not done, probe may have failed\n");
  return;
 }

 if (VAR_9 == 100)
  VAR_11 = 1;
 else if (VAR_9 == 10)
  VAR_11 = 0;

 if (VAR_8) {

  VAR_10 = FUNC_1(VAR_7->reg_base + VAR_5);
  VAR_10 &= ~0x03;
  VAR_10 |= VAR_11;
  FUNC_2(VAR_10, VAR_7->reg_base + VAR_5);


  VAR_10 = FUNC_1(VAR_7->reg_base + VAR_6);
  VAR_10 |= VAR_2 | VAR_0;
  FUNC_2(VAR_10, VAR_7->reg_base + VAR_6);


  VAR_10 = FUNC_1(VAR_7->reg_base + VAR_6);
  VAR_10 |= VAR_3 | VAR_1;
  FUNC_2(VAR_10, VAR_7->reg_base + VAR_6);


  FUNC_2(0x01, VAR_7->reg_base + VAR_4);
 } else {

  VAR_10 = FUNC_1(VAR_7->reg_base + VAR_6);
  VAR_10 &= ~(VAR_3 | VAR_1);
  FUNC_2(VAR_10, VAR_7->reg_base + VAR_6);
  FUNC_1(VAR_7->reg_base + VAR_6);
 }
}
