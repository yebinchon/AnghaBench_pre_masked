
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct mt7603_dev {int reset_test; int cur_reset_cause; int * reset_cause; } ;
typedef enum mt7603_reset_cause { ____Placeholder_mt7603_reset_cause } mt7603_reset_cause ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool
FUNC_0(struct mt7603_dev *VAR_1, u8 *VAR_2,
        enum mt7603_reset_cause VAR_3,
        bool (*VAR_4)(struct mt7603_dev *VAR_5))
{
 if (VAR_1->reset_test == VAR_3 + 1) {
  VAR_1->reset_test = 0;
  goto trigger;
 }

 if (VAR_4) {
  if (!VAR_4(VAR_1) && *VAR_2 < VAR_0) {
   *VAR_2 = 0;
   return 0;
  }

  (*VAR_2)++;
 }

 if (*VAR_2 < VAR_0)
  return 0;
trigger:
 VAR_1->cur_reset_cause = VAR_3;
 VAR_1->reset_cause[VAR_3]++;
 return 1;
}
