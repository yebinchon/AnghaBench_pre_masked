
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u32 ;
typedef int u16 ;
struct radeonfb_info {scalar_t__ is_mobility; int asleep; scalar_t__ has_CRTC2; } ;
struct fb_info {struct radeonfb_info* par; } ;
struct fb_cmap {int start; int len; int * transp; int * blue; int * green; int * red; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,int,int,int,int,struct radeonfb_info*) ;

__attribute__((used)) static int FUNC_5(struct fb_cmap *VAR_4, struct fb_info *VAR_5)
{
        struct radeonfb_info *VAR_6 = VAR_5->par;
 u16 *VAR_7, *VAR_8, *VAR_9, *VAR_10;
 u32 VAR_11, VAR_12 = 0;
 int VAR_13, VAR_14, VAR_15 = 0;

        if (!VAR_6->asleep) {
  if (VAR_6->is_mobility) {
   VAR_12 = FUNC_0(VAR_3);
   FUNC_2(VAR_3,
          VAR_12 & ~VAR_2);
  }


  if (VAR_6->has_CRTC2) {
   VAR_11 = FUNC_1(VAR_1);
   VAR_11 &= ~VAR_0;
   FUNC_3(VAR_1, VAR_11);
  }
 }

 VAR_7 = VAR_4->red;
 VAR_8 = VAR_4->green;
 VAR_9 = VAR_4->blue;
 VAR_10 = VAR_4->transp;
 VAR_14 = VAR_4->start;

 for (VAR_13 = 0; VAR_13 < VAR_4->len; VAR_13++) {
  u_int VAR_16, VAR_17, VAR_18, VAR_19 = 0xffff;

  VAR_16 = *VAR_7++;
  VAR_17 = *VAR_8++;
  VAR_18 = *VAR_9++;
  if (VAR_10)
   VAR_19 = *VAR_10++;
  VAR_15 = FUNC_4 (VAR_14++, VAR_16, VAR_17, VAR_18, VAR_19,
           VAR_6);
  if (VAR_15)
   break;
 }

 if (!VAR_6->asleep && VAR_6->is_mobility)
  FUNC_2(VAR_3, VAR_12);

 return VAR_15;
}
