
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
typedef int time64_t ;
struct timespec64 {int tv_sec; scalar_t__ tv_nsec; } ;
typedef int __le16 ;
struct TYPE_4__ {int Day; int Month; int Year; } ;
struct TYPE_3__ {int TwoSeconds; int Minutes; int Hours; } ;
typedef TYPE_1__ SMB_TIME ;
typedef TYPE_2__ SMB_DATE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int ) ;
 int* VAR_2 ;

struct timespec64 FUNC_3(__le16 VAR_3, __le16 VAR_4, int VAR_5)
{
 struct timespec64 VAR_6;
 time64_t VAR_7, VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12;
 u16 VAR_13 = FUNC_2(VAR_3);
 u16 VAR_14 = FUNC_2(VAR_4);
 SMB_TIME *VAR_15 = (SMB_TIME *)&VAR_14;
 SMB_DATE *VAR_16 = (SMB_DATE *)&VAR_13;

 FUNC_0(VAR_0, "date %d time %d\n", VAR_13, VAR_14);

 VAR_7 = 2 * VAR_15->TwoSeconds;
 VAR_9 = VAR_15->Minutes;
 if ((VAR_7 > 59) || (VAR_9 > 59))
  FUNC_0(VAR_1, "illegal time min %d sec %lld\n", VAR_9, VAR_7);
 VAR_7 += (VAR_9 * 60);
 VAR_7 += 60 * 60 * VAR_15->Hours;
 if (VAR_15->Hours > 24)
  FUNC_0(VAR_1, "illegal hours %d\n", VAR_15->Hours);
 VAR_10 = VAR_16->Day;
 VAR_11 = VAR_16->Month;
 if (VAR_10 < 1 || VAR_10 > 31 || VAR_11 < 1 || VAR_11 > 12) {
  FUNC_0(VAR_1, "illegal date, month %d day: %d\n", VAR_11, VAR_10);
  VAR_10 = FUNC_1(VAR_10, 1, 31);
  VAR_11 = FUNC_1(VAR_11, 1, 12);
 }
 VAR_11 -= 1;
 VAR_8 = VAR_10 + VAR_2[VAR_11];
 VAR_8 += 3652;
 VAR_12 = VAR_16->Year;
 VAR_8 += VAR_12 * 365;
 VAR_8 += (VAR_12/4);






 if (VAR_12 >= 120)
  VAR_8 = VAR_8 - 1;


 if (VAR_12 != 120)
  VAR_8 -= ((VAR_12 & 0x03) == 0) && (VAR_11 < 2 ? 1 : 0);
 VAR_7 += 24 * 60 * 60 * VAR_8;

 VAR_6.tv_sec = VAR_7 + VAR_5;



 VAR_6.tv_nsec = 0;
 return VAR_6;
}
