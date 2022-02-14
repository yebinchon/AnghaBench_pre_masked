
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeonfb_info {scalar_t__ is_mobility; int asleep; scalar_t__ has_CRTC2; } ;
struct fb_info {struct radeonfb_info* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,struct radeonfb_info*) ;

__attribute__((used)) static int FUNC_5 (unsigned VAR_4, unsigned VAR_5, unsigned VAR_6,
          unsigned VAR_7, unsigned VAR_8,
          struct fb_info *VAR_9)
{
        struct radeonfb_info *VAR_10 = VAR_9->par;
 u32 VAR_11, VAR_12 = 0;
 int VAR_13;

        if (!VAR_10->asleep) {
  if (VAR_10->is_mobility) {
   VAR_12 = FUNC_0(VAR_3);
   FUNC_2(VAR_3,
          VAR_12 & ~VAR_2);
  }


  if (VAR_10->has_CRTC2) {
   VAR_11 = FUNC_1(VAR_1);
   VAR_11 &= ~VAR_0;
   FUNC_3(VAR_1, VAR_11);
  }
 }

 VAR_13 = FUNC_4 (VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_10);

 if (!VAR_10->asleep && VAR_10->is_mobility)
  FUNC_2(VAR_3, VAR_12);

 return VAR_13;
}
