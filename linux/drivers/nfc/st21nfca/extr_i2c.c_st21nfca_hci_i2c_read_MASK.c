
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct st21nfca_i2c_phy {int current_read_len; int phy_lock; struct i2c_client* i2c_dev; } ;
struct sk_buff {scalar_t__* data; int len; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct i2c_client*,int*,int) ;
 int* VAR_5 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct sk_buff*,int*,int) ;
 int FUNC_7 (struct sk_buff*,int ) ;
 int FUNC_8 (struct sk_buff*) ;
 int* VAR_6 ;

__attribute__((used)) static int FUNC_9(struct st21nfca_i2c_phy *VAR_7,
     struct sk_buff *VAR_8)
{
 int VAR_9, VAR_10;
 u8 VAR_11;
 u8 VAR_12[VAR_3];
 struct i2c_client *VAR_13 = VAR_7->i2c_dev;

 if (VAR_7->current_read_len < FUNC_0(VAR_5)) {
  VAR_11 = VAR_5[VAR_7->current_read_len];






  VAR_9 = 0;
  FUNC_4(&VAR_7->phy_lock);
  for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_6) && VAR_9 <= 0; VAR_10++) {
   VAR_9 = FUNC_2(VAR_13, VAR_12, VAR_11);
   if (VAR_9 < 0)
    FUNC_3(VAR_6[VAR_10]);
  }
  FUNC_5(&VAR_7->phy_lock);

  if (VAR_9 != VAR_11) {
   VAR_7->current_read_len = 0;
   return -VAR_2;
  }





  if (!VAR_7->current_read_len && !FUNC_1(VAR_12)) {
   FUNC_7(VAR_8, 0);
   VAR_7->current_read_len = 0;
   return -VAR_1;
  } else if (VAR_7->current_read_len && FUNC_1(VAR_12)) {





   FUNC_7(VAR_8, 0);
   VAR_7->current_read_len = 0;
  }

  FUNC_6(VAR_8, VAR_12, VAR_11);

  if (VAR_8->data[VAR_8->len - 1] == VAR_4) {
   VAR_7->current_read_len = 0;
   return FUNC_8(VAR_8);
  }
  VAR_7->current_read_len++;
  return -VAR_0;
 }
 return -VAR_1;
}
