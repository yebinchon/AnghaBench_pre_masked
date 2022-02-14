
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rtc_time {unsigned int tm_year; int tm_mon; unsigned char tm_mday; unsigned char tm_hour; unsigned char tm_min; unsigned char tm_sec; } ;
struct TYPE_3__ {scalar_t__ revision; } ;
struct TYPE_4__ {scalar_t__ century; TYPE_1__ header; } ;


 unsigned char FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned char,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 unsigned char VAR_13 ;
 scalar_t__ VAR_14 ;
 TYPE_2__ VAR_15 ;
 void* FUNC_2 (unsigned char) ;
 int VAR_16 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int FUNC_5(struct rtc_time *VAR_17)
{
 unsigned long VAR_18;
 unsigned char VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;
 unsigned char VAR_24, VAR_25;
 unsigned int VAR_26;



 unsigned char VAR_27 = 0;

 VAR_26 = VAR_17->tm_year;
 VAR_19 = VAR_17->tm_mon + 1;
 VAR_20 = VAR_17->tm_mday;
 VAR_21 = VAR_17->tm_hour;
 VAR_22 = VAR_17->tm_min;
 VAR_23 = VAR_17->tm_sec;

 if (VAR_26 > 255)
  return -VAR_0;

 FUNC_3(&VAR_16, VAR_18);
 if (VAR_26 > 169) {
  FUNC_4(&VAR_16, VAR_18);
  return -VAR_0;
 }

 if (VAR_26 >= 100)
  VAR_26 -= 100;

 if (!(FUNC_0(VAR_3) & VAR_7)
     || VAR_2) {
  VAR_23 = FUNC_2(VAR_23);
  VAR_22 = FUNC_2(VAR_22);
  VAR_21 = FUNC_2(VAR_21);
  VAR_20 = FUNC_2(VAR_20);
  VAR_19 = FUNC_2(VAR_19);
  VAR_26 = FUNC_2(VAR_26);
  VAR_27 = FUNC_2(VAR_27);
 }

 VAR_24 = FUNC_0(VAR_3);
 FUNC_1((VAR_24|VAR_13), VAR_3);
 VAR_25 = FUNC_0(VAR_8);
 FUNC_1((VAR_25|VAR_6), VAR_8);




 FUNC_1(VAR_26, VAR_14);
 FUNC_1(VAR_19, VAR_11);
 FUNC_1(VAR_20, VAR_4);
 FUNC_1(VAR_21, VAR_9);
 FUNC_1(VAR_22, VAR_10);
 FUNC_1(VAR_23, VAR_12);






 FUNC_1(VAR_24, VAR_3);
 FUNC_1(VAR_25, VAR_8);

 FUNC_4(&VAR_16, VAR_18);

 return 0;
}
