
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct nxp_nci_i2c_phy {struct i2c_client* i2c_dev; } ;
struct nci_ctrl_hdr {int plen; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 int FUNC_1 (struct i2c_client*,int *,int) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *,char*,int,...) ;
 int * FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (struct sk_buff*,void*,int) ;

__attribute__((used)) static int FUNC_6(struct nxp_nci_i2c_phy *VAR_4,
    struct sk_buff **VAR_5)
{
 struct nci_ctrl_hdr VAR_6;
 struct i2c_client *VAR_7 = VAR_4->i2c_dev;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_7, (u8 *) &VAR_6, VAR_3);
 if (VAR_8 < 0) {
  goto nci_read_exit;
 } else if (VAR_8 != VAR_3) {
  FUNC_3(&VAR_7->dev, "Incorrect header length: %u\n", VAR_8);
  VAR_8 = -VAR_0;
  goto nci_read_exit;
 }

 *VAR_5 = FUNC_0(VAR_3 + VAR_6.plen, VAR_2);
 if (*VAR_5 == ((void*)0)) {
  VAR_8 = -VAR_1;
  goto nci_read_exit;
 }

 FUNC_5(*VAR_5, (void *)&VAR_6, VAR_3);

 VAR_8 = FUNC_1(VAR_7, FUNC_4(*VAR_5, VAR_6.plen), VAR_6.plen);
 if (VAR_8 != VAR_6.plen) {
  FUNC_3(&VAR_7->dev,
   "Invalid frame payload length: %u (expected %u)\n",
   VAR_8, VAR_6.plen);
  VAR_8 = -VAR_0;
  goto nci_read_exit_free_skb;
 }

 return 0;

nci_read_exit_free_skb:
 FUNC_2(*VAR_5);
nci_read_exit:
 return VAR_8;
}
