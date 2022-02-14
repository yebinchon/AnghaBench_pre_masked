
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bus_type {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 scalar_t__ FUNC_0 (char const*,int ,long*) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;

__attribute__((used)) static ssize_t FUNC_3(struct bus_type *VAR_3, const char *VAR_4, size_t VAR_5)
{
 long VAR_6;
 int VAR_7;

 if (FUNC_0(VAR_4, 0, &VAR_6) < 0)
  return -VAR_0;

 if (VAR_6 == VAR_2) {
  VAR_7 = FUNC_1();
  goto exit;
 }

 if (VAR_6 < 0 || VAR_6 >= VAR_1)
  return -VAR_0;

 VAR_7 = FUNC_2((int)VAR_6);
exit:
 if (!VAR_7)
  VAR_7 = VAR_5;

 return VAR_7;
}
