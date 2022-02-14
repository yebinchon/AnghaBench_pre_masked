
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dwc3 {scalar_t__ revision; int pullups_connected; int regs; scalar_t__ has_hibernation; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct dwc3 *VAR_10, int VAR_11, int VAR_12)
{
 u32 VAR_13;
 u32 VAR_14 = 500;

 if (FUNC_2(VAR_10->dev))
  return 0;

 VAR_13 = FUNC_0(VAR_10->regs, VAR_0);
 if (VAR_11) {
  if (VAR_10->revision <= VAR_7) {
   VAR_13 &= ~VAR_3;
   VAR_13 |= VAR_4;
  }

  if (VAR_10->revision >= VAR_8)
   VAR_13 &= ~VAR_1;
  VAR_13 |= VAR_2;

  if (VAR_10->has_hibernation)
   VAR_13 |= VAR_1;

  VAR_10->pullups_connected = 1;
 } else {
  VAR_13 &= ~VAR_2;

  if (VAR_10->has_hibernation && !VAR_12)
   VAR_13 &= ~VAR_1;

  VAR_10->pullups_connected = 0;
 }

 FUNC_1(VAR_10->regs, VAR_0, VAR_13);

 do {
  VAR_13 = FUNC_0(VAR_10->regs, VAR_5);
  VAR_13 &= VAR_6;
 } while (--VAR_14 && !(!VAR_11 ^ !VAR_13));

 if (!VAR_14)
  return -VAR_9;

 return 0;
}
