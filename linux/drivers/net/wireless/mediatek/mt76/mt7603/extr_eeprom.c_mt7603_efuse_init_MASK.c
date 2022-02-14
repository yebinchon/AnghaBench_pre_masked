
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {int size; void* data; } ;
struct TYPE_4__ {TYPE_1__ otp; int dev; } ;
struct mt7603_dev {TYPE_2__ mt76; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (struct mt7603_dev*,scalar_t__,int,void*) ;
 scalar_t__ FUNC_2 (struct mt7603_dev*,int ) ;
 int FUNC_3 (struct mt7603_dev*,scalar_t__) ;

__attribute__((used)) static int
FUNC_4(struct mt7603_dev *VAR_6)
{
 u32 VAR_7 = FUNC_2(VAR_6, VAR_3);
 int VAR_8 = VAR_2;
 void *VAR_9;
 int VAR_10, VAR_11;

 if (FUNC_3(VAR_6, VAR_7 + VAR_4) & VAR_5)
  return 0;

 VAR_6->mt76.otp.data = FUNC_0(VAR_6->mt76.dev, VAR_8, VAR_1);
 VAR_6->mt76.otp.size = VAR_8;
 if (!VAR_6->mt76.otp.data)
  return -VAR_0;

 VAR_9 = VAR_6->mt76.otp.data;
 for (VAR_11 = 0; VAR_11 + 16 <= VAR_8; VAR_11 += 16) {
  VAR_10 = FUNC_1(VAR_6, VAR_7, VAR_11, VAR_9 + VAR_11);
  if (VAR_10)
   return VAR_10;
 }

 return 0;
}
