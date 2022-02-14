
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pcf50633_mbc {int pcf; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct pcf50633_mbc* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_2, struct device_attribute *VAR_3, char *VAR_4)
{
 struct pcf50633_mbc *VAR_5 = FUNC_0(VAR_2);

 u8 VAR_6 = FUNC_1(VAR_5->pcf, VAR_1);
 u8 VAR_7 = (VAR_6 & VAR_0);

 return FUNC_2(VAR_4, "%d\n", VAR_7);
}
