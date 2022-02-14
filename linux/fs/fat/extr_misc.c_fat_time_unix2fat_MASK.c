
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tm {int tm_year; int tm_mon; int tm_sec; int tm_hour; int tm_min; int tm_mday; } ;
struct timespec64 {int tv_sec; int tv_nsec; } ;
struct msdos_sb_info {int dummy; } ;
typedef int __le16 ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct msdos_sb_info*) ;
 int FUNC_2 (int,int ,struct tm*) ;

void FUNC_3(struct msdos_sb_info *VAR_0, struct timespec64 *VAR_1,
         __le16 *VAR_2, __le16 *VAR_3, u8 *VAR_4)
{
 struct tm VAR_5;
 FUNC_2(VAR_1->tv_sec, -FUNC_1(VAR_0), &VAR_5);


 if (VAR_5.tm_year < 1980 - 1900) {
  *VAR_2 = 0;
  *VAR_3 = FUNC_0((0 << 9) | (1 << 5) | 1);
  if (VAR_4)
   *VAR_4 = 0;
  return;
 }
 if (VAR_5.tm_year > 2107 - 1900) {
  *VAR_2 = FUNC_0((23 << 11) | (59 << 5) | 29);
  *VAR_3 = FUNC_0((127 << 9) | (12 << 5) | 31);
  if (VAR_4)
   *VAR_4 = 199;
  return;
 }


 VAR_5.tm_year -= 80;

 VAR_5.tm_mon++;

 VAR_5.tm_sec >>= 1;

 *VAR_2 = FUNC_0(VAR_5.tm_hour << 11 | VAR_5.tm_min << 5 | VAR_5.tm_sec);
 *VAR_3 = FUNC_0(VAR_5.tm_year << 9 | VAR_5.tm_mon << 5 | VAR_5.tm_mday);
 if (VAR_4)
  *VAR_4 = (VAR_1->tv_sec & 1) * 100 + VAR_1->tv_nsec / 10000000;
}
