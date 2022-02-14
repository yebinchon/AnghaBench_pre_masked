
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct palmas {int dummy; } ;
struct device {int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int) ;
 struct palmas* FUNC_1 (int ) ;
 int FUNC_2 (struct palmas*,int ,int ,unsigned int*) ;
 int FUNC_3 (struct palmas*,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_2)
{
 struct palmas *VAR_3 = FUNC_1(VAR_2->parent);
 unsigned int VAR_4;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_3, VAR_0, VAR_1,
    &VAR_4);
 if (VAR_5 < 0) {
  FUNC_0(VAR_2, "RTC_STATUS read failed, err = %d\n", VAR_5);
  return VAR_5;
 }

 VAR_5 = FUNC_3(VAR_3, VAR_0, VAR_1,
   VAR_4);
 if (VAR_5 < 0) {
  FUNC_0(VAR_2, "RTC_STATUS write failed, err = %d\n", VAR_5);
  return VAR_5;
 }
 return 0;
}
