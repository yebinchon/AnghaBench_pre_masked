
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct secocec_data {int cec_adap; struct device* dev; } ;
struct device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct secocec_data*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int*) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_7, void *VAR_8)
{
 struct secocec_data *VAR_9 = VAR_8;
 struct device *VAR_10 = VAR_9->dev;
 u16 VAR_11, VAR_12, VAR_13 = 0;
 int VAR_14;


 VAR_14 = FUNC_5(VAR_4, &VAR_11);
 if (VAR_14)
  goto err;

 if (VAR_11 & VAR_5) {

  VAR_14 = FUNC_5(VAR_1, &VAR_12);
  if (VAR_14)
   goto err;

  if (VAR_12 & VAR_2)
   FUNC_3(VAR_9->cec_adap, VAR_12);

  if (VAR_12 & VAR_3)
   FUNC_4(VAR_9->cec_adap, VAR_12);

  if ((~VAR_12 & VAR_3) &&
      (~VAR_12 & VAR_2))
   FUNC_1(VAR_10,
          "Message not received or sent, but interrupt fired");

  VAR_13 = VAR_5;
 }

 if (VAR_11 & VAR_6) {
  VAR_13 |= VAR_6;

  FUNC_2(VAR_9);
 }


 VAR_14 = FUNC_6(VAR_4, VAR_13);
 if (VAR_14)
  goto err;

 return VAR_0;

err:
 FUNC_0(VAR_10, "IRQ: R/W SMBus operation failed (%d)", VAR_14);


 VAR_13 = VAR_5 | VAR_6;
 FUNC_6(VAR_4, VAR_13);

 return VAR_0;
}
