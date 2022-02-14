
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int PanelSelfDetected; scalar_t__ DDCPortMixup; } ;
struct sis_video_info {int vbflags2; TYPE_1__ SiS_Pr; int sisvga_engine; int vbflags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 unsigned short FUNC_1 (TYPE_1__*,int ,int ,unsigned short,int,unsigned char*,int) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,int,int,int) ;
 int FUNC_4 (int ,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_5(struct sis_video_info *VAR_4)
{
 unsigned char VAR_5[256];
 unsigned short VAR_6, VAR_7, VAR_8;
 u8 VAR_9, VAR_10 = 0, VAR_11 = 0;
 u16 VAR_12, VAR_13;

 VAR_4->SiS_Pr.PanelSelfDetected = 0;


 if(!(VAR_4->vbflags2 & VAR_3))
  return;
 if(VAR_4->vbflags2 & VAR_1)
  return;


 VAR_9 = FUNC_0(VAR_0, 0x32);
 if(VAR_9 & 0x08)
  return;

 VAR_7 = 1;
 if(VAR_4->SiS_Pr.DDCPortMixup)
  VAR_7 = 0;


 VAR_6 = FUNC_1(&VAR_4->SiS_Pr, VAR_4->vbflags, VAR_4->sisvga_engine,
    VAR_7, 0, &VAR_5[0], VAR_4->vbflags2);

 if((!VAR_6) || (VAR_6 == 0xffff) || (!(VAR_6 & 0x02)))
  return;


 VAR_8 = 3;
 do {
  VAR_6 = FUNC_1(&VAR_4->SiS_Pr, VAR_4->vbflags,
    VAR_4->sisvga_engine, VAR_7, 1,
    &VAR_5[0], VAR_4->vbflags2);
 } while((VAR_6) && VAR_8--);

 if(VAR_6)
  return;


 if(!(VAR_5[0x14] & 0x80))
  return;


 if(!(VAR_5[0x18] & 0x02))
  return;

 VAR_12 = VAR_5[0x38] | ((VAR_5[0x3a] & 0xf0) << 4);
 VAR_13 = VAR_5[0x3b] | ((VAR_5[0x3d] & 0xf0) << 4);

 switch(VAR_12) {
  case 1024:
   if(VAR_13 == 768)
    VAR_11 = 0x02;
   break;
  case 1280:
   if(VAR_13 == 1024)
    VAR_11 = 0x03;
   break;
  case 1600:
   if((VAR_13 == 1200) && (VAR_4->vbflags2 & VAR_2))
    VAR_11 = 0x0b;
   break;
 }

 if(!VAR_11)
  return;

 if(VAR_5[0x23])
  VAR_10 |= 0x10;

 if((VAR_5[0x47] & 0x18) == 0x18)
  VAR_10 |= ((((VAR_5[0x47] & 0x06) ^ 0x06) << 5) | 0x20);
 else
  VAR_10 |= 0xc0;

 FUNC_2(VAR_0, 0x36, VAR_11);
 VAR_10 &= 0xf1;
 FUNC_3(VAR_0, 0x37, 0x0c, VAR_10);
 FUNC_4(VAR_0, 0x32, 0x08);

 VAR_4->SiS_Pr.PanelSelfDetected = 1;
}
