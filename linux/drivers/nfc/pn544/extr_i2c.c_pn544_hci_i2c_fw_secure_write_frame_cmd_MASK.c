
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct pn544_i2c_phy {int i2c_dev; } ;
struct pn544_i2c_fw_secure_frame {int data; int be_datalen; int cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (int ,int const*,int) ;
 int FUNC_2 (int,int *) ;

__attribute__((used)) static int FUNC_3(struct pn544_i2c_phy *VAR_4,
     const u8 *VAR_5, u16 VAR_6)
{
 u8 VAR_7[VAR_2];
 struct pn544_i2c_fw_secure_frame *VAR_8;
 int VAR_9;
 int VAR_10;

 if (VAR_6 > VAR_3)
  VAR_6 = VAR_3;

 VAR_8 = (struct pn544_i2c_fw_secure_frame *) VAR_7;

 VAR_8->cmd = VAR_1;

 FUNC_2(VAR_6, &VAR_8->be_datalen);

 FUNC_1(VAR_8->data, VAR_5, VAR_6);

 VAR_9 = sizeof(VAR_8->cmd) + sizeof(VAR_8->be_datalen) + VAR_6;

 VAR_10 = FUNC_0(VAR_4->i2c_dev, VAR_7, VAR_9);

 if (VAR_10 == VAR_9)
  return VAR_6;
 else if (VAR_10 < 0)
  return VAR_10;
 else
  return -VAR_0;

}
