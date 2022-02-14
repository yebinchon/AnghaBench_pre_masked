
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct nxp_nci_i2c_phy {struct i2c_client* i2c_dev; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (struct i2c_client*,int *,size_t) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int *,char*,int,...) ;
 int * FUNC_5 (struct sk_buff*,size_t) ;
 int FUNC_6 (struct sk_buff*,int *,int) ;

__attribute__((used)) static int FUNC_7(struct nxp_nci_i2c_phy *VAR_6,
          struct sk_buff **VAR_7)
{
 struct i2c_client *VAR_8 = VAR_6->i2c_dev;
 u16 VAR_9;
 size_t VAR_10;
 int VAR_11;

 VAR_11 = FUNC_2(VAR_8, (u8 *) &VAR_9, VAR_5);
 if (VAR_11 < 0) {
  goto fw_read_exit;
 } else if (VAR_11 != VAR_5) {
  FUNC_4(&VAR_8->dev, "Incorrect header length: %u\n", VAR_11);
  VAR_11 = -VAR_0;
  goto fw_read_exit;
 }

 VAR_10 = (FUNC_1(VAR_9) & VAR_4) +
      VAR_3;

 *VAR_7 = FUNC_0(VAR_5 + VAR_10, VAR_2);
 if (*VAR_7 == ((void*)0)) {
  VAR_11 = -VAR_1;
  goto fw_read_exit;
 }

 FUNC_6(*VAR_7, &VAR_9, VAR_5);

 VAR_11 = FUNC_2(VAR_8, FUNC_5(*VAR_7, VAR_10), VAR_10);
 if (VAR_11 != VAR_10) {
  FUNC_4(&VAR_8->dev,
   "Invalid frame length: %u (expected %zu)\n",
   VAR_11, VAR_10);
  VAR_11 = -VAR_0;
  goto fw_read_exit_free_skb;
 }

 return 0;

fw_read_exit_free_skb:
 FUNC_3(*VAR_7);
fw_read_exit:
 return VAR_11;
}
