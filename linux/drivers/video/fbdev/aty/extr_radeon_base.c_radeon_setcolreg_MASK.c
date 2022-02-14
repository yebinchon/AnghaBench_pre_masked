
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct radeonfb_info {int bpp; int depth; TYPE_2__* info; TYPE_1__* palette; int asleep; } ;
struct TYPE_4__ {int* pseudo_palette; } ;
struct TYPE_3__ {unsigned int red; unsigned int green; unsigned int blue; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2 (unsigned VAR_3, unsigned VAR_4, unsigned VAR_5,
                             unsigned VAR_6, unsigned VAR_7,
        struct radeonfb_info *VAR_8)
{
 u32 VAR_9;
 unsigned int VAR_10;


 if (VAR_3 > 255)
  return -VAR_0;

 VAR_4 >>= 8;
 VAR_5 >>= 8;
 VAR_6 >>= 8;
 VAR_8->palette[VAR_3].red = VAR_4;
 VAR_8->palette[VAR_3].green = VAR_5;
 VAR_8->palette[VAR_3].blue = VAR_6;


        VAR_9 = VAR_3;

        if (!VAR_8->asleep) {
  FUNC_1(9);

  if (VAR_8->bpp == 16) {
   VAR_9 = VAR_3 * 8;

   if (VAR_8->depth == 16 && VAR_3 > 63)
    return -VAR_0;
   if (VAR_8->depth == 15 && VAR_3 > 31)
    return -VAR_0;




   if (VAR_8->depth == 16) {
                  FUNC_0(VAR_2, VAR_9>>1);
                   FUNC_0(VAR_1,
           (VAR_8->palette[VAR_3>>1].red << 16) |
                          (VAR_5 << 8) |
           (VAR_8->palette[VAR_3>>1].blue));
                  VAR_5 = VAR_8->palette[VAR_3<<1].green;
          }
  }

  if (VAR_8->depth != 16 || VAR_3 < 32) {
   FUNC_0(VAR_2, VAR_9);
   FUNC_0(VAR_1, (VAR_4 << 16) |
          (VAR_5 << 8) | VAR_6);
  }
 }
  if (VAR_3 < 16) {
  u32 *VAR_11 = VAR_8->info->pseudo_palette;
         switch (VAR_8->depth) {
  case 15:
   VAR_11[VAR_3] = (VAR_3 << 10) | (VAR_3 << 5) | VAR_3;
   break;
  case 16:
   VAR_11[VAR_3] = (VAR_3 << 11) | (VAR_3 << 5) | VAR_3;
   break;
  case 24:
   VAR_11[VAR_3] = (VAR_3 << 16) | (VAR_3 << 8) | VAR_3;
   break;
  case 32:
   VAR_10 = (VAR_3 << 8) | VAR_3;
   VAR_11[VAR_3] = (VAR_10 << 16) | VAR_10;
   break;
  }
        }
 return 0;
}
