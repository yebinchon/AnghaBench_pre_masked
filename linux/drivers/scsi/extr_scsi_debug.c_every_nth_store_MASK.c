
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_driver {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char const*,char*,int*) ;
 int FUNC_2 () ;

__attribute__((used)) static ssize_t FUNC_3(struct device_driver *VAR_3, const char *VAR_4,
          size_t VAR_5)
{
 int VAR_6;

 if ((VAR_5 > 0) && (1 == FUNC_1(VAR_4, "%d", &VAR_6))) {
  VAR_1 = VAR_6;
  if (VAR_6 && !VAR_2) {
   FUNC_0("every_nth needs statistics=1, set it\n");
   VAR_2 = 1;
  }
  FUNC_2();
  return VAR_5;
 }
 return -VAR_0;
}
