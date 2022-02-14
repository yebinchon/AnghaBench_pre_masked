
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct mt7615_dev {TYPE_1__ mt76; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mt7615_dev*,int ,int ,int ,int) ;
 int FUNC_2 (struct mt7615_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct mt7615_dev *VAR_4)
{
 FUNC_2(VAR_4, VAR_1, VAR_2);
 if (!FUNC_1(VAR_4, VAR_1,
       VAR_3, 0, 500)) {
  FUNC_0(VAR_4->mt76.dev, "Timeout for driver own\n");
  return -VAR_0;
 }

 return 0;
}
