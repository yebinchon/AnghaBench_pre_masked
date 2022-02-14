
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_bus {int dev; struct iproc_mdiomux_desc* priv; } ;
struct iproc_mdiomux_desc {int base; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int,int,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct mii_bus *VAR_1, int VAR_2, int VAR_3)
{
 struct iproc_mdiomux_desc *VAR_4 = VAR_1->priv;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_4->base, VAR_2, VAR_3, 0, VAR_0);
 if (VAR_5 < 0)
  FUNC_0(&VAR_1->dev, "mdiomux read operation failed!!!");

 return VAR_5;
}
