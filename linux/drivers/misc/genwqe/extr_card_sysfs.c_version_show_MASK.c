
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct genwqe_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct genwqe_dev*,int ) ;
 struct genwqe_dev* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2, struct device_attribute *VAR_3,
       char *VAR_4)
{
 u64 VAR_5, VAR_6;
 struct genwqe_dev *VAR_7 = FUNC_1(VAR_2);

 VAR_5 = FUNC_0(VAR_7, VAR_1);
 VAR_6 = FUNC_0(VAR_7, VAR_0);

 return FUNC_2(VAR_4, "%016llx.%016llx\n", VAR_5, VAR_6);
}
