
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl_rtc {scalar_t__ class; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct twl_rtc*,int ) ;
 struct twl_rtc* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_6)
{
 struct twl_rtc *VAR_7 = FUNC_1(VAR_6);


 FUNC_0(VAR_7, VAR_0);
 FUNC_0(VAR_7, VAR_1);
 if (VAR_7->class == VAR_5) {
  FUNC_2(VAR_4,
   VAR_2);
  FUNC_2(VAR_4,
   VAR_3);
 }

 return 0;
}
