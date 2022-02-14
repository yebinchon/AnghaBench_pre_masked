
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int ,scalar_t__,int ) ;
 int VAR_3 ;

int FUNC_1(unsigned int *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(&VAR_3, 0, VAR_2 - VAR_1 + 1,
      VAR_0);
 if (VAR_5 < 0)
  return VAR_5;

 *VAR_4 = VAR_1 + (unsigned int)VAR_5;
 return 0;
}
