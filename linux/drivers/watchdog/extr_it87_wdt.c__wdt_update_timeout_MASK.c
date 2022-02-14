
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_0 (unsigned int,int ) ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static void FUNC_1(unsigned int VAR_10)
{
 unsigned char VAR_11 = VAR_4;

 if (VAR_9)
  VAR_11 = 0;

 if (VAR_10 <= VAR_8)
  VAR_11 |= VAR_6;
 else
  VAR_10 /= 60;

 if (VAR_7 != VAR_0)
  VAR_11 |= VAR_5;

 FUNC_0(VAR_11, VAR_1);
 FUNC_0(VAR_10, VAR_2);
 if (VAR_8 > 255)
  FUNC_0(VAR_10 >> 8, VAR_3);
}
