
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tps80031_rtc {int dummy; } ;
struct device {int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_3, struct tps80031_rtc *VAR_4)
{
 int VAR_5;
 u8 VAR_6;






 VAR_5 = FUNC_1(VAR_3->parent, VAR_2,
    VAR_1, &VAR_6);
 if (VAR_5 < 0) {
  FUNC_0(VAR_3, "reading RTC_STATUS failed. err = %d\n", VAR_5);
  return VAR_5;
 }


 VAR_5 = FUNC_2(VAR_3->parent, VAR_2,
   VAR_1, VAR_0);
 if (VAR_5 < 0) {
  FUNC_0(VAR_3, "clear Alarm INT failed, err = %d\n", VAR_5);
  return VAR_5;
 }
 return 0;
}
