
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct mt76x02_dev {TYPE_1__ mt76; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct mt76x02_dev*,int ) ;

int FUNC_4(struct mt76x02_dev *VAR_2)
{
 int VAR_3 = 20;
 u32 VAR_4;

 do {
  VAR_4 = FUNC_3(VAR_2, FUNC_0(VAR_0, 0));
  if (VAR_4 && ~VAR_4)
   break;
 } while (--VAR_3);

 if (!VAR_3) {
  FUNC_2(VAR_2->mt76.dev, "Error: BBP is not ready\n");
  return -VAR_1;
 }

 FUNC_1(VAR_2->mt76.dev, "BBP version %08x\n", VAR_4);
 return 0;
}
