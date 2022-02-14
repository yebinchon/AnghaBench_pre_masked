
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long long u64 ;
typedef int u32 ;
struct lan743x_ptp {int command_lock; } ;
struct lan743x_adapter {struct lan743x_ptp ptp; } ;
typedef long long s64 ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (long long,int,int*) ;
 int FUNC_1 (struct lan743x_adapter*,int ,int) ;
 int FUNC_2 (struct lan743x_adapter*,int*,int*,int *) ;
 int FUNC_3 (struct lan743x_adapter*,int,int,int ) ;
 int FUNC_4 (struct lan743x_adapter*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct lan743x_adapter *VAR_6,
       s64 VAR_7)
{
 struct lan743x_ptp *VAR_8 = &VAR_6->ptp;
 u32 VAR_9 = 0;
 u64 VAR_10 = 0;
 u32 VAR_11 = 0;
 u32 VAR_12 = 0;
 u32 VAR_13 = 0;
 s32 VAR_14 = 0;

 if (VAR_7 > 15000000000LL) {

  FUNC_2(VAR_6, &VAR_11,
          &VAR_12, ((void*)0));
  VAR_11 += FUNC_0(VAR_7, 1000000000LL,
      &VAR_13);
  VAR_12 += VAR_13;
  if (VAR_12 >= 1000000000) {
   VAR_11++;
   VAR_12 -= 1000000000;
  }
  FUNC_3(VAR_6, VAR_11,
          VAR_12, 0);
  return;
 } else if (VAR_7 < -15000000000LL) {

  VAR_7 = -VAR_7;

  FUNC_2(VAR_6, &VAR_11,
          &VAR_12, ((void*)0));
  VAR_11 -= FUNC_0(VAR_7, 1000000000LL,
      &VAR_13);
  VAR_9 = VAR_13;
  if (VAR_12 < VAR_9) {
   VAR_11--;
   VAR_12 += 1000000000;
  }
  VAR_12 -= VAR_9;
  FUNC_3(VAR_6, VAR_11,
          VAR_12, 0);
  return;
 }


 if (VAR_7 >= 0) {
  VAR_10 = (u64)(VAR_7);
  VAR_14 = (s32)FUNC_0(VAR_10, 1000000000,
        &VAR_13);
  VAR_12 = (u32)VAR_13;
 } else {
  VAR_10 = (u64)(-VAR_7);
  VAR_14 = -((s32)FUNC_0(VAR_10, 1000000000,
          &VAR_13));
  VAR_12 = (u32)VAR_13;
  if (VAR_12 > 0) {




   VAR_14--;
   VAR_12 = (1000000000 - VAR_12);
  }
 }

 if (VAR_12 > 0) {

  VAR_12 += 8;
 }

 if (VAR_12 >= 1000000000) {

  VAR_14++;
  VAR_12 -= 1000000000;
 }

 while (VAR_14) {
  FUNC_5(&VAR_8->command_lock);
  if (VAR_14 > 0) {
   u32 VAR_15 = (u32)VAR_14;

   if (VAR_15 > 0xF)
    VAR_15 = 0xF;
   FUNC_1(VAR_6, VAR_0,
       VAR_1 |
       VAR_15);
   VAR_14 -= ((s32)VAR_15);
  } else {
   u32 VAR_16 = (u32)(-VAR_14);

   if (VAR_16 > 0xF)
    VAR_16 = 0xF;
   FUNC_1(VAR_6, VAR_0,
       VAR_16);
   VAR_14 += ((s32)VAR_16);
  }
  FUNC_1(VAR_6, VAR_3,
      VAR_5);
  FUNC_4(VAR_6,
            VAR_5);
  FUNC_6(&VAR_8->command_lock);
 }
 if (VAR_12) {
  FUNC_5(&VAR_8->command_lock);
  FUNC_1(VAR_6, VAR_0,
      VAR_1 |
      (VAR_12 &
      VAR_2));
  FUNC_1(VAR_6, VAR_3,
      VAR_4);
  FUNC_4(VAR_6,
            VAR_4);
  FUNC_6(&VAR_8->command_lock);
 }
}
