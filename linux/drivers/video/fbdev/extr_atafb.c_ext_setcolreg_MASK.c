
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {int dummy; } ;


 int VAR_0 ;


 int* VAR_1 ;
 int FUNC_0 (int,unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_1(unsigned int VAR_5, unsigned int VAR_6,
    unsigned int VAR_7, unsigned int VAR_8,
    unsigned int VAR_9, struct fb_info *VAR_10)
{
 unsigned char VAR_11 = (1 << VAR_2) - 1;

 if (!VAR_4)
  return 1;

 if (VAR_5 > 255)
  return 1;

 switch (VAR_3) {
 case 128:
  FUNC_0(0x3c8, VAR_5);
  VAR_0;
  FUNC_0(0x3c9, VAR_6 & VAR_11);
  VAR_0;
  FUNC_0(0x3c9, VAR_7 & VAR_11);
  VAR_0;
  FUNC_0(0x3c9, VAR_8 & VAR_11);
  VAR_0;
  return 0;

 case 129:
  FUNC_0((VAR_1[VAR_5] << 2) + 1, VAR_6);
  FUNC_0((VAR_1[VAR_5] << 2) + 1, VAR_7);
  FUNC_0((VAR_1[VAR_5] << 2) + 1, VAR_8);
  return 0;

 default:
  return 1;
 }
}
