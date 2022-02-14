
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct mt7601u_dev {TYPE_1__* ee; int dev; } ;
struct TYPE_2__ {scalar_t__ lna_gain; scalar_t__ ref_temp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int FUNC_0 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 TYPE_1__* FUNC_2 (int ,int,int ) ;
 int FUNC_3 (scalar_t__*) ;
 scalar_t__* FUNC_4 (int,int ) ;
 int FUNC_5 (struct mt7601u_dev*,scalar_t__*) ;
 int FUNC_6 (struct mt7601u_dev*) ;
 int FUNC_7 (struct mt7601u_dev*,int,scalar_t__*,int ) ;
 int FUNC_8 (struct mt7601u_dev*,scalar_t__*) ;
 int FUNC_9 (struct mt7601u_dev*,scalar_t__*) ;
 int FUNC_10 (struct mt7601u_dev*,scalar_t__*) ;
 int FUNC_11 (struct mt7601u_dev*,scalar_t__*) ;
 int FUNC_12 (struct mt7601u_dev*,scalar_t__*) ;
 int FUNC_13 (struct mt7601u_dev*,scalar_t__*) ;
 int FUNC_14 (struct mt7601u_dev*,scalar_t__*) ;

int
FUNC_15(struct mt7601u_dev *VAR_10)
{
 u8 *VAR_11;
 int VAR_12, VAR_13;

 VAR_13 = FUNC_6(VAR_10);
 if (VAR_13)
  return VAR_13;

 VAR_10->ee = FUNC_2(VAR_10->dev, sizeof(*VAR_10->ee), VAR_1);
 if (!VAR_10->ee)
  return -VAR_0;

 VAR_11 = FUNC_4(VAR_2, VAR_1);
 if (!VAR_11)
  return -VAR_0;

 for (VAR_12 = 0; VAR_12 + 16 <= VAR_2; VAR_12 += 16) {
  VAR_13 = FUNC_7(VAR_10, VAR_12, VAR_11 + VAR_12, VAR_6);
  if (VAR_13)
   goto out;
 }

 if (VAR_11[VAR_8] > VAR_3)
  FUNC_1(VAR_10->dev,
    "Warning: unsupported EEPROM version %02hhx\n",
    VAR_11[VAR_8]);
 FUNC_0(VAR_10->dev, "EEPROM ver:%02hhx fae:%02hhx\n",
   VAR_11[VAR_8], VAR_11[VAR_9]);

 FUNC_12(VAR_10, VAR_11 + VAR_5);
 FUNC_10(VAR_10, VAR_11);
 FUNC_9(VAR_10, VAR_11);
 FUNC_11(VAR_10, VAR_11);
 FUNC_13(VAR_10, VAR_11);
 FUNC_14(VAR_10, VAR_11);
 VAR_10->ee->ref_temp = VAR_11[VAR_7];
 VAR_10->ee->lna_gain = VAR_11[VAR_4];

 FUNC_5(VAR_10, VAR_11);

 FUNC_8(VAR_10, VAR_11);
out:
 FUNC_3(VAR_11);
 return VAR_13;
}
