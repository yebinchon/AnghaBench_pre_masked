
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gswip_priv {int rcu_regmap; struct device* dev; } ;
struct gswip_gphy_fw {int reset; int fw_addr_offset; int fw_name; int clk_gate; } ;
struct firmware {size_t size; int data; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int ,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (void*,size_t) ;
 size_t VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*,...) ;
 void* FUNC_4 (struct device*,size_t,int *,int ) ;
 int FUNC_5 (void*,int ,size_t) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (struct firmware const*) ;
 int FUNC_8 (struct firmware const**,int ,struct device*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct gswip_priv *VAR_3, struct gswip_gphy_fw *VAR_4)
{
 struct device *VAR_5 = VAR_3->dev;
 const struct firmware *VAR_6;
 void *VAR_7;
 dma_addr_t VAR_8;
 dma_addr_t VAR_9;
 size_t VAR_10;
 int VAR_11;

 VAR_11 = FUNC_2(VAR_4->clk_gate);
 if (VAR_11)
  return VAR_11;

 FUNC_9(VAR_4->reset);

 VAR_11 = FUNC_8(&VAR_6, VAR_4->fw_name, VAR_5);
 if (VAR_11) {
  FUNC_3(VAR_5, "failed to load firmware: %s, error: %i\n",
   VAR_4->fw_name, VAR_11);
  return VAR_11;
 }




 VAR_10 = VAR_6->size + VAR_2;

 VAR_7 = FUNC_4(VAR_5, VAR_10, &VAR_8, VAR_1);
 if (VAR_7) {
  VAR_7 = FUNC_1(VAR_7, VAR_2);
  VAR_9 = FUNC_0(VAR_8, VAR_2);
  FUNC_5(VAR_7, VAR_6->data, VAR_6->size);
 } else {
  FUNC_3(VAR_5, "failed to alloc firmware memory\n");
  FUNC_7(VAR_6);
  return -VAR_0;
 }

 FUNC_7(VAR_6);

 VAR_11 = FUNC_6(VAR_3->rcu_regmap, VAR_4->fw_addr_offset, VAR_9);
 if (VAR_11)
  return VAR_11;

 FUNC_10(VAR_4->reset);

 return VAR_11;
}
