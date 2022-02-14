
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct solo_dev {int tw28_cnt; int nr_chans; int tw2865; int tw2864; int tw2815; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct solo_dev*) ;
 int FUNC_3 (struct solo_dev*,int ,int ,int) ;
 int FUNC_4 (struct solo_dev*,int ) ;
 int FUNC_5 (struct solo_dev*,int ) ;
 int FUNC_6 (struct solo_dev*,int ) ;

int FUNC_7(struct solo_dev *VAR_2)
{
 int VAR_3;
 u8 VAR_4;

 VAR_2->tw28_cnt = 0;


 for (VAR_3 = 0; VAR_3 < VAR_2->nr_chans / 4; VAR_3++) {
  VAR_4 = FUNC_3(VAR_2, VAR_1,
       FUNC_0(VAR_3), 0xFF);

  switch (VAR_4 >> 3) {
  case 0x18:
   VAR_2->tw2865 |= 1 << VAR_3;
   VAR_2->tw28_cnt++;
   break;
  case 0x0c:
  case 0x0d:
   VAR_2->tw2864 |= 1 << VAR_3;
   VAR_2->tw28_cnt++;
   break;
  default:
   VAR_4 = FUNC_3(VAR_2, VAR_1,
        FUNC_0(VAR_3),
        0x59);
   if ((VAR_4 >> 3) == 0x04) {
    VAR_2->tw2815 |= 1 << VAR_3;
    VAR_2->tw28_cnt++;
   }
  }
 }

 if (VAR_2->tw28_cnt != (VAR_2->nr_chans >> 2)) {
  FUNC_1(&VAR_2->pdev->dev,
   "Could not initialize any techwell chips\n");
  return -VAR_0;
 }

 FUNC_2(VAR_2);

 for (VAR_3 = 0; VAR_3 < VAR_2->tw28_cnt; VAR_3++) {
  if ((VAR_2->tw2865 & (1 << VAR_3)))
   FUNC_6(VAR_2, FUNC_0(VAR_3));
  else if ((VAR_2->tw2864 & (1 << VAR_3)))
   FUNC_5(VAR_2, FUNC_0(VAR_3));
  else
   FUNC_4(VAR_2, FUNC_0(VAR_3));
 }

 return 0;
}
