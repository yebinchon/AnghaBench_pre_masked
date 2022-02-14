
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s3c_fb_win {struct fb_info* fbinfo; } ;
struct s3c_fb {int dev; } ;
struct TYPE_2__ {int smem_start; int smem_len; } ;
struct fb_info {TYPE_1__ fix; scalar_t__ screen_buffer; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(struct s3c_fb *VAR_0, struct s3c_fb_win *VAR_1)
{
 struct fb_info *VAR_2 = VAR_1->fbinfo;

 if (VAR_2->screen_buffer)
  FUNC_1(VAR_0->dev, FUNC_0(VAR_2->fix.smem_len),
       VAR_2->screen_buffer, VAR_2->fix.smem_start);
}
