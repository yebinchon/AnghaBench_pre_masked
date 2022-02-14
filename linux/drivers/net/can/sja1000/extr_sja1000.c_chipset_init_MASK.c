
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sja1000_priv {int cdr; int ocr; int (* write_reg ) (struct sja1000_priv*,int ,int) ;} ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct sja1000_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct sja1000_priv*,int ,int) ;
 int FUNC_2 (struct sja1000_priv*,int ,int) ;
 int FUNC_3 (struct sja1000_priv*,int ,int) ;
 int FUNC_4 (struct sja1000_priv*,int ,int) ;
 int FUNC_5 (struct sja1000_priv*,int ,int) ;
 int FUNC_6 (struct sja1000_priv*,int ,int) ;
 int FUNC_7 (struct sja1000_priv*,int ,int) ;
 int FUNC_8 (struct sja1000_priv*,int ,int) ;
 int FUNC_9 (struct sja1000_priv*,int ,int) ;
 int FUNC_10 (struct sja1000_priv*,int ,int) ;

__attribute__((used)) static void FUNC_11(struct net_device *VAR_12)
{
 struct sja1000_priv *VAR_13 = FUNC_0(VAR_12);


 VAR_13->write_reg(VAR_13, VAR_10, VAR_13->cdr | VAR_0);


 VAR_13->write_reg(VAR_13, VAR_2, 0x00);
 VAR_13->write_reg(VAR_13, VAR_3, 0x00);
 VAR_13->write_reg(VAR_13, VAR_4, 0x00);
 VAR_13->write_reg(VAR_13, VAR_5, 0x00);

 VAR_13->write_reg(VAR_13, VAR_6, 0xFF);
 VAR_13->write_reg(VAR_13, VAR_7, 0xFF);
 VAR_13->write_reg(VAR_13, VAR_8, 0xFF);
 VAR_13->write_reg(VAR_13, VAR_9, 0xFF);

 VAR_13->write_reg(VAR_13, VAR_11, VAR_13->ocr | VAR_1);
}
