
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ visual; } ;
struct fb_info {scalar_t__ pseudo_palette; TYPE_1__ fix; struct e3d_info* par; } ;
struct e3d_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct e3d_info*,unsigned int,int) ;

__attribute__((used)) static int FUNC_1(unsigned VAR_1,
    unsigned VAR_2, unsigned VAR_3, unsigned VAR_4,
    unsigned VAR_5, struct fb_info *VAR_6)
{
 struct e3d_info *VAR_7 = VAR_6->par;
 u32 VAR_8, VAR_9, VAR_10;
 u32 VAR_11, VAR_12, VAR_13;
 u32 VAR_14;

 if (VAR_1 >= 256)
  return 1;

 VAR_8 = VAR_2 >> 8;
 VAR_9 = VAR_3 >> 8;
 VAR_10 = VAR_4 >> 8;

 VAR_14 = (VAR_10 << 24) | (VAR_9 << 16) | (VAR_8 << 8);

 if (VAR_6->fix.visual == VAR_0 && VAR_1 < 16)
  ((u32 *)VAR_6->pseudo_palette)[VAR_1] = VAR_14;


 VAR_11 = VAR_2 >> 6;
 VAR_12 = VAR_3 >> 6;
 VAR_13 = VAR_4 >> 6;

 VAR_14 = (VAR_13 << 20) | (VAR_12 << 10) | (VAR_11 << 0);
 FUNC_0(VAR_7, VAR_1, VAR_14);

 return 0;
}
