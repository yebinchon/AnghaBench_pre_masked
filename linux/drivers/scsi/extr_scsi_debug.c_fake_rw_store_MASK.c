
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_driver {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char const*,char*,int*) ;
 int * FUNC_2 (unsigned long) ;

__attribute__((used)) static ssize_t FUNC_3(struct device_driver *VAR_5, const char *VAR_6,
        size_t VAR_7)
{
 int VAR_8;

 if ((VAR_7 > 0) && (1 == FUNC_1(VAR_6, "%d", &VAR_8)) && (VAR_8 >= 0)) {
  VAR_8 = (VAR_8 > 0);
  VAR_4 = (VAR_4 > 0);
  if (VAR_4 != VAR_8) {
   if ((0 == VAR_8) && (((void*)0) == VAR_2)) {
    unsigned long VAR_9 =
     (unsigned long)VAR_3 *
     1048576;

    VAR_2 = FUNC_2(VAR_9);
    if (((void*)0) == VAR_2) {
     FUNC_0("out of memory, 9\n");
     return -VAR_1;
    }
   }
   VAR_4 = VAR_8;
  }
  return VAR_7;
 }
 return -VAR_0;
}
