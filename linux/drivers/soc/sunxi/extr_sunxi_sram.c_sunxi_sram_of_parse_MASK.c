
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sunxi_sram_func {scalar_t__ val; unsigned int reg_val; scalar_t__ func; } ;
typedef struct sunxi_sram_data {struct sunxi_sram_func* func; } const sunxi_sram_data ;
struct of_phandle_args {scalar_t__* args; int np; } ;
struct of_device_id {struct sunxi_sram_data const* data; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sunxi_sram_data const* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 struct of_device_id* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct device_node*,char*,int,int ,struct of_phandle_args*) ;
 int VAR_2 ;

__attribute__((used)) static const struct sunxi_sram_data *FUNC_5(struct device_node *VAR_3,
        unsigned int *VAR_4)
{
 const struct of_device_id *VAR_5;
 const struct sunxi_sram_data *VAR_6;
 struct sunxi_sram_func *VAR_7;
 struct of_phandle_args VAR_8;
 u8 VAR_9;
 int VAR_10;

 VAR_10 = FUNC_4(VAR_3, "allwinner,sram", 1, 0,
            &VAR_8);
 if (VAR_10)
  return FUNC_0(VAR_10);

 if (!FUNC_1(VAR_8.np)) {
  VAR_10 = -VAR_0;
  goto err;
 }

 VAR_9 = VAR_8.args[0];

 VAR_5 = FUNC_2(VAR_2, VAR_8.np);
 if (!VAR_5) {
  VAR_10 = -VAR_1;
  goto err;
 }

 VAR_6 = VAR_5->data;
 if (!VAR_6) {
  VAR_10 = -VAR_1;
  goto err;
 };

 for (VAR_7 = VAR_6->func; VAR_7->func; VAR_7++) {
  if (VAR_9 == VAR_7->val) {
   if (VAR_4)
    *VAR_4 = VAR_7->reg_val;

   break;
  }
 }

 if (!VAR_7->func) {
  VAR_10 = -VAR_1;
  goto err;
 }

 FUNC_3(VAR_8.np);
 return VAR_5->data;

err:
 FUNC_3(VAR_8.np);
 return FUNC_0(VAR_10);
}
