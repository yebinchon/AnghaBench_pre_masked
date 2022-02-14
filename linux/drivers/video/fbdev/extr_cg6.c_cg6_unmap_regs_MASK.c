
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct platform_device {int * resource; } ;
struct TYPE_2__ {int smem_len; } ;
struct fb_info {TYPE_1__ fix; scalar_t__ screen_base; } ;
struct cg6_thc {int dummy; } ;
struct cg6_tec {int dummy; } ;
struct cg6_par {scalar_t__ fhc; scalar_t__ bt; scalar_t__ thc; scalar_t__ tec; scalar_t__ fbc; } ;
struct bt_regs {int dummy; } ;


 int FUNC_0 (int *,scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(struct platform_device *VAR_0, struct fb_info *VAR_1,
      struct cg6_par *VAR_2)
{
 if (VAR_2->fbc)
  FUNC_0(&VAR_0->resource[0], VAR_2->fbc, 4096);
 if (VAR_2->tec)
  FUNC_0(&VAR_0->resource[0], VAR_2->tec, sizeof(struct cg6_tec));
 if (VAR_2->thc)
  FUNC_0(&VAR_0->resource[0], VAR_2->thc, sizeof(struct cg6_thc));
 if (VAR_2->bt)
  FUNC_0(&VAR_0->resource[0], VAR_2->bt, sizeof(struct bt_regs));
 if (VAR_2->fhc)
  FUNC_0(&VAR_0->resource[0], VAR_2->fhc, sizeof(u32));

 if (VAR_1->screen_base)
  FUNC_0(&VAR_0->resource[0], VAR_1->screen_base,
      VAR_1->fix.smem_len);
}
