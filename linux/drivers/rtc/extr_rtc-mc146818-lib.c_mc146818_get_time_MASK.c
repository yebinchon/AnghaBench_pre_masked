
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rtc_time {unsigned char tm_sec; unsigned char tm_min; unsigned char tm_hour; unsigned char tm_mday; unsigned char tm_mon; unsigned char tm_year; } ;
struct TYPE_3__ {scalar_t__ revision; } ;
struct TYPE_4__ {scalar_t__ century; TYPE_1__ header; } ;


 void* FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned char VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 TYPE_2__ VAR_12 ;
 void* FUNC_1 (unsigned char) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int) ;
 int VAR_13 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

unsigned int FUNC_6(struct rtc_time *VAR_14)
{
 unsigned char VAR_15;
 unsigned long VAR_16;
 unsigned char VAR_17 = 0;
 if (FUNC_2())
  FUNC_3(20);







 FUNC_4(&VAR_13, VAR_16);
 VAR_14->tm_sec = FUNC_0(VAR_10);
 VAR_14->tm_min = FUNC_0(VAR_8);
 VAR_14->tm_hour = FUNC_0(VAR_7);
 VAR_14->tm_mday = FUNC_0(VAR_4);
 VAR_14->tm_mon = FUNC_0(VAR_9);
 VAR_14->tm_year = FUNC_0(VAR_11);
 VAR_15 = FUNC_0(VAR_3);
 FUNC_5(&VAR_13, VAR_16);

 if (!(VAR_15 & VAR_6) || VAR_2)
 {
  VAR_14->tm_sec = FUNC_1(VAR_14->tm_sec);
  VAR_14->tm_min = FUNC_1(VAR_14->tm_min);
  VAR_14->tm_hour = FUNC_1(VAR_14->tm_hour);
  VAR_14->tm_mday = FUNC_1(VAR_14->tm_mday);
  VAR_14->tm_mon = FUNC_1(VAR_14->tm_mon);
  VAR_14->tm_year = FUNC_1(VAR_14->tm_year);
  VAR_17 = FUNC_1(VAR_17);
 }





 if (VAR_17 > 20)
  VAR_14->tm_year += (VAR_17 - 19) * 100;





 if (VAR_14->tm_year <= 69)
  VAR_14->tm_year += 100;

 VAR_14->tm_mon--;

 return VAR_1;
}
