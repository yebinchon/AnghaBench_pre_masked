
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct da9052_rtc {int da9052; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct da9052_rtc*,char*,int) ;

__attribute__((used)) static int FUNC_2(struct da9052_rtc *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2->da9052, VAR_1);
 if (VAR_3 < 0) {
  FUNC_1(VAR_2, "Failed to read ALM: %d\n", VAR_3);
  return VAR_3;
 }

 return !!(VAR_3&VAR_0);
}
