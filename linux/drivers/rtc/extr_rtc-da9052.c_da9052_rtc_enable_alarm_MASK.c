
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct da9052_rtc {int da9052; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,int) ;
 int FUNC_1 (struct da9052_rtc*,char*,int) ;

__attribute__((used)) static int FUNC_2(struct da9052_rtc *VAR_3, bool VAR_4)
{
 int VAR_5;
 if (VAR_4) {
  VAR_5 = FUNC_0(VAR_3->da9052, VAR_1,
    VAR_0|VAR_2,
    VAR_0);
  if (VAR_5 != 0)
   FUNC_1(VAR_3, "Failed to enable ALM: %d\n", VAR_5);
 } else {
  VAR_5 = FUNC_0(VAR_3->da9052, VAR_1,
   VAR_0|VAR_2, 0);
  if (VAR_5 != 0)
   FUNC_1(VAR_3, "Write error: %d\n", VAR_5);
 }
 return VAR_5;
}
