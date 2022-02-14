
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct device {int dummy; } ;
struct cros_ec_rtc {scalar_t__ saved_alarm; struct cros_ec_device* cros_ec; } ;
struct cros_ec_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct cros_ec_device*,int ,scalar_t__*) ;
 int FUNC_1 (struct cros_ec_device*,int ,scalar_t__) ;
 int FUNC_2 (struct device*,char*,int) ;
 struct cros_ec_rtc* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_4,
     unsigned int VAR_5)
{
 struct cros_ec_rtc *VAR_6 = FUNC_3(VAR_4);
 struct cros_ec_device *VAR_7 = VAR_6->cros_ec;
 int VAR_8;
 u32 VAR_9, VAR_10, VAR_11;

 VAR_8 = FUNC_0(VAR_7, VAR_1, &VAR_9);
 if (VAR_8 < 0) {
  FUNC_2(VAR_4, "error getting time: %d\n", VAR_8);
  return VAR_8;
 }

 if (VAR_5) {

  if (VAR_6->saved_alarm < VAR_9)
   VAR_10 = VAR_3;
  else
   VAR_10 = VAR_6->saved_alarm - VAR_9;

  VAR_8 = FUNC_1(VAR_7, VAR_2,
          VAR_10);
  if (VAR_8 < 0) {
   FUNC_2(VAR_4, "error restoring alarm: %d\n", VAR_8);
   return VAR_8;
  }
 } else {

  VAR_8 = FUNC_0(VAR_7, VAR_0,
          &VAR_10);
  if (VAR_8 < 0) {
   FUNC_2(VAR_4, "error saving alarm: %d\n", VAR_8);
   return VAR_8;
  }

  VAR_11 = VAR_9 + VAR_10;






  if (VAR_11 < VAR_9)
   VAR_6->saved_alarm = VAR_3;
  else
   VAR_6->saved_alarm = VAR_11;

  VAR_10 = VAR_3;
  VAR_8 = FUNC_1(VAR_7, VAR_2,
          VAR_10);
  if (VAR_8 < 0) {
   FUNC_2(VAR_4, "error disabling alarm: %d\n", VAR_8);
   return VAR_8;
  }
 }

 return 0;
}
