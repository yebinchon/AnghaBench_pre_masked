
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sec_regulator_data {size_t id; scalar_t__ ext_control_gpiod; int reg_node; } ;
struct sec_opmode_data {size_t id; size_t mode; } ;
struct s5m8767_info {int num_regulators; int dev; struct sec_opmode_data* opmode; } ;
struct regulator_config {scalar_t__ ena_gpiod; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,...) ;
 int** VAR_2 ;

__attribute__((used)) static void FUNC_1(struct s5m8767_info *VAR_3,
  struct sec_regulator_data *VAR_4,
  struct regulator_config *VAR_5)
{
 int VAR_6, VAR_7 = 0;

 if (VAR_4->id != VAR_0)
  return;


 for (VAR_6 = 0; VAR_6 < VAR_3->num_regulators; VAR_6++) {
  const struct sec_opmode_data *VAR_8 = &VAR_3->opmode[VAR_6];
  if (VAR_8->id == VAR_4->id) {
   VAR_7 = VAR_2[VAR_4->id][VAR_8->mode];
   break;
  }
 }
 if (VAR_7 != VAR_1) {
  FUNC_0(VAR_3->dev,
    "ext-control for %pOFn: mismatched op_mode (%x), ignoring\n",
    VAR_4->reg_node, VAR_7);
  return;
 }

 if (!VAR_4->ext_control_gpiod) {
  FUNC_0(VAR_3->dev,
    "ext-control for %pOFn: GPIO not valid, ignoring\n",
    VAR_4->reg_node);
  return;
 }

 VAR_5->ena_gpiod = VAR_4->ext_control_gpiod;
}
