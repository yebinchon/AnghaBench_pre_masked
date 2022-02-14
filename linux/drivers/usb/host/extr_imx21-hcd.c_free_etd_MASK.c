
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct imx21 {TYPE_1__* etd; int dev; } ;
struct TYPE_2__ {scalar_t__ alloc; } ;


 int VAR_0 ;
 int FUNC_0 (struct imx21*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (struct imx21*,int) ;

__attribute__((used)) static void FUNC_4(struct imx21 *VAR_1, int VAR_2)
{
 if (VAR_2 < 0)
  return;

 if (VAR_2 >= VAR_0) {
  FUNC_1(VAR_1->dev, "BAD etd=%d!\n", VAR_2);
  return;
 }
 if (VAR_1->etd[VAR_2].alloc == 0) {
  FUNC_1(VAR_1->dev, "ETD %d already free!\n", VAR_2);
  return;
 }

 FUNC_0(VAR_1);
 FUNC_3(VAR_1, VAR_2);
 FUNC_2(&VAR_1->etd[VAR_2], 0, sizeof(VAR_1->etd[0]));
}
