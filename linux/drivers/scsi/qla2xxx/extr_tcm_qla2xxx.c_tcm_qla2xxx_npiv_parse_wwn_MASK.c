
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;


 int VAR_0 ;
 int FUNC_0 (char const*,scalar_t__*) ;

__attribute__((used)) static int FUNC_1(
 const char *VAR_1,
 size_t VAR_2,
 u64 *VAR_3,
 u64 *VAR_4)
{
 unsigned int VAR_5 = VAR_2;
 int VAR_6;

 *VAR_3 = 0;
 *VAR_4 = 0;


 if (VAR_1[VAR_5-1] == '\n' || VAR_1[VAR_5-1] == 0)
  VAR_5--;


 if ((VAR_5 != (16+1+16)) || (VAR_1[16] != ':'))
  return -VAR_0;

 VAR_6 = FUNC_0(&VAR_1[0], VAR_3);
 if (VAR_6 != 0)
  return VAR_6;

 VAR_6 = FUNC_0(&VAR_1[17], VAR_4);
 if (VAR_6 != 0)
  return VAR_6;

 return 0;
}
