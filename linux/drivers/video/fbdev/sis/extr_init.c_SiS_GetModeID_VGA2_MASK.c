
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned short FUNC_0 (int,int ,int,int,int,int,int ,int ) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;

unsigned short
FUNC_1(int VAR_3, unsigned int VAR_4, int VAR_5, int VAR_6, int VAR_7,
   unsigned int VAR_8)
{
   if(!(VAR_8 & VAR_2)) return 0;

   if(VAR_5 >= 1920) return 0;

   switch(VAR_5)
   {
 case 1600:
  if(VAR_6 == 1200) {
   if(VAR_3 != VAR_0) return 0;
   if(!(VAR_8 & VAR_1)) return 0;
  }
  break;
 case 1680:
  if(VAR_6 == 1050) {
   if(VAR_3 != VAR_0) return 0;
   if(!(VAR_8 & VAR_1)) return 0;
  }
  break;
   }

   return FUNC_0(VAR_3, 0, VAR_5, VAR_6, VAR_7, 0, 0, 0);
}
