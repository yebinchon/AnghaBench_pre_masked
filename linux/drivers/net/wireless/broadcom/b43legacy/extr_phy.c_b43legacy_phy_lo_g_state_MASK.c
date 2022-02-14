
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct b43legacy_wldev {int dummy; } ;
struct b43legacy_lopair {int high; int low; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct b43legacy_wldev*,struct b43legacy_lopair*) ;
 scalar_t__ FUNC_3 (struct b43legacy_wldev*,int ) ;

__attribute__((used)) static
void FUNC_4(struct b43legacy_wldev *VAR_0,
         const struct b43legacy_lopair *VAR_1,
         struct b43legacy_lopair *VAR_2,
         u16 VAR_3)
{
 static const struct b43legacy_lopair VAR_4[8] = {
  { .high = 1, .low = 1, },
  { .high = 1, .low = 0, },
  { .high = 1, .low = -1, },
  { .high = 0, .low = -1, },
  { .high = -1, .low = -1, },
  { .high = -1, .low = 0, },
  { .high = -1, .low = 1, },
  { .high = 0, .low = 1, },
 };
 struct b43legacy_lopair VAR_5 = {
  .high = VAR_1->high,
  .low = VAR_1->low,
 };
 struct b43legacy_lopair VAR_6;
 struct b43legacy_lopair VAR_7;
 int VAR_8 = 12;
 int VAR_9 = 0;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 u32 VAR_14;
 u32 VAR_15;




 FUNC_2(VAR_0, &VAR_5);
 VAR_14 = FUNC_3(VAR_0, VAR_3);
 do {
  VAR_10 = 0;
  FUNC_0(!(VAR_9 >= 0 && VAR_9 <= 8));
  if (VAR_9 == 0) {
   VAR_12 = 1;
   VAR_13 = 8;
  } else if (VAR_9 % 2 == 0) {
   VAR_12 = VAR_9 - 1;
   VAR_13 = VAR_9 + 1;
  } else {
   VAR_12 = VAR_9 - 2;
   VAR_13 = VAR_9 + 2;
  }
  if (VAR_12 < 1)
   VAR_12 += 8;
  if (VAR_13 > 8)
   VAR_13 -= 8;

  VAR_11 = VAR_12;
  VAR_6.high = VAR_5.high;
  VAR_6.low = VAR_5.low;
  while (1) {
   FUNC_0(!(VAR_11 >= 1 && VAR_11 <= 8));
   VAR_7.high = VAR_6.high +
       VAR_4[VAR_11 - 1].high;
   VAR_7.low = VAR_6.low + VAR_4[VAR_11 - 1].low;
   if ((FUNC_1(VAR_7.low) < 9)
        && (FUNC_1(VAR_7.high) < 9)) {
    FUNC_2(VAR_0, &VAR_7);
    VAR_15 = FUNC_3(VAR_0,
               VAR_3);
    if (VAR_15 < VAR_14) {
     VAR_14 = VAR_15;
     VAR_9 = VAR_11;
     VAR_10 = 1;

     VAR_5.high =
        VAR_7.high;
     VAR_5.low = VAR_7.low;
    }
   }
   if (VAR_11 == VAR_13)
    break;
   if (VAR_11 == 8)
    VAR_11 = 1;
   else
    VAR_11++;
  }
 } while (VAR_8-- && VAR_10);

 VAR_2->high = VAR_5.high;
 VAR_2->low = VAR_5.low;
}
