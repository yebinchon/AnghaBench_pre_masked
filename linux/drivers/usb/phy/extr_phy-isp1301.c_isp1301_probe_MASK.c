
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_phy {int type; int set_vbus; int init; int label; int * dev; } ;
struct isp1301 {struct usb_phy phy; int mutex; struct i2c_client* client; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct isp1301* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (struct i2c_client*,struct isp1301*) ;
 struct i2c_client* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct usb_phy*) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_7,
    const struct i2c_device_id *VAR_8)
{
 struct isp1301 *VAR_9;
 struct usb_phy *VAR_10;

 VAR_9 = FUNC_0(&VAR_7->dev, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->client = VAR_7;
 FUNC_2(&VAR_9->mutex);

 VAR_10 = &VAR_9->phy;
 VAR_10->dev = &VAR_7->dev;
 VAR_10->label = VAR_0;
 VAR_10->init = VAR_5;
 VAR_10->set_vbus = VAR_6;
 VAR_10->type = VAR_3;

 FUNC_1(VAR_7, VAR_9);
 FUNC_3(VAR_10);

 VAR_4 = VAR_7;

 return 0;
}
