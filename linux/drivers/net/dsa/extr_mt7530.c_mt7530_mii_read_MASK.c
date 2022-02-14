
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mt7530_priv {struct mii_bus* bus; } ;
struct mii_bus {int (* write ) (struct mii_bus*,int,int,int) ;int (* read ) (struct mii_bus*,int,int) ;int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct mii_bus*,int,int,int) ;
 int FUNC_2 (struct mii_bus*,int,int) ;
 int FUNC_3 (struct mii_bus*,int,int) ;

__attribute__((used)) static u32
FUNC_4(struct mt7530_priv *VAR_0, u32 VAR_1)
{
 struct mii_bus *VAR_2 = VAR_0->bus;
 u16 VAR_3, VAR_4, VAR_5, VAR_6;
 int VAR_7;

 VAR_3 = (VAR_1 >> 6) & 0x3ff;
 VAR_4 = (VAR_1 >> 2) & 0xf;


 VAR_7 = VAR_2->write(VAR_2, 0x1f, 0x1f, VAR_3);
 if (VAR_7 < 0) {
  FUNC_0(&VAR_2->dev,
   "failed to read mt7530 register\n");
  return VAR_7;
 }

 VAR_5 = VAR_2->read(VAR_2, 0x1f, VAR_4);
 VAR_6 = VAR_2->read(VAR_2, 0x1f, 0x10);

 return (VAR_6 << 16) | (VAR_5 & 0xffff);
}
