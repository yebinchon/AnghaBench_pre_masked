
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct watchdog_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static unsigned int FUNC_1(struct watchdog_device *VAR_4)
{
 u16 VAR_5;


 VAR_5 = FUNC_0(VAR_3 + VAR_0);
 while (VAR_5 & VAR_2)
  VAR_5 = FUNC_0(VAR_3 + VAR_0);
 VAR_5 &= VAR_1;
 if (VAR_5 != 0)
  VAR_5 /= 100;

 return VAR_5;
}
