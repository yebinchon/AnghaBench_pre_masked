
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int data; } ;
struct TYPE_4__ {TYPE_1__ eeprom; } ;
struct mt76x02_dev {TYPE_2__ mt76; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (struct mt76x02_dev*,int ,int ,int ,int ) ;
 int FUNC_2 (struct mt76x02_dev*) ;
 int FUNC_3 (struct mt76x02_dev*) ;

__attribute__((used)) static int FUNC_4(struct mt76x02_dev *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(&VAR_2->mt76, VAR_0);
 if (VAR_3 < 0)
  return VAR_3;

 if (VAR_3 && !FUNC_2(VAR_2))
  return 0;

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 return FUNC_1(VAR_2, 0, VAR_2->mt76.eeprom.data,
          VAR_0, VAR_1);
}
