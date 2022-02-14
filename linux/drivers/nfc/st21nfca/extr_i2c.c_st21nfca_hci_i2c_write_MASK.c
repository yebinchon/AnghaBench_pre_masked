
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct st21nfca_i2c_phy {scalar_t__ hard_fault; int phy_lock; struct i2c_client* i2c_dev; } ;
struct sk_buff {int* data; int len; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (char*,struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct i2c_client*,int*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;
 int * VAR_5 ;

__attribute__((used)) static int FUNC_10(void *VAR_6, struct sk_buff *VAR_7)
{
 int VAR_8 = -1, VAR_9, VAR_10;
 struct st21nfca_i2c_phy *VAR_11 = VAR_6;
 struct i2c_client *VAR_12 = VAR_11->i2c_dev;
 u8 VAR_13[VAR_3 * 2];

 FUNC_1("st21nfca_hci_i2c_write", VAR_7);

 if (VAR_11->hard_fault != 0)
  return VAR_11->hard_fault;






 FUNC_8(VAR_7);


 FUNC_7(VAR_7, VAR_4);

 *(u8 *)FUNC_6(VAR_7, 1) = VAR_4;







 VAR_13[0] = VAR_7->data[0];
 for (VAR_9 = 1, VAR_10 = 1; VAR_9 < VAR_7->len - 1; VAR_9++, VAR_10++) {
  if (VAR_7->data[VAR_9] == VAR_4
      || VAR_7->data[VAR_9] == VAR_2) {
   VAR_13[VAR_10] = VAR_2;
   VAR_10++;
   VAR_13[VAR_10] = VAR_7->data[VAR_9] ^ VAR_1;
  } else {
   VAR_13[VAR_10] = VAR_7->data[VAR_9];
  }
 }
 VAR_13[VAR_10] = VAR_7->data[VAR_9];
 VAR_10++;





 FUNC_4(&VAR_11->phy_lock);
 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_5) && VAR_8 < 0; VAR_9++) {
  VAR_8 = FUNC_2(VAR_12, VAR_13, VAR_10);
  if (VAR_8 < 0)
   FUNC_3(VAR_5[VAR_9]);
 }
 FUNC_5(&VAR_11->phy_lock);

 if (VAR_8 >= 0) {
  if (VAR_8 != VAR_10)
   VAR_8 = -VAR_0;
  else
   VAR_8 = 0;
 }

 FUNC_9(VAR_7);

 return VAR_8;
}
