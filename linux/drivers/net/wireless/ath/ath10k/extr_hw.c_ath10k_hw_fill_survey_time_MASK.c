
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct survey_info {int filled; void* time_busy; void* time; } ;
struct TYPE_2__ {int cc_wraparound_type; } ;
struct ath10k {TYPE_1__ hw_params; } ;
typedef enum ath10k_hw_cc_wraparound_type { ____Placeholder_ath10k_hw_cc_wraparound_type } ath10k_hw_cc_wraparound_type ;





 void* FUNC_0 (struct ath10k*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_1(struct ath10k *VAR_2, struct survey_info *VAR_3,
    u32 VAR_4, u32 VAR_5, u32 VAR_6, u32 VAR_7)
{
 u32 VAR_8 = 0;
 u32 VAR_9 = 0;
 enum ath10k_hw_cc_wraparound_type VAR_10;

 VAR_3->filled |= VAR_0 |
     VAR_1;

 VAR_10 = VAR_2->hw_params.cc_wraparound_type;

 if (VAR_4 < VAR_6 || VAR_5 < VAR_7) {
  switch (VAR_10) {
  case 129:
   if (VAR_4 < VAR_6) {
    VAR_8 = 0x7fffffff;
    VAR_3->filled &= ~VAR_1;
   }
   break;
  case 128:
   if (VAR_4 < VAR_6)
    VAR_8 = 0x7fffffff;

   if (VAR_5 < VAR_7)
    VAR_9 = 0x7fffffff;
   break;
  case 130:
   break;
  }
 }

 VAR_4 -= VAR_6 - VAR_8;
 VAR_5 -= VAR_7 - VAR_9;

 VAR_3->time = FUNC_0(VAR_2, VAR_4);
 VAR_3->time_busy = FUNC_0(VAR_2, VAR_5);
}
