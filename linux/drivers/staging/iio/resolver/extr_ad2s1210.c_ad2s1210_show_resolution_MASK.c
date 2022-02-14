
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ad2s1210_state {int resolution; } ;
typedef int ssize_t ;


 int FUNC_0 (struct device*) ;
 struct ad2s1210_state* FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
     struct device_attribute *VAR_1,
     char *VAR_2)
{
 struct ad2s1210_state *VAR_3 = FUNC_1(FUNC_0(VAR_0));

 return FUNC_2(VAR_2, "%d\n", VAR_3->resolution);
}
