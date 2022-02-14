
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct s3fwrn5_i2c_phy {int mode; int ndev; int i2c_dev; } ;
struct s3fwrn5_fw_header {size_t len; } ;
struct nci_ctrl_hdr {size_t plen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 struct sk_buff* FUNC_0 (size_t,int ) ;
 int FUNC_1 (int ,char*,size_t) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,struct sk_buff*,int ) ;
 char* FUNC_4 (struct sk_buff*,size_t) ;
 int FUNC_5 (struct sk_buff*,char*,size_t) ;

__attribute__((used)) static int FUNC_6(struct s3fwrn5_i2c_phy *VAR_6)
{
 struct sk_buff *VAR_7;
 size_t VAR_8;
 size_t VAR_9;
 char VAR_10[4];
 int VAR_11;

 VAR_8 = (VAR_6->mode == VAR_5) ?
  VAR_3 : VAR_4;
 VAR_11 = FUNC_1(VAR_6->i2c_dev, VAR_10, VAR_8);
 if (VAR_11 < 0)
  return VAR_11;

 if (VAR_11 < VAR_8)
  return -VAR_0;

 VAR_9 = (VAR_6->mode == VAR_5) ?
  ((struct nci_ctrl_hdr *)VAR_10)->plen :
  ((struct s3fwrn5_fw_header *)VAR_10)->len;

 VAR_7 = FUNC_0(VAR_8 + VAR_9, VAR_2);
 if (!VAR_7)
  return -VAR_1;

 FUNC_5(VAR_7, VAR_10, VAR_8);

 if (VAR_9 == 0)
  goto out;

 VAR_11 = FUNC_1(VAR_6->i2c_dev, FUNC_4(VAR_7, VAR_9), VAR_9);
 if (VAR_11 != VAR_9) {
  FUNC_2(VAR_7);
  return -VAR_0;
 }

out:
 return FUNC_3(VAR_6->ndev, VAR_7, VAR_6->mode);
}
