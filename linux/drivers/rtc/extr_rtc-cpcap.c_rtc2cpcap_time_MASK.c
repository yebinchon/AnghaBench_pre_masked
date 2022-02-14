
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int dummy; } ;
struct cpcap_time {unsigned long day; unsigned long tod2; unsigned long tod1; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (struct rtc_time*,unsigned long*) ;

__attribute__((used)) static void FUNC_1(struct cpcap_time *VAR_3, struct rtc_time *VAR_4)
{
 unsigned long VAR_5;

 FUNC_0(VAR_4, &VAR_5);

 VAR_3->day = VAR_5 / VAR_0;
 VAR_5 %= VAR_0;
 VAR_3->tod2 = (VAR_5 >> 8) & VAR_2;
 VAR_3->tod1 = VAR_5 & VAR_1;
}
