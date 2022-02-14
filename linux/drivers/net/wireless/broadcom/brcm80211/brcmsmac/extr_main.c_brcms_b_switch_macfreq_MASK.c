
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct brcms_hardware {int band; int sih; struct bcma_device* d11core; } ;
struct bcma_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct bcma_device*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_4(struct brcms_hardware *VAR_6, u8 VAR_7)
{
 struct bcma_device *VAR_8 = VAR_6->d11core;

 if ((FUNC_2(VAR_6->sih) == VAR_0) ||
     (FUNC_2(VAR_6->sih) == VAR_1)) {
  if (VAR_7 == VAR_3) {
   FUNC_3(VAR_8, FUNC_1(VAR_5), 0x2082);
   FUNC_3(VAR_8, FUNC_1(VAR_4), 0x8);
  } else if (VAR_7 == VAR_2) {
   FUNC_3(VAR_8, FUNC_1(VAR_5), 0x5341);
   FUNC_3(VAR_8, FUNC_1(VAR_4), 0x8);
  } else {
   FUNC_3(VAR_8, FUNC_1(VAR_5), 0x8889);
   FUNC_3(VAR_8, FUNC_1(VAR_4), 0x8);
  }
 } else if (FUNC_0(VAR_6->band)) {
  if (VAR_7 == VAR_2) {
   FUNC_3(VAR_8, FUNC_1(VAR_5), 0x7CE0);
   FUNC_3(VAR_8, FUNC_1(VAR_4), 0xC);
  } else {
   FUNC_3(VAR_8, FUNC_1(VAR_5), 0xCCCD);
   FUNC_3(VAR_8, FUNC_1(VAR_4), 0xC);
  }
 }
}
