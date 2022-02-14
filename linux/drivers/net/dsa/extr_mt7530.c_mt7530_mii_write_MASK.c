
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mt7530_priv {struct mii_bus* bus; } ;
struct mii_bus {int (* write ) (struct mii_bus*,int,int,int) ;int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct mii_bus*,int,int,int) ;
 int FUNC_2 (struct mii_bus*,int,int,int) ;
 int FUNC_3 (struct mii_bus*,int,int,int) ;

__attribute__((used)) static int
FUNC_4(struct mt7530_priv *VAR_0, u32 VAR_1, u32 VAR_2)
{
 struct mii_bus *VAR_3 = VAR_0->bus;
 u16 VAR_4, VAR_5, VAR_6, VAR_7;
 int VAR_8;

 VAR_4 = (VAR_1 >> 6) & 0x3ff;
 VAR_5 = (VAR_1 >> 2) & 0xf;
 VAR_6 = VAR_2 & 0xffff;
 VAR_7 = VAR_2 >> 16;


 VAR_8 = VAR_3->write(VAR_3, 0x1f, 0x1f, VAR_4);
 if (VAR_8 < 0)
  goto err;

 VAR_8 = VAR_3->write(VAR_3, 0x1f, VAR_5, VAR_6);
 if (VAR_8 < 0)
  goto err;

 VAR_8 = VAR_3->write(VAR_3, 0x1f, 0x10, VAR_7);
err:
 if (VAR_8 < 0)
  FUNC_0(&VAR_3->dev,
   "failed to write mt7530 register\n");
 return VAR_8;
}
