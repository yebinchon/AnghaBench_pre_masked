
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcf2123_data {int map; } ;
struct device {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*,...) ;
 struct pcf2123_data* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int ,unsigned int*) ;
 int FUNC_3 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_5)
{
 struct pcf2123_data *VAR_6 = FUNC_1(VAR_5);
 int VAR_7;
 unsigned int VAR_8 = 0;

 VAR_7 = FUNC_3(VAR_6->map, VAR_4, VAR_2);
 if (VAR_7)
  return VAR_7;


 FUNC_0(VAR_5, "stopping RTC\n");
 VAR_7 = FUNC_3(VAR_6->map, VAR_4, VAR_1);
 if (VAR_7)
  return VAR_7;


 FUNC_0(VAR_5, "checking for presence of RTC\n");
 VAR_7 = FUNC_2(VAR_6->map, VAR_4, &VAR_8);
 if (VAR_7)
  return VAR_7;

 FUNC_0(VAR_5, "received data from RTC (0x%08X)\n", VAR_8);
 if (!(VAR_8 & VAR_1))
  return -VAR_3;


 VAR_7 = FUNC_3(VAR_6->map, VAR_4, VAR_0);
 if (VAR_7)
  return VAR_7;

 return 0;
}
