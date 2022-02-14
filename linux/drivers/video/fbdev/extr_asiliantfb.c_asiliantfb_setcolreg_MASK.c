
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
typedef int u32 ;
struct TYPE_3__ {int offset; } ;
struct TYPE_4__ {TYPE_1__ red; } ;
struct fb_info {scalar_t__ pseudo_palette; TYPE_2__ var; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(u_int VAR_1, u_int VAR_2, u_int VAR_3, u_int VAR_4,
        u_int VAR_5, struct fb_info *VAR_6)
{
 if (VAR_1 > 255)
  return 1;
 VAR_2 >>= 8;
 VAR_3 >>= 8;
 VAR_4 >>= 8;


 FUNC_1(VAR_1, VAR_0 + 0x790);
 FUNC_0(1);
 FUNC_1(VAR_2, VAR_0 + 0x791);
 FUNC_1(VAR_3, VAR_0 + 0x791);
 FUNC_1(VAR_4, VAR_0 + 0x791);

 if (VAR_1 < 16) {
  switch(VAR_6->var.red.offset) {
  case 10:
   ((u32 *)(VAR_6->pseudo_palette))[VAR_1] =
    ((VAR_2 & 0xf8) << 7) |
    ((VAR_3 & 0xf8) << 2) |
    ((VAR_4 & 0xf8) >> 3);
   break;
  case 11:
   ((u32 *)(VAR_6->pseudo_palette))[VAR_1] =
    ((VAR_2 & 0xf8) << 8) |
    ((VAR_3 & 0xfc) << 3) |
    ((VAR_4 & 0xf8) >> 3);
   break;
  case 16:
   ((u32 *)(VAR_6->pseudo_palette))[VAR_1] =
    (VAR_2 << 16) |
    (VAR_3 << 8) |
    (VAR_4);
   break;
  }
 }

 return 0;
}
