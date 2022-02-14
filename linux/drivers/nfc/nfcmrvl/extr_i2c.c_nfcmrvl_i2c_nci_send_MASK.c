
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; int data; } ;
struct nfcmrvl_private {int flags; struct nfcmrvl_i2c_drv_data* drv_data; } ;
struct nfcmrvl_i2c_drv_data {int dev; int i2c; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,char*,int,int) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct nfcmrvl_private *VAR_2,
    struct sk_buff *VAR_3)
{
 struct nfcmrvl_i2c_drv_data *VAR_4 = VAR_2->drv_data;
 int VAR_5;

 if (FUNC_4(VAR_1, &VAR_2->flags))
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_4->i2c, VAR_3->data, VAR_3->len);


 if (VAR_5 == -VAR_0) {
  FUNC_3(VAR_4->dev, "chip may sleep, retry\n");
  FUNC_5(6000, 10000);
  VAR_5 = FUNC_0(VAR_4->i2c, VAR_3->data, VAR_3->len);
 }

 if (VAR_5 >= 0) {
  if (VAR_5 != VAR_3->len) {
   FUNC_2(VAR_4->dev,
    "Invalid length sent: %u (expected %u)\n",
    VAR_5, VAR_3->len);
   VAR_5 = -VAR_0;
  } else
   VAR_5 = 0;
  FUNC_1(VAR_3);
 }

 return VAR_5;
}
