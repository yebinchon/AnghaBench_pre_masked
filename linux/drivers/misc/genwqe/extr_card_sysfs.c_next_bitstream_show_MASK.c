
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct genwqe_dev {int softreset; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct genwqe_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
       struct device_attribute *VAR_1, char *VAR_2)
{
 int VAR_3;
 struct genwqe_dev *VAR_4 = FUNC_0(VAR_0);

 switch ((VAR_4->softreset & 0xc) >> 2) {
 case 0x2:
  VAR_3 = 0;
  break;
 case 0x3:
  VAR_3 = 1;
  break;
 default:
  VAR_3 = -1;
  break;
 }
 return FUNC_1(VAR_2, "%d\n", VAR_3);
}
