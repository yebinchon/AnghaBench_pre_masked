
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {unsigned char tm_year; unsigned char tm_mon; unsigned char tm_mday; unsigned char tm_wday; unsigned char tm_hour; unsigned char tm_min; unsigned char tm_sec; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_0(struct rtc_time *VAR_12, unsigned char *VAR_13, int VAR_14)
{
 if (VAR_14 < VAR_11)
  return -VAR_0;
 VAR_12->tm_year = (VAR_13[VAR_10] >> 4) * 1000
   + (VAR_13[VAR_10] & 0xf) * 100
   + (VAR_13[VAR_9] >> 4) * 10
   + (VAR_13[VAR_9] & 0xf);
 VAR_12->tm_year -= 1900;
 VAR_12->tm_mon = ((VAR_13[VAR_6] >> 4) & 0x01) * 10
   + (VAR_13[VAR_6] & 0x0f);
 VAR_12->tm_mday = ((VAR_13[VAR_3] >> 4) & 0x03) * 10
   + (VAR_13[VAR_3] & 0x0f);
 VAR_12->tm_wday = VAR_13[VAR_8] & 0x07;
 if (VAR_13[VAR_4] & VAR_1) {
  VAR_12->tm_hour = ((VAR_13[VAR_4] >> 4) & 0x1) * 10
    + (VAR_13[VAR_4] & 0x0f);
  if (VAR_13[VAR_4] & VAR_2)
   VAR_12->tm_hour += 12;
 } else
  VAR_12->tm_hour = ((VAR_13[VAR_4] >> 4) & 0x03) * 10
    + (VAR_13[VAR_4] & 0x0f);
 VAR_12->tm_min = ((VAR_13[VAR_5] >> 4) & 0x7) * 10
   + (VAR_13[VAR_5] & 0x0f);
 VAR_12->tm_sec = ((VAR_13[VAR_7] >> 4) & 0x7) * 10
   + (VAR_13[VAR_7] & 0x0f);
 return 0;
}
