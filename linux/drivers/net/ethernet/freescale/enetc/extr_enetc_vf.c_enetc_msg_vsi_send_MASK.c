
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct enetc_si {TYPE_1__* pdev; int hw; } ;
struct enetc_msg_swbd {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,struct enetc_msg_swbd*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct enetc_si *VAR_5, struct enetc_msg_swbd *VAR_6)
{
 int VAR_7 = 100;
 u32 VAR_8;

 FUNC_2(&VAR_5->hw, VAR_6);

 do {
  VAR_8 = FUNC_3(&VAR_5->hw, VAR_1);
  if (!(VAR_8 & VAR_2))
   break;

  FUNC_4(1000, 2000);
 } while (--VAR_7);

 if (!VAR_7)
  return -VAR_4;


 if (VAR_8 & VAR_3) {
  FUNC_1(&VAR_5->pdev->dev, "VSI command execute error: %d\n",
   FUNC_0(VAR_8));
  return -VAR_0;
 }

 return 0;
}
