
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ds1307 {int regmap; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ds1307* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 int FUNC_2 (char*,int ,char*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_3,
       struct device_attribute *VAR_4,
       char *VAR_5)
{
 struct ds1307 *VAR_6 = FUNC_0(VAR_3->parent);
 unsigned int VAR_7;

 FUNC_1(VAR_6->regmap, VAR_1, &VAR_7);

 return FUNC_2(VAR_5, VAR_2, (VAR_7 & VAR_0) ? "on\n" :
   "off\n");
}
