
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bd70528_rtc {int dev; int mfd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int*) ;
 int FUNC_1 (int ,int,int*) ;
 int FUNC_2 (int ,int,int*) ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static int FUNC_4(struct bd70528_rtc *VAR_3, int VAR_4,
     int *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_2(VAR_3->mfd, VAR_4 & VAR_2,
         VAR_5);
 if (VAR_6) {
  FUNC_3(VAR_3->dev,
   "Failed to disable WDG for RTC setting (%d)\n", VAR_6);
  return VAR_6;
 }
 VAR_6 = FUNC_0(VAR_3->mfd,
          VAR_4 & VAR_0,
          VAR_5);
 if (VAR_6) {
  FUNC_3(VAR_3->dev,
   "Failed to disable 'elapsed timer' for RTC setting\n");
  return VAR_6;
 }
 VAR_6 = FUNC_1(VAR_3->mfd, VAR_4 & VAR_1,
          VAR_5);
 if (VAR_6) {
  FUNC_3(VAR_3->dev,
   "Failed to disable 'wake timer' for RTC setting\n");
  return VAR_6;
 }

 return VAR_6;
}
