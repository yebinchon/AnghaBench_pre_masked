
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mc13xxx_rtc {struct mc13xxx* mc13xxx; int valid; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct mc13xxx_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (struct mc13xxx*,int) ;
 int FUNC_2 (struct mc13xxx*,int) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1,
  unsigned int VAR_2, int VAR_3)
{
 struct mc13xxx_rtc *VAR_4 = FUNC_0(VAR_1);
 int (*VAR_5)(struct mc13xxx *VAR_6, int VAR_7);

 if (!VAR_4->valid)
  return -VAR_0;

 VAR_5 = VAR_2 ? FUNC_2 : FUNC_1;
 return VAR_5(VAR_4->mc13xxx, VAR_3);
}
