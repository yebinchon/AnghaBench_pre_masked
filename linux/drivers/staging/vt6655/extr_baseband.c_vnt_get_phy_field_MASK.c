
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct vnt_private {int byPreambleType; } ;
struct vnt_phy_field {int signal; int service; void* len; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;

void FUNC_1(struct vnt_private *VAR_2, u32 VAR_3,
         u16 VAR_4, u8 VAR_5, struct vnt_phy_field *VAR_6)
{
 u32 VAR_7;
 u32 VAR_8 = 0;
 u32 VAR_9;
 int VAR_10;
 u8 VAR_11 = VAR_2->byPreambleType;

 VAR_7 = VAR_3 * 8;
 VAR_10 = 0;

 switch (VAR_4) {
 case 136:
  VAR_8 = VAR_7;

  VAR_6->signal = 0x00;

  break;
 case 134:
  VAR_8 = VAR_7 / 2;

  if (VAR_11 == 1)
   VAR_6->signal = 0x09;
  else
   VAR_6->signal = 0x01;

  break;
 case 130:
  VAR_8 = (VAR_7 * 10) / 55;
  VAR_9 = (VAR_8 * 55) / 10;

  if (VAR_9 != VAR_7)
   VAR_8++;

  if (VAR_11 == 1)
   VAR_6->signal = 0x0a;
  else
   VAR_6->signal = 0x02;

  break;
 case 139:
  VAR_8 = VAR_7 / 11;
  VAR_9 = VAR_8 * 11;

  if (VAR_9 != VAR_7) {
   VAR_8++;

   if ((VAR_7 - VAR_9) <= 3)
    VAR_10 = 1;
  }

  if (VAR_11 == 1)
   VAR_6->signal = 0x0b;
  else
   VAR_6->signal = 0x03;

  break;
 case 129:
  if (VAR_5 == VAR_0)
   VAR_6->signal = 0x9b;
  else
   VAR_6->signal = 0x8b;

  break;
 case 128:
  if (VAR_5 == VAR_0)
   VAR_6->signal = 0x9f;
  else
   VAR_6->signal = 0x8f;

  break;
 case 138:
  if (VAR_5 == VAR_0)
   VAR_6->signal = 0x9a;
  else
   VAR_6->signal = 0x8a;

  break;
 case 137:
  if (VAR_5 == VAR_0)
   VAR_6->signal = 0x9e;
  else
   VAR_6->signal = 0x8e;

  break;
 case 135:
  if (VAR_5 == VAR_0)
   VAR_6->signal = 0x99;
  else
   VAR_6->signal = 0x89;

  break;
 case 133:
  if (VAR_5 == VAR_0)
   VAR_6->signal = 0x9d;
  else
   VAR_6->signal = 0x8d;

  break;
 case 132:
  if (VAR_5 == VAR_0)
   VAR_6->signal = 0x98;
  else
   VAR_6->signal = 0x88;

  break;
 case 131:
  if (VAR_5 == VAR_0)
   VAR_6->signal = 0x9c;
  else
   VAR_6->signal = 0x8c;
  break;
 default:
  if (VAR_5 == VAR_0)
   VAR_6->signal = 0x9c;
  else
   VAR_6->signal = 0x8c;
  break;
 }

 if (VAR_5 == VAR_1) {
  VAR_6->service = 0x00;
  if (VAR_10)
   VAR_6->service |= 0x80;
  VAR_6->len = FUNC_0((u16)VAR_8);
 } else {
  VAR_6->service = 0x00;
  VAR_6->len = FUNC_0((u16)VAR_3);
 }
}
