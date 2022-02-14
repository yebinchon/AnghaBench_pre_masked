
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_driver {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int,int,int,int) ;
 int FUNC_1 (char const*,int*,int*,int*,int*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device_driver *VAR_0, const char *VAR_1,
         size_t VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_1, &VAR_3, &VAR_4, &VAR_5, &VAR_6);
 if (VAR_7)
  goto out;

 VAR_7 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6);

out:
 if (!VAR_7)
  VAR_7 = VAR_2;
 return VAR_7;
}
