
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_rc {int const index; } ;
struct device {int dummy; } ;


 struct uwb_rc* FUNC_0 (struct device*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_0, const void *VAR_1)
{
 const int *VAR_2 = VAR_1;
 struct uwb_rc *VAR_3 = FUNC_0(VAR_0);

 if (VAR_3->index == *VAR_2)
  return 1;
 return 0;
}
