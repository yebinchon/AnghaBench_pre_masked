
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mc13xxx_rtc {int mc13xxx; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct mc13xxx_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,unsigned int,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1,
     unsigned int VAR_2)
{
 struct mc13xxx_rtc *VAR_3 = FUNC_0(VAR_1);
 int VAR_4;

 FUNC_1(VAR_3->mc13xxx);

 VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_0);

 FUNC_3(VAR_3->mc13xxx);

 return VAR_4;
}
