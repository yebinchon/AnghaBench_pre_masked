
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bq24190_dev_info {int f_reg; int ss_reg; int dev; scalar_t__ battery; scalar_t__ charger; int f_reg_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct bq24190_dev_info*,int) ;
 int FUNC_1 (struct bq24190_dev_info*,int ,int*) ;
 int FUNC_2 (struct bq24190_dev_info*,int ,int ,int ,int ) ;
 int FUNC_3 (int ,char*,int,int) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ,char*,int,int,int,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct bq24190_dev_info *VAR_12)
{
 const u8 VAR_13 = VAR_10;
 const u8 VAR_14 = VAR_1
    | VAR_5;
 bool VAR_15 = 0, VAR_16 = 0;
 u8 VAR_17 = 0, VAR_18 = 0;
 int VAR_19, VAR_20;

 VAR_20 = FUNC_1(VAR_12, VAR_9, &VAR_17);
 if (VAR_20 < 0) {
  FUNC_4(VAR_12->dev, "Can't read SS reg: %d\n", VAR_20);
  return;
 }

 VAR_19 = 0;
 do {
  VAR_20 = FUNC_1(VAR_12, VAR_0, &VAR_18);
  if (VAR_20 < 0) {
   FUNC_4(VAR_12->dev, "Can't read F reg: %d\n", VAR_20);
   return;
  }
 } while (VAR_18 && ++VAR_19 < 2);


 if (VAR_18 == (1 << VAR_4) &&
     !(VAR_17 & VAR_11))
  VAR_18 = 0;

 if (VAR_18 != VAR_12->f_reg) {
  FUNC_5(VAR_12->dev,
   "Fault: boost %d, charge %d, battery %d, ntc %d\n",
   !!(VAR_18 & VAR_2),
   !!(VAR_18 & VAR_3),
   !!(VAR_18 & VAR_1),
   !!(VAR_18 & VAR_5));

  FUNC_6(&VAR_12->f_reg_lock);
  if ((VAR_12->f_reg & VAR_14) != (VAR_18 & VAR_14))
   VAR_16 = 1;
  if ((VAR_12->f_reg & ~VAR_14) != (VAR_18 & ~VAR_14))
   VAR_15 = 1;
  VAR_12->f_reg = VAR_18;
  FUNC_7(&VAR_12->f_reg_lock);
 }

 if (VAR_17 != VAR_12->ss_reg) {




  if ((VAR_12->ss_reg & VAR_11) &&
    !(VAR_17 & VAR_11)) {
   VAR_20 = FUNC_2(VAR_12, VAR_6,
     VAR_7,
     VAR_8,
     0);
   if (VAR_20 < 0)
    FUNC_4(VAR_12->dev, "Can't access ISC reg: %d\n",
     VAR_20);
  }

  if ((VAR_12->ss_reg & VAR_13) != (VAR_17 & VAR_13))
   VAR_16 = 1;
  if ((VAR_12->ss_reg & ~VAR_13) != (VAR_17 & ~VAR_13))
   VAR_15 = 1;
  VAR_12->ss_reg = VAR_17;
 }

 if (VAR_15 || VAR_16) {
  FUNC_8(VAR_12->charger);
  FUNC_0(VAR_12, VAR_17);
 }
 if (VAR_16 && VAR_12->battery)
  FUNC_8(VAR_12->battery);

 FUNC_3(VAR_12->dev, "ss_reg: 0x%02x, f_reg: 0x%02x\n", VAR_17, VAR_18);
}
