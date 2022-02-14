
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rtc_time {int tm_year; int tm_mon; int tm_mday; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int,int) ;

__attribute__((used)) static int FUNC_2(u16 VAR_0, struct rtc_time *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;

 for (VAR_3 = 2000;; VAR_3++) {
  VAR_2 = FUNC_1(1, 12, VAR_3);
  if (VAR_0 >= VAR_2)
   VAR_0 -= VAR_2;
  else {
   for (VAR_4 = 0;; VAR_4++) {
    VAR_2 = FUNC_0(VAR_4, VAR_3);
    if (VAR_0 >= VAR_2) {
     VAR_0 -= VAR_2;
    } else {
     VAR_1->tm_year = VAR_3 - 1900;
     VAR_1->tm_mon = VAR_4;
     VAR_1->tm_mday = VAR_0 + 1;
     break;
    }
   }
   break;
  }
 }
 return 0;
}
