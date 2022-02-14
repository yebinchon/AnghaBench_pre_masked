
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int* VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0(unsigned int VAR_1,
  unsigned int VAR_2, unsigned int VAR_3, unsigned int *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 2; VAR_5 < VAR_3; VAR_5++)
  if (VAR_2 * VAR_0[VAR_5] >= VAR_1)
   break;

 *VAR_4 = VAR_1 / VAR_0[VAR_5];
 return VAR_5;
}
