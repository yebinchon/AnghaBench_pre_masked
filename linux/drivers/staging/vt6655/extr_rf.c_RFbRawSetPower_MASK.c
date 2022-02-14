
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnt_private {unsigned char byMaxPwrLevel; int byRFType; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vnt_private*,unsigned long) ;
 unsigned int VAR_3 ;



 unsigned long* VAR_4 ;

bool FUNC_1(struct vnt_private *VAR_5, unsigned char VAR_6,
      unsigned int VAR_7)
{
 bool VAR_8 = 1;
 unsigned long VAR_9 = 0;

 if (VAR_6 >= VAR_5->byMaxPwrLevel)
  return 0;

 switch (VAR_5->byRFType) {
 case 130:
  VAR_8 &= FUNC_0(VAR_5, VAR_4[VAR_6]);
  if (VAR_7 <= VAR_3)
   VAR_8 &= FUNC_0(VAR_5, 0x0001B400 + (VAR_0 << 3) + VAR_2);
  else
   VAR_8 &= FUNC_0(VAR_5, 0x0005A400 + (VAR_0 << 3) + VAR_2);

  break;

 case 128:
  VAR_8 &= FUNC_0(VAR_5, VAR_4[VAR_6]);
  if (VAR_7 <= VAR_3) {
   VAR_8 &= FUNC_0(VAR_5, 0x040C1400 + (VAR_0 << 3) + VAR_2);
   VAR_8 &= FUNC_0(VAR_5, 0x00299B00 + (VAR_0 << 3) + VAR_2);
  } else {
   VAR_8 &= FUNC_0(VAR_5, 0x0005A400 + (VAR_0 << 3) + VAR_2);
   VAR_8 &= FUNC_0(VAR_5, 0x00099B00 + (VAR_0 << 3) + VAR_2);
  }

  break;

 case 129:



  VAR_9 = 0x080C0B00 | ((VAR_6) << 12) |
   (VAR_1 << 3) | VAR_2;

  VAR_8 &= FUNC_0(VAR_5, VAR_9);
  break;

 default:
  break;
 }
 return VAR_8;
}
