
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tga_par {int vesa_blanked; } ;
struct fb_info {scalar_t__ par; } ;







 int VAR_0 ;
 int FUNC_0 (struct tga_par*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct tga_par*,int,int ) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;

__attribute__((used)) static int
FUNC_4(int VAR_5, struct fb_info *VAR_6)
{
 struct tga_par *VAR_7 = (struct tga_par *) VAR_6->par;
 u32 VAR_8, VAR_9, VAR_10;
 unsigned long VAR_11;

 FUNC_3(VAR_11);

 VAR_8 = FUNC_0(VAR_7, VAR_0);
 VAR_9 = FUNC_0(VAR_7, VAR_4);
 VAR_10 = FUNC_0(VAR_7, VAR_2);
 VAR_10 &= ~(VAR_3 | VAR_1);

 switch (VAR_5) {
 case 129:
  if (VAR_7->vesa_blanked) {
   FUNC_1(VAR_7, VAR_8 & 0xbfffffff, VAR_0);
   FUNC_1(VAR_7, VAR_9 & 0xbfffffff, VAR_4);
   VAR_7->vesa_blanked = 0;
  }
  FUNC_1(VAR_7, VAR_10 | VAR_3, VAR_2);
  break;

 case 131:
  FUNC_1(VAR_7, VAR_10 | VAR_3 | VAR_1,
         VAR_2);
  break;

 case 128:
  FUNC_1(VAR_7, VAR_9 | 0x40000000, VAR_4);
  FUNC_1(VAR_7, VAR_10 | VAR_1, VAR_2);
  VAR_7->vesa_blanked = 1;
  break;

 case 132:
  FUNC_1(VAR_7, VAR_8 | 0x40000000, VAR_0);
  FUNC_1(VAR_7, VAR_10 | VAR_1, VAR_2);
  VAR_7->vesa_blanked = 1;
  break;

 case 130:
  FUNC_1(VAR_7, VAR_8 | 0x40000000, VAR_0);
  FUNC_1(VAR_7, VAR_9 | 0x40000000, VAR_4);
  FUNC_1(VAR_7, VAR_10 | VAR_1, VAR_2);
  VAR_7->vesa_blanked = 1;
  break;
 }

 FUNC_2(VAR_11);
 return 0;
}
