
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct typec_switch_desc {int set; int fwnode; struct pi3usb30532* drvdata; } ;
struct typec_mux_desc {int set; int fwnode; struct pi3usb30532* drvdata; } ;
struct pi3usb30532 {int conf; int mux; int sw; int lock; struct i2c_client* client; } ;
struct device {int fwnode; } ;
struct i2c_client {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,int) ;
 struct pi3usb30532* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct i2c_client*,struct pi3usb30532*) ;
 int FUNC_5 (struct i2c_client*,int ) ;
 int FUNC_6 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (struct device*,struct typec_mux_desc*) ;
 int FUNC_8 (struct device*,struct typec_switch_desc*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct typec_switch_desc VAR_7;
 struct typec_mux_desc VAR_8;
 struct pi3usb30532 *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_3(VAR_6, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->client = VAR_5;
 FUNC_6(&VAR_9->lock);

 VAR_10 = FUNC_5(VAR_5, VAR_2);
 if (VAR_10 < 0) {
  FUNC_2(VAR_6, "Error reading config register %d\n", VAR_10);
  return VAR_10;
 }
 VAR_9->conf = VAR_10;

 VAR_7.drvdata = VAR_9;
 VAR_7.fwnode = VAR_6->fwnode;
 VAR_7.set = VAR_4;

 VAR_9->sw = FUNC_8(VAR_6, &VAR_7);
 if (FUNC_0(VAR_9->sw)) {
  FUNC_2(VAR_6, "Error registering typec switch: %ld\n",
   FUNC_1(VAR_9->sw));
  return FUNC_1(VAR_9->sw);
 }

 VAR_8.drvdata = VAR_9;
 VAR_8.fwnode = VAR_6->fwnode;
 VAR_8.set = VAR_3;

 VAR_9->mux = FUNC_7(VAR_6, &VAR_8);
 if (FUNC_0(VAR_9->mux)) {
  FUNC_9(VAR_9->sw);
  FUNC_2(VAR_6, "Error registering typec mux: %ld\n",
   FUNC_1(VAR_9->mux));
  return FUNC_1(VAR_9->mux);
 }

 FUNC_4(VAR_5, VAR_9);
 return 0;
}
