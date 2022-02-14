
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ab8500_fg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct ab8500_fg *VAR_3, int VAR_4)
{
 if (VAR_4 > VAR_2 +
  (VAR_0 * VAR_1))
  return VAR_1;
 if (VAR_4 < VAR_2)
  return 0;
 return (VAR_4 - VAR_2) / VAR_0;
}
