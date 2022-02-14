
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intelfb_info {int depth; unsigned int* pseudo_palette; } ;
struct fb_info {int dummy; } ;


 int FUNC_0 (char*,unsigned int,int) ;
 struct intelfb_info* FUNC_1 (struct fb_info*) ;
 int FUNC_2 (struct intelfb_info*,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_3(unsigned VAR_0, unsigned VAR_1, unsigned VAR_2,
        unsigned VAR_3, unsigned VAR_4,
        struct fb_info *VAR_5)
{
 struct intelfb_info *VAR_6 = FUNC_1(VAR_5);





 if (VAR_0 > 255)
  return 1;

 if (VAR_6->depth == 8) {
  VAR_1 >>= 8;
  VAR_2 >>= 8;
  VAR_3 >>= 8;

  FUNC_2(VAR_6, VAR_0, VAR_1, VAR_2, VAR_3,
        VAR_4);
 }

 if (VAR_0 < 16) {
  switch (VAR_6->depth) {
  case 15:
   VAR_6->pseudo_palette[VAR_0] = ((VAR_1 & 0xf800) >> 1) |
    ((VAR_2 & 0xf800) >> 6) |
    ((VAR_3 & 0xf800) >> 11);
   break;
  case 16:
   VAR_6->pseudo_palette[VAR_0] = (VAR_1 & 0xf800) |
    ((VAR_2 & 0xfc00) >> 5) |
    ((VAR_3 & 0xf800) >> 11);
   break;
  case 24:
   VAR_6->pseudo_palette[VAR_0] = ((VAR_1 & 0xff00) << 8) |
    (VAR_2 & 0xff00) |
    ((VAR_3 & 0xff00) >> 8);
   break;
  }
 }

 return 0;
}
