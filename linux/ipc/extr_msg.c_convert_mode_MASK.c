
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static inline int FUNC_0(long *VAR_9, int VAR_10)
{
 if (VAR_10 & VAR_2)
  return VAR_8;






 if (*VAR_9 == 0)
  return VAR_4;
 if (*VAR_9 < 0) {
  if (*VAR_9 == VAR_1)
   *VAR_9 = VAR_0;
  else
   *VAR_9 = -*VAR_9;
  return VAR_6;
 }
 if (VAR_10 & VAR_3)
  return VAR_7;
 return VAR_5;
}
