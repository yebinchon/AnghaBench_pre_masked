
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct tm6000_core {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tm6000_core*,int,int,int,int,int*,int) ;

int FUNC_1(struct tm6000_core *VAR_3, u8 VAR_4, u16 VAR_5,
      u16 VAR_6, u16 VAR_7)
{
 int VAR_8;
 u8 VAR_9[1];
 u8 VAR_10;

 VAR_8 = FUNC_0(VAR_3, VAR_0 | VAR_2, VAR_4,
     VAR_5, 0, VAR_9, 1);

 if (VAR_8 < 0)
  return VAR_8;

 VAR_10 = (VAR_9[0] & ~VAR_7) | (VAR_6 & VAR_7);

 if (VAR_10 == VAR_9[0])
  return 0;

 return FUNC_0(VAR_3, VAR_1 | VAR_2,
          VAR_4, VAR_5, VAR_10, ((void*)0), 0);
}
