
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 int VAR_3 ;

int FUNC_0(int VAR_4, int VAR_5, long VAR_6)
{
 if (VAR_4 < 0 && VAR_5 < 0 && VAR_6 < 0)
  return -VAR_0;
 if (VAR_4 == 0)
  return -VAR_0;
 if (VAR_5 > VAR_3)
  return -VAR_0;
 if (VAR_5 < 0 &&
     VAR_6 > VAR_3)
  return -VAR_0;
 if (VAR_6 >= VAR_2 / VAR_1)
  return -VAR_0;
 if (VAR_5 >= 0 && VAR_6 >= 0 &&
     VAR_5 >= VAR_6)
  return -VAR_0;
 return 0;
}
