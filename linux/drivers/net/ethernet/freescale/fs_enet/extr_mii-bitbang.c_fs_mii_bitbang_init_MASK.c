
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct resource {int start; } ;
struct mii_bus {int id; struct bb_info* priv; } ;
struct device_node {int dummy; } ;
struct bb_info {int mdio_msk; int mdc_msk; scalar_t__ dir; scalar_t__ dat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (struct device_node*,int ,struct resource*) ;
 int* FUNC_2 (struct device_node*,char*,int*) ;
 int FUNC_3 (struct resource*) ;
 int FUNC_4 (int ,int ,char*,int) ;

__attribute__((used)) static int FUNC_5(struct mii_bus *VAR_3, struct device_node *VAR_4)
{
 struct resource VAR_5;
 const u32 *VAR_6;
 int VAR_7, VAR_8, VAR_9;
 struct bb_info *VAR_10 = VAR_3->priv;

 int VAR_11 = FUNC_1(VAR_4, 0, &VAR_5);
 if (VAR_11)
  return VAR_11;

 if (FUNC_3(&VAR_5) <= 13)
  return -VAR_0;





 FUNC_4(VAR_3->id, VAR_2, "%x", VAR_5.start);

 VAR_6 = FUNC_2(VAR_4, "fsl,mdio-pin", &VAR_9);
 if (!VAR_6 || VAR_9 != 4)
  return -VAR_0;
 VAR_7 = *VAR_6;

 VAR_6 = FUNC_2(VAR_4, "fsl,mdc-pin", &VAR_9);
 if (!VAR_6 || VAR_9 != 4)
  return -VAR_0;
 VAR_8 = *VAR_6;

 VAR_10->dir = FUNC_0(VAR_5.start, FUNC_3(&VAR_5));
 if (!VAR_10->dir)
  return -VAR_1;

 VAR_10->dat = VAR_10->dir + 4;
 VAR_10->mdio_msk = 1 << (31 - VAR_7);
 VAR_10->mdc_msk = 1 << (31 - VAR_8);

 return 0;
}
