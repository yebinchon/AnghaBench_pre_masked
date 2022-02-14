
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int data; } ;
struct TYPE_4__ {void* data; int size; } ;
struct TYPE_6__ {TYPE_2__ eeprom; TYPE_1__ otp; int dev; } ;
struct mt76x02_dev {TYPE_3__ mt76; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,void*,int ) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_3 (struct mt76x02_dev*,int ,void*,int ,int ) ;
 int FUNC_4 (struct mt76x02_dev*,void*) ;
 int FUNC_5 (struct mt76x02_dev*) ;

__attribute__((used)) static int
FUNC_6(struct mt76x02_dev *VAR_5)
{
 void *VAR_6;
 bool VAR_7;
 int VAR_8;

 VAR_8 = FUNC_2(&VAR_5->mt76, VAR_3);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_7 = VAR_8;
 if (VAR_7)
  VAR_7 = !FUNC_5(VAR_5);

 VAR_5->mt76.otp.data = FUNC_0(VAR_5->mt76.dev, VAR_3,
       VAR_2);
 VAR_5->mt76.otp.size = VAR_3;
 if (!VAR_5->mt76.otp.data)
  return -VAR_1;

 VAR_6 = VAR_5->mt76.otp.data;

 if (FUNC_3(VAR_5, 0, VAR_6, VAR_3,
       VAR_4))
  goto out;

 if (VAR_7) {
  FUNC_4(VAR_5, VAR_6);
 } else {

  VAR_7 = 1;
  FUNC_1(VAR_5->mt76.eeprom.data, VAR_6, VAR_3);
 }

out:
 if (!VAR_7)
  return -VAR_0;

 return 0;
}
