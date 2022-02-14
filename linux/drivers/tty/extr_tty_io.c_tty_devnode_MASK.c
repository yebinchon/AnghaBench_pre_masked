
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct device {scalar_t__ devt; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 int VAR_0 ;

__attribute__((used)) static char *FUNC_1(struct device *VAR_1, umode_t *VAR_2)
{
 if (!VAR_2)
  return ((void*)0);
 if (VAR_1->devt == FUNC_0(VAR_0, 0) ||
     VAR_1->devt == FUNC_0(VAR_0, 2))
  *VAR_2 = 0666;
 return ((void*)0);
}
