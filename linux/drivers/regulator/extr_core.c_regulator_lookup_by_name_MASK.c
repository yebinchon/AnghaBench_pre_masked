
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct device {int dummy; } ;


 struct device* FUNC_0 (int *,int *,char const*,int ) ;
 struct regulator_dev* FUNC_1 (struct device*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static struct regulator_dev *FUNC_2(const char *VAR_2)
{
 struct device *VAR_3;

 VAR_3 = FUNC_0(&VAR_0, ((void*)0), VAR_2, VAR_1);

 return VAR_3 ? FUNC_1(VAR_3) : ((void*)0);
}
