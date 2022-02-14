
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ab8500_fg {int dev; TYPE_2__* bm; } ;
struct TYPE_4__ {TYPE_1__* fg_params; } ;
struct TYPE_3__ {int battok_falling_th_sel0; int battok_raising_th_sel1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ab8500_fg*,int) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int ,char*,int,int,int) ;
 int FUNC_3 (int ,char*,int,int,int) ;

__attribute__((used)) static int FUNC_4(struct ab8500_fg *VAR_4)
{
 int VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_6 = VAR_4->bm->fg_params->battok_falling_th_sel0;
 VAR_7 = VAR_4->bm->fg_params->battok_raising_th_sel1;

 VAR_8 = FUNC_0(VAR_4, VAR_6);
 VAR_9 = FUNC_0(VAR_4, VAR_7);

 VAR_5 = VAR_3 + VAR_8 * VAR_2;

 if (VAR_5 != VAR_6)
  FUNC_3(VAR_4->dev, "Invalid voltage step:%d, using %d %d\n",
   VAR_6, VAR_5, VAR_8);

 VAR_5 = VAR_3 + VAR_9 * VAR_2;

 if (VAR_5 != VAR_7)
  FUNC_3(VAR_4->dev, "Invalid voltage step:%d, using %d %d\n",
   VAR_7, VAR_5, VAR_9);

 VAR_11 = VAR_8 | (VAR_9 << 4);

 FUNC_2(VAR_4->dev, "using: %x %d %d\n", VAR_11, VAR_8, VAR_9);
 VAR_10 = FUNC_1(VAR_4->dev, VAR_1,
  VAR_0, VAR_11);
 return VAR_10;
}
