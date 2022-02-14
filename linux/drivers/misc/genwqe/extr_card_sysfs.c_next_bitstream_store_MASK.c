
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct genwqe_dev {int softreset; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct genwqe_dev*,int ,int) ;
 struct genwqe_dev* FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (char const*,int ,int*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
        struct device_attribute *VAR_3,
        const char *VAR_4, size_t VAR_5)
{
 int VAR_6;
 struct genwqe_dev *VAR_7 = FUNC_1(VAR_2);

 if (FUNC_2(VAR_4, 0, &VAR_6) < 0)
  return -VAR_0;

 switch (VAR_6) {
 case 0x0:
  VAR_7->softreset = 0x78;
  break;
 case 0x1:
  VAR_7->softreset = 0x7c;
  break;
 default:
  return -VAR_0;
 }

 FUNC_0(VAR_7, VAR_1, VAR_7->softreset);
 return VAR_5;
}
