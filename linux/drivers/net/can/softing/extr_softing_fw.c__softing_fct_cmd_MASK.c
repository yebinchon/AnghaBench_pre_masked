
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct softing {TYPE_1__* pdev; int * dpram; } ;
typedef int int16_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*,char const*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int,int *) ;
 int VAR_8 ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int,unsigned long) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 () ;

__attribute__((used)) static int FUNC_9(struct softing *VAR_9, int16_t VAR_10, uint16_t VAR_11,
  const char *VAR_12)
{
 int VAR_13;
 unsigned long VAR_14;

 FUNC_3(VAR_10, &VAR_9->dpram[VAR_1]);
 FUNC_4(VAR_11 >> 8, &VAR_9->dpram[VAR_0 + 1]);
 FUNC_4(VAR_11, &VAR_9->dpram[VAR_0]);

 FUNC_8();
 VAR_14 = VAR_8 + 1 * VAR_5;

 do {

  VAR_13 = FUNC_2(&VAR_9->dpram[VAR_0]) +
   (FUNC_2(&VAR_9->dpram[VAR_0 + 1]) << 8);

  FUNC_5();
  if (VAR_13 == VAR_7)

   return FUNC_1(&VAR_9->dpram[VAR_2]);

  if ((VAR_13 != VAR_11) || FUNC_6(VAR_8, VAR_14))
   break;

  FUNC_7(500, 10000);
 } while (1);

 VAR_13 = (VAR_13 == VAR_6) ? -VAR_4 : -VAR_3;
 FUNC_0(&VAR_9->pdev->dev, "firmware %s failed (%i)\n", VAR_12, VAR_13);
 return VAR_13;
}
