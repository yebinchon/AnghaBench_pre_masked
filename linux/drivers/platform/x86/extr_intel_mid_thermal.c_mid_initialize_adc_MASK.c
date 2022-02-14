
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_5)
{
 u8 VAR_6;
 u16 VAR_7;
 int VAR_8;





 VAR_8 = FUNC_3(VAR_2, &VAR_6);
 if (VAR_8)
  return VAR_8;

 VAR_6 &= ~VAR_3;
 VAR_8 = FUNC_4(VAR_2, VAR_6);
 if (VAR_8)
  return VAR_8;


 VAR_4 = FUNC_2();
 if (VAR_4 < 0) {
  FUNC_1(VAR_5, "No free ADC channels");
  return VAR_4;
 }

 VAR_7 = VAR_0 + VAR_4;

 if (!(VAR_4 == 0 || VAR_4 == VAR_1)) {

  VAR_8 = FUNC_5(VAR_7);
  if (VAR_8)
   return VAR_8;


  VAR_7++;
  VAR_4++;
 }

 VAR_8 = FUNC_6(VAR_7);
 if (VAR_8) {
  FUNC_1(VAR_5, "unable to enable ADC");
  return VAR_8;
 }
 FUNC_0(VAR_5, "ADC initialization successful");
 return VAR_8;
}
