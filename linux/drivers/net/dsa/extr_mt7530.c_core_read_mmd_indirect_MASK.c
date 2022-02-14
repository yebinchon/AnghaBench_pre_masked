
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt7530_priv {struct mii_bus* bus; } ;
struct mii_bus {int (* write ) (struct mii_bus*,int ,int ,int) ;int (* read ) (struct mii_bus*,int ,int ) ;int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct mii_bus*,int ,int ,int) ;
 int FUNC_2 (struct mii_bus*,int ,int ,int) ;
 int FUNC_3 (struct mii_bus*,int ,int ,int) ;
 int FUNC_4 (struct mii_bus*,int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct mt7530_priv *VAR_3, int VAR_4, int VAR_5)
{
 struct mii_bus *VAR_6 = VAR_3->bus;
 int VAR_7, VAR_8;


 VAR_8 = VAR_6->write(VAR_6, 0, VAR_0, VAR_5);
 if (VAR_8 < 0)
  goto err;


 VAR_8 = VAR_6->write(VAR_6, 0, VAR_2, VAR_4);
 if (VAR_8 < 0)
  goto err;


 VAR_8 = VAR_6->write(VAR_6, 0, VAR_0, (VAR_5 | VAR_1));
 if (VAR_8 < 0)
  goto err;


 VAR_7 = VAR_6->read(VAR_6, 0, VAR_2);

 return VAR_7;
err:
 FUNC_0(&VAR_6->dev, "failed to read mmd register\n");

 return VAR_8;
}
