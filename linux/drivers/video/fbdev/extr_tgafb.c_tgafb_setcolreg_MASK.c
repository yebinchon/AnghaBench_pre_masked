
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct tga_par {scalar_t__ tga_type; int dev; } ;
struct fb_info {scalar_t__ pseudo_palette; scalar_t__ par; } ;


 int FUNC_0 (struct tga_par*,unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (struct tga_par*,unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct tga_par*,unsigned int,int ) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (struct tga_par*,unsigned int,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(unsigned VAR_7, unsigned VAR_8, unsigned VAR_9, unsigned VAR_10,
  unsigned VAR_11, struct fb_info *VAR_12)
{
 struct tga_par *VAR_13 = (struct tga_par *) VAR_12->par;
 int VAR_14 = FUNC_5(VAR_13->dev);
 int VAR_15 = FUNC_3(VAR_13->dev);

 if (VAR_7 > 255)
  return 1;
 VAR_8 >>= 8;
 VAR_9 >>= 8;
 VAR_10 >>= 8;

 if (VAR_13->tga_type == VAR_6 && VAR_14) {
  FUNC_2(VAR_13, VAR_7, VAR_2);
  FUNC_4(VAR_13, VAR_3, VAR_5);
  FUNC_4(VAR_13, VAR_8|(VAR_3<<8),VAR_4);
  FUNC_4(VAR_13, VAR_9|(VAR_3<<8),VAR_4);
  FUNC_4(VAR_13, VAR_10|(VAR_3<<8),VAR_4);
 } else if (VAR_13->tga_type == VAR_6 && VAR_15) {
  FUNC_0(VAR_13, VAR_7);
  FUNC_4(VAR_13, VAR_0 << 2, VAR_5);
  FUNC_4(VAR_13, VAR_8, VAR_4);
  FUNC_4(VAR_13, VAR_9, VAR_4);
  FUNC_4(VAR_13, VAR_10, VAR_4);
 } else {
  if (VAR_7 < 16) {
   u32 VAR_16 = (VAR_7 << 16) | (VAR_7 << 8) | VAR_7;
   ((u32 *)VAR_12->pseudo_palette)[VAR_7] = VAR_16;
  }
  FUNC_1(VAR_13, VAR_7);
  FUNC_4(VAR_13, VAR_1 << 2, VAR_5);
  FUNC_4(VAR_13, VAR_8, VAR_4);
  FUNC_4(VAR_13, VAR_9, VAR_4);
  FUNC_4(VAR_13, VAR_10, VAR_4);
 }

 return 0;
}
