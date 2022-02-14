
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int VAR_0 ;
 struct device* FUNC_0 (struct device*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_1, void *VAR_2)
{
 struct device **VAR_3 = VAR_2, *VAR_4;

 VAR_4 = FUNC_0(VAR_1);
 if (!VAR_4 || (*VAR_3 && *VAR_3 != VAR_4))
  return -VAR_0;

 *VAR_3 = VAR_4;

 return 0;
}
