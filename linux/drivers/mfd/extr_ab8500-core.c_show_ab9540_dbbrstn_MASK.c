
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ab8500 {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ab8500* FUNC_0 (struct device*) ;
 int FUNC_1 (struct ab8500*,int ,int ,int*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_3,
    struct device_attribute *VAR_4, char *VAR_5)
{
 struct ab8500 *VAR_6;
 int VAR_7;
 u8 VAR_8;

 VAR_6 = FUNC_0(VAR_3);

 VAR_7 = FUNC_1(VAR_6, VAR_0,
  VAR_1, &VAR_8);
 if (VAR_7 < 0)
  return VAR_7;

 return FUNC_2(VAR_5, "%d\n",
   (VAR_8 & VAR_2) ? 1 : 0);
}
