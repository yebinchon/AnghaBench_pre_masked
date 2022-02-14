
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct genwqe_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 size_t FUNC_0 (char**) ;
 struct genwqe_dev* FUNC_1 (struct device*) ;
 size_t FUNC_2 (struct genwqe_dev*) ;
 char** VAR_0 ;
 int FUNC_3 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1, struct device_attribute *VAR_2,
    char *VAR_3)
{
 u8 VAR_4;
 struct genwqe_dev *VAR_5 = FUNC_1(VAR_1);

 VAR_4 = FUNC_2(VAR_5);
 return FUNC_3(VAR_3, "%s\n", (VAR_4 >= FUNC_0(VAR_0)) ?
         "invalid" : VAR_0[VAR_4]);
}
