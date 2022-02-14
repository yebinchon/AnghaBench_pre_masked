
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int dummy; } ;
struct cpcap_time {int tod1; int tod2; unsigned long day; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned long,struct rtc_time*) ;

__attribute__((used)) static void FUNC_1(struct rtc_time *VAR_4, struct cpcap_time *VAR_5)
{
 unsigned long int VAR_6;
 unsigned long int VAR_7;

 VAR_6 = (VAR_5->tod1 & VAR_2) | ((VAR_5->tod2 & VAR_3) << 8);
 VAR_7 = VAR_6 + ((VAR_5->day & VAR_0) * VAR_1);

 FUNC_0(VAR_7, VAR_4);
}
