
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_driver {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ,int ,int,char const*) ;
 int VAR_0 ;
 int FUNC_1 (struct device_driver*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device_driver *VAR_1, const char *VAR_2,
      size_t VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, FUNC_1(VAR_1), 3,
      VAR_2);

 return VAR_4 ? VAR_4 : VAR_3;
}
