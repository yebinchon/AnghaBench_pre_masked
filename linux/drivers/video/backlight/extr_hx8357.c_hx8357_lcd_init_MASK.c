
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lcd_device {int dummy; } ;
struct hx8357_data {int * im_pins; scalar_t__ use_im_pins; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
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
 int FUNC_2 (struct lcd_device*,int ,int ) ;
 int FUNC_3 (struct lcd_device*,int ) ;
 struct hx8357_data* FUNC_4 (struct lcd_device*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct lcd_device *VAR_18)
{
 struct hx8357_data *VAR_19 = FUNC_4(VAR_18);
 int VAR_20;





 if (VAR_19->use_im_pins) {
  FUNC_1(VAR_19->im_pins[0], 1);
  FUNC_1(VAR_19->im_pins[1], 0);
  FUNC_1(VAR_19->im_pins[2], 1);
 }

 VAR_20 = FUNC_2(VAR_18, VAR_12,
    FUNC_0(VAR_12));
 if (VAR_20 < 0)
  return VAR_20;

 VAR_20 = FUNC_2(VAR_18, VAR_17,
    FUNC_0(VAR_17));
 if (VAR_20 < 0)
  return VAR_20;

 VAR_20 = FUNC_2(VAR_18, VAR_13,
    FUNC_0(VAR_13));
 if (VAR_20 < 0)
  return VAR_20;

 VAR_20 = FUNC_2(VAR_18, VAR_9,
    FUNC_0(VAR_9));
 if (VAR_20 < 0)
  return VAR_20;

 VAR_20 = FUNC_2(VAR_18, VAR_5,
    FUNC_0(VAR_5));
 if (VAR_20 < 0)
  return VAR_20;

 VAR_20 = FUNC_2(VAR_18, VAR_10,
    FUNC_0(VAR_10));
 if (VAR_20 < 0)
  return VAR_20;

 VAR_20 = FUNC_2(VAR_18, VAR_15,
    FUNC_0(VAR_15));
 if (VAR_20 < 0)
  return VAR_20;

 VAR_20 = FUNC_2(VAR_18, VAR_16,
    FUNC_0(VAR_16));
 if (VAR_20 < 0)
  return VAR_20;

 VAR_20 = FUNC_2(VAR_18, VAR_7,
    FUNC_0(VAR_7));
 if (VAR_20 < 0)
  return VAR_20;

 VAR_20 = FUNC_2(VAR_18, VAR_3,
    FUNC_0(VAR_3));
 if (VAR_20 < 0)
  return VAR_20;

 VAR_20 = FUNC_2(VAR_18, VAR_11,
    FUNC_0(VAR_11));
 if (VAR_20 < 0)
  return VAR_20;

 VAR_20 = FUNC_2(VAR_18, VAR_4,
    FUNC_0(VAR_4));
 if (VAR_20 < 0)
  return VAR_20;

 VAR_20 = FUNC_2(VAR_18, VAR_8,
    FUNC_0(VAR_8));
 if (VAR_20 < 0)
  return VAR_20;

 VAR_20 = FUNC_2(VAR_18, VAR_14,
    FUNC_0(VAR_14));
 if (VAR_20 < 0)
  return VAR_20;

 VAR_20 = FUNC_2(VAR_18, VAR_6,
    FUNC_0(VAR_6));
 if (VAR_20 < 0)
  return VAR_20;

 VAR_20 = FUNC_3(VAR_18, VAR_0);
 if (VAR_20 < 0)
  return VAR_20;




 FUNC_5(120);

 VAR_20 = FUNC_3(VAR_18, VAR_1);
 if (VAR_20 < 0)
  return VAR_20;

 FUNC_6(5000, 7000);

 VAR_20 = FUNC_3(VAR_18, VAR_2);
 if (VAR_20 < 0)
  return VAR_20;

 return 0;
}
