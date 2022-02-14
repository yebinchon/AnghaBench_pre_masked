
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int* data; } ;
struct pn533_i2c_phy {TYPE_2__* priv; struct i2c_client* i2c_dev; } ;
struct i2c_client {int dev; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* rx_frame_size ) (int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 int FUNC_1 (struct i2c_client*,int ,int) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*,int ) ;
 int FUNC_7 (int*) ;

__attribute__((used)) static int FUNC_8(struct pn533_i2c_phy *VAR_7, struct sk_buff **VAR_8)
{
 struct i2c_client *VAR_9 = VAR_7->i2c_dev;
 int VAR_10 = VAR_4 +
    VAR_5 +
    VAR_6 + 1;
 int VAR_11;

 *VAR_8 = FUNC_0(VAR_10, VAR_3);
 if (*VAR_8 == ((void*)0))
  return -VAR_1;

 VAR_11 = FUNC_1(VAR_9, FUNC_5(*VAR_8, VAR_10), VAR_10);
 if (VAR_11 != VAR_10) {
  FUNC_3(&VAR_9->dev, "cannot read. r=%d len=%d\n", VAR_11, VAR_10);
  FUNC_2(*VAR_8);
  return -VAR_2;
 }

 if (!((*VAR_8)->data[0] & 0x01)) {
  FUNC_3(&VAR_9->dev, "READY flag not set");
  FUNC_2(*VAR_8);
  return -VAR_0;
 }


 FUNC_4(*VAR_8, 1);

 FUNC_6(*VAR_8, VAR_7->priv->ops->rx_frame_size((*VAR_8)->data));

 return 0;
}
