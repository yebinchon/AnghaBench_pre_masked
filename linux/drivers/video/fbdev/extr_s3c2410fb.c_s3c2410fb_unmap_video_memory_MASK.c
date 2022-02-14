
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s3c2410fb_info {int dev; } ;
struct TYPE_2__ {int smem_start; int smem_len; } ;
struct fb_info {TYPE_1__ fix; int screen_base; struct s3c2410fb_info* par; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static inline void FUNC_2(struct fb_info *VAR_0)
{
 struct s3c2410fb_info *VAR_1 = VAR_0->par;

 FUNC_1(VAR_1->dev, FUNC_0(VAR_0->fix.smem_len),
      VAR_0->screen_base, VAR_0->fix.smem_start);
}
