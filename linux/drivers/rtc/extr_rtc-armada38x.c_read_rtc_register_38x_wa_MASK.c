
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct armada38x_rtc {TYPE_1__* val_to_freq; scalar_t__ regs; } ;
struct TYPE_2__ {scalar_t__ value; int freq; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static u32 FUNC_1(struct armada38x_rtc *VAR_1, u8 VAR_2)
{
 int VAR_3, VAR_4 = 0, VAR_5 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_1->val_to_freq[VAR_3].value = FUNC_0(VAR_1->regs + VAR_2);
  VAR_1->val_to_freq[VAR_3].freq = 0;
 }

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  int VAR_6 = 0;
  u32 VAR_7 = VAR_1->val_to_freq[VAR_3].value;

  while (VAR_1->val_to_freq[VAR_6].freq) {
   if (VAR_1->val_to_freq[VAR_6].value == VAR_7) {
    VAR_1->val_to_freq[VAR_6].freq++;
    break;
   }
   VAR_6++;
  }

  if (!VAR_1->val_to_freq[VAR_6].freq) {
   VAR_1->val_to_freq[VAR_6].value = VAR_7;
   VAR_1->val_to_freq[VAR_6].freq = 1;
  }

  if (VAR_1->val_to_freq[VAR_6].freq > VAR_5) {
   VAR_4 = VAR_6;
   VAR_5 = VAR_1->val_to_freq[VAR_6].freq;
  }





  if (VAR_5 > VAR_0 / 2)
   break;
 }

 return VAR_1->val_to_freq[VAR_4].value;
}
