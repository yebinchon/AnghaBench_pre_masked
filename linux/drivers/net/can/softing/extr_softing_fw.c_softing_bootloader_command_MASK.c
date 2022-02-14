
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct softing {TYPE_1__* pdev; int * dpram; } ;
typedef int int16_t ;
struct TYPE_2__ {int dev; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*,char const*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *) ;
 int VAR_8 ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int,unsigned long) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 () ;

int FUNC_8(struct softing *VAR_9, int16_t VAR_10,
  const char *VAR_11)
{
 int VAR_12;
 unsigned long VAR_13;

 FUNC_2(VAR_5, &VAR_9->dpram[VAR_1]);
 FUNC_2(VAR_10, &VAR_9->dpram[VAR_0]);

 FUNC_7();
 VAR_13 = VAR_8 + 3 * VAR_4;

 do {
  VAR_12 = FUNC_1(&VAR_9->dpram[VAR_1]);

  FUNC_3();
  if (VAR_12 == VAR_6)
   return 0;
  if (FUNC_5(VAR_8, VAR_13))
   break;

  FUNC_6(500, 10000);
 } while (!FUNC_4(VAR_7));

 VAR_12 = (VAR_12 == VAR_5) ? -VAR_3 : -VAR_2;
 FUNC_0(&VAR_9->pdev->dev, "bootloader %s failed (%i)\n", VAR_11, VAR_12);
 return VAR_12;
}
