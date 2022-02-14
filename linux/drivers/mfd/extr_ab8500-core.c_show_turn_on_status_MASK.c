
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
 struct ab8500* FUNC_0 (struct device*) ;
 int FUNC_1 (struct ab8500*,int ,int ,int*) ;
 scalar_t__ FUNC_2 (struct ab8500*) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_5,
    struct device_attribute *VAR_6, char *VAR_7)
{
 int VAR_8;
 u8 VAR_9;
 struct ab8500 *VAR_10;

 VAR_10 = FUNC_0(VAR_5);
 VAR_8 = FUNC_1(VAR_10, VAR_0,
  VAR_1, &VAR_9);
 if (VAR_8 < 0)
  return VAR_8;
 if (FUNC_2(VAR_10)) {
  FUNC_3(&VAR_2);
  VAR_9 = (VAR_9 & VAR_3) | VAR_4;
  FUNC_4(&VAR_2);
 }

 return FUNC_5(VAR_7, "%#x\n", VAR_9);
}
