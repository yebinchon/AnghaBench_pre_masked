
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int const sector_t ;


 unsigned int const VAR_0 ;
 unsigned int const VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static sector_t FUNC_0(void)
{
 static const unsigned int VAR_3 = 1073741824;

 if (VAR_2 > 0)
  return (sector_t)VAR_2 *
   (VAR_3 / VAR_0);
 else
  return VAR_1;
}
