
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int size; void* data; } ;
struct TYPE_4__ {TYPE_1__ otp; int dev; } ;
struct mt7615_dev {TYPE_2__ mt76; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (struct mt7615_dev*,int,int,void*) ;
 int FUNC_2 (struct mt7615_dev*,int ) ;
 int FUNC_3 (struct mt7615_dev*,int) ;

__attribute__((used)) static int FUNC_4(struct mt7615_dev *VAR_6)
{
 u32 VAR_7, VAR_8 = FUNC_2(VAR_6, VAR_3);
 int VAR_9, VAR_10 = VAR_2;
 void *VAR_11;

 VAR_7 = FUNC_3(VAR_6, VAR_8 + VAR_4);
 if (VAR_7 & VAR_5)
  return 0;

 VAR_6->mt76.otp.data = FUNC_0(VAR_6->mt76.dev, VAR_10, VAR_1);
 VAR_6->mt76.otp.size = VAR_10;
 if (!VAR_6->mt76.otp.data)
  return -VAR_0;

 VAR_11 = VAR_6->mt76.otp.data;
 for (VAR_9 = 0; VAR_9 + 16 <= VAR_10; VAR_9 += 16) {
  int VAR_12;

  VAR_12 = FUNC_1(VAR_6, VAR_8, VAR_9, VAR_11 + VAR_9);
  if (VAR_12)
   return VAR_12;
 }

 return 0;
}
