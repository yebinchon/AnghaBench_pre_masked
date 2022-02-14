
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {int screen_base; struct e3d_info* par; } ;
struct fb_image {int dummy; } ;
struct e3d_info {int lock; scalar_t__ fb8_buf_diff; } ;


 int FUNC_0 (struct fb_info*,struct fb_image const*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct fb_info *VAR_0, const struct fb_image *VAR_1)
{
 struct e3d_info *VAR_2 = VAR_0->par;
 unsigned long VAR_3;

 FUNC_1(&VAR_2->lock, VAR_3);
 FUNC_0(VAR_0, VAR_1);
 VAR_0->screen_base += VAR_2->fb8_buf_diff;
 FUNC_0(VAR_0, VAR_1);
 VAR_0->screen_base -= VAR_2->fb8_buf_diff;
 FUNC_2(&VAR_2->lock, VAR_3);
}
