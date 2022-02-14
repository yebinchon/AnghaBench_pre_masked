
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 unsigned char FUNC_0 (scalar_t__) ;

__attribute__((used)) static int
FUNC_1( unsigned long VAR_5 )
{
 unsigned char VAR_6;

 VAR_6 = FUNC_0( VAR_5 + VAR_1 );
 if( VAR_6 != 0xff && VAR_6 != 0x00 ) {
  VAR_6 &= ~VAR_3;
  if( VAR_6 & VAR_0 )
   VAR_6 |= VAR_3;

  if( VAR_4 & (1 << (VAR_6 >> 4)) )
   return 0;
 }

 return -VAR_2;
}
