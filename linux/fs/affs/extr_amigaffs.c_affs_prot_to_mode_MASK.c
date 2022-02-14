
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

umode_t
FUNC_0(u32 VAR_9)
{
 umode_t VAR_10 = 0;

 if (!(VAR_9 & VAR_5))
  VAR_10 |= 0200;
 if (!(VAR_9 & VAR_4))
  VAR_10 |= 0400;
 if (!(VAR_9 & VAR_3))
  VAR_10 |= 0100;
 if (VAR_9 & VAR_2)
  VAR_10 |= 0020;
 if (VAR_9 & VAR_1)
  VAR_10 |= 0040;
 if (VAR_9 & VAR_0)
  VAR_10 |= 0010;
 if (VAR_9 & VAR_8)
  VAR_10 |= 0002;
 if (VAR_9 & VAR_7)
  VAR_10 |= 0004;
 if (VAR_9 & VAR_6)
  VAR_10 |= 0001;

 return VAR_10;
}
