
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_mah; } ;
struct ab8500_fg {TYPE_1__ bat_cap; } ;
typedef int ssize_t ;


 int FUNC_0 (char const*,int,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_1(struct ab8500_fg *VAR_0, const char *VAR_1,
     size_t VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, 10, &VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_0->bat_cap.max_mah = (int) VAR_3;
 return VAR_2;
}
