
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int ,unsigned long*) ;

__attribute__((used)) static const char *FUNC_1(char *VAR_11, u16 VAR_12, unsigned long VAR_13)
{
 char *VAR_14 = VAR_11;
 if (VAR_12 & VAR_9)
  *VAR_14++ = 't';
 if (VAR_12 & VAR_10)
  *VAR_14++ = 'T';
 if (VAR_12 & VAR_7)
  *VAR_14++ = 'e';
 if (VAR_12 & VAR_6)
  *VAR_14++ = 'A';
 if (VAR_12 & VAR_8)
  *VAR_14++ = 'p';
 if (VAR_12 & VAR_0)
  *VAR_14++ = 'a';
 if (VAR_12 & VAR_1)
  *VAR_14++ = 'E';
 if (VAR_12 & VAR_2)
  *VAR_14++ = 'c';
 if (FUNC_0(VAR_4, &VAR_13))
  *VAR_14++ = 'H';
 if (FUNC_0(VAR_5, &VAR_13))
  *VAR_14++ = 'W';
 if (FUNC_0(VAR_3, &VAR_13))
  *VAR_14++ = 'F';
 *VAR_14 = 0;
 return VAR_11;
}
