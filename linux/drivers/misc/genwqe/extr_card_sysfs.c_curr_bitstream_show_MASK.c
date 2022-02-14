
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct genwqe_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct genwqe_dev*,int ) ;
 struct genwqe_dev* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
       struct device_attribute *VAR_2, char *VAR_3)
{
 int VAR_4;
 struct genwqe_dev *VAR_5 = FUNC_1(VAR_1);

 VAR_4 = FUNC_0(VAR_5, VAR_0) & 0x1;
 return FUNC_2(VAR_3, "%d\n", VAR_4);
}
