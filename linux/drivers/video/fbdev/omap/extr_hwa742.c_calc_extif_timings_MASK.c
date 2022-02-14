
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* fbdev; int extif_clk_period; TYPE_2__* extif; } ;
struct TYPE_5__ {int (* get_clk_info ) (int *,int*) ;} ;
struct TYPE_4__ {int dev; } ;


 scalar_t__ FUNC_0 (unsigned long,int) ;
 scalar_t__ FUNC_1 (unsigned long,int) ;
 int FUNC_2 (int ,char*) ;
 TYPE_3__ VAR_0 ;
 int FUNC_3 (int *,int*) ;

__attribute__((used)) static int FUNC_4(unsigned long VAR_1, int *VAR_2)
{
 int VAR_3;
 int VAR_4;

 VAR_0->get_clk_info(&VAR_0, &VAR_3);
 for (VAR_4 = 1; VAR_4 < VAR_3; VAR_4++) {
  if (FUNC_1(VAR_1, VAR_4) == 0)
   break;
 }
 if (VAR_4 >= VAR_3)
  goto err;

 *VAR_2 = VAR_4;

 for (VAR_4 = 1; VAR_4 < VAR_3; VAR_4++) {
  if (FUNC_0(VAR_1, VAR_4) == 0)
   break;
 }

 if (VAR_4 >= VAR_3)
  goto err;

 return 0;

err:
 FUNC_2(VAR_0->dev, "can't setup timings\n");
 return -1;
}
