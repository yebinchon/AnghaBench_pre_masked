
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm860x_battery_info {scalar_t__ temp_type; int present; int start_soc; char* last_capacity; int dev; int i2c; int lock; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int FUNC_0 (struct pm860x_battery_info*,int ,int*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,int,int) ;

__attribute__((used)) static void FUNC_7(struct pm860x_battery_info *VAR_26)
{
 unsigned char VAR_27[2];
 int VAR_28;
 int VAR_29;
 int VAR_30;
 int VAR_31;


 VAR_29 = VAR_5;
 if (VAR_26->temp_type == VAR_24)
  VAR_29 |= VAR_6;
 VAR_28 = FUNC_6(VAR_26->i2c, VAR_15, VAR_29, VAR_29);
 if (VAR_28)
  goto out;


 VAR_29 = VAR_9 | VAR_7 | VAR_8;
 VAR_28 = FUNC_6(VAR_26->i2c, VAR_16, VAR_29, VAR_29);
 if (VAR_28)
  goto out;


 VAR_28 = FUNC_5(VAR_26->i2c, VAR_17, 0x82);
 if (VAR_28)
  goto out;
 VAR_28 = FUNC_5(VAR_26->i2c, VAR_18, 0x6c);
 if (VAR_28)
  goto out;


 VAR_28 = FUNC_6(VAR_26->i2c, VAR_13,
       VAR_4, VAR_4);
 if (VAR_28 < 0)
  goto out;


 VAR_28 = FUNC_6(VAR_26->i2c, VAR_12,
       VAR_1, VAR_1);
 if (VAR_28 < 0)
  goto out;

 VAR_28 = FUNC_6(VAR_26->i2c, VAR_11, 7 << 3,
         VAR_2);
 if (VAR_28 < 0)
  goto out;


 VAR_28 = FUNC_6(VAR_26->i2c, VAR_14, 0xF << 4,
         VAR_3);
 if (VAR_28 < 0)
  goto out;


 FUNC_2(&VAR_26->lock);
 VAR_28 = FUNC_4(VAR_26->i2c, VAR_22);
 if (VAR_28 < 0) {
  FUNC_3(&VAR_26->lock);
  goto out;
 }
 if (VAR_28 & VAR_25) {
  VAR_26->present = 1;
  VAR_26->temp_type = VAR_23;
 } else {
  VAR_26->present = 0;
  VAR_26->temp_type = VAR_24;
 }
 FUNC_3(&VAR_26->lock);

 FUNC_0(VAR_26, VAR_10, &VAR_31);

 VAR_29 = FUNC_4(VAR_26->i2c, VAR_19);
 VAR_30 = VAR_29 & VAR_0;

 FUNC_1(VAR_26->dev, "battery wake up? %s\n",
  VAR_30 != 0 ? "yes" : "no");


 if (VAR_30 == 0) {
  VAR_27[0] = FUNC_4(VAR_26->i2c, VAR_21);
  VAR_27[1] = FUNC_4(VAR_26->i2c, VAR_20);
  VAR_29 = ((VAR_27[1] & 0x3) << 5) | ((VAR_27[0] >> 3) & 0x1F);
  if (VAR_29 > VAR_31 + 15)
   VAR_26->start_soc = VAR_31;
  else if (VAR_29 < VAR_31 - 15)
   VAR_26->start_soc = VAR_31;
  else
   VAR_26->start_soc = VAR_29;
  FUNC_1(VAR_26->dev, "soc_rtc %d, soc_ocv :%d\n", VAR_29, VAR_31);
 } else {
  FUNC_6(VAR_26->i2c, VAR_19,
    VAR_0, VAR_0);
  VAR_26->start_soc = VAR_31;
 }
 VAR_26->last_capacity = VAR_26->start_soc;
 FUNC_1(VAR_26->dev, "init soc : %d\n", VAR_26->last_capacity);
out:
 return;
}
