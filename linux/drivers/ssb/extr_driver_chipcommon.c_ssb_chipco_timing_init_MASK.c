
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int revision; } ;
struct ssb_device {TYPE_1__ id; struct ssb_bus* bus; } ;
struct ssb_chipcommon {struct ssb_device* dev; } ;
struct ssb_bus {int chip_id; scalar_t__ chip_rev; } ;


 int FUNC_0 (int,unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct ssb_chipcommon*,int ,int) ;

void FUNC_2(struct ssb_chipcommon *VAR_9,
       unsigned long VAR_10)
{
 struct ssb_device *VAR_11 = VAR_9->dev;
 struct ssb_bus *VAR_12 = VAR_11->bus;
 u32 VAR_13;


 FUNC_1(VAR_9, VAR_2, 0x11);
 VAR_13 = FUNC_0(10, VAR_10) << VAR_8;
 VAR_13 |= FUNC_0(40, VAR_10) << VAR_6;
 VAR_13 |= FUNC_0(240, VAR_10);
 FUNC_1(VAR_9, VAR_3, VAR_13);


 VAR_13 = FUNC_0(10, VAR_10) << VAR_5;
 VAR_13 |= FUNC_0(10, VAR_10) << VAR_4;
 VAR_13 |= FUNC_0(120, VAR_10);
 if ((VAR_12->chip_id == 0x5365) ||
     (VAR_11->id.revision < 9))
  FUNC_1(VAR_9, VAR_0, VAR_13);
 if ((VAR_12->chip_id == 0x5365) ||
     (VAR_11->id.revision < 9) ||
     ((VAR_12->chip_id == 0x5350) && (VAR_12->chip_rev == 0)))
  FUNC_1(VAR_9, VAR_1, VAR_13);

 if (VAR_12->chip_id == 0x5350) {

  VAR_13 = FUNC_0(10, VAR_10) << VAR_8;
  VAR_13 |= FUNC_0(20, VAR_10) << VAR_7;
  VAR_13 |= FUNC_0(100, VAR_10) << VAR_6;
  VAR_13 |= FUNC_0(120, VAR_10);
  FUNC_1(VAR_9, VAR_3, VAR_13);
 }
}
