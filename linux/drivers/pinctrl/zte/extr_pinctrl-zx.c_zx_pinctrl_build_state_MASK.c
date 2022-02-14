
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zx_pinctrl_soc_info {int npins; struct pinctrl_pin_desc* pins; } ;
struct zx_pinctrl {struct pinctrl_dev* pctldev; struct zx_pinctrl_soc_info* info; } ;
struct zx_pin_data {struct zx_mux_desc* muxes; } ;
struct zx_mux_desc {char* name; } ;
struct platform_device {int dev; } ;
struct pinctrl_pin_desc {char* name; struct zx_pin_data* drv_data; int number; } ;
struct pinctrl_dev {int num_groups; int num_functions; int pin_function_tree; int pin_group_tree; } ;
struct group_desc {char* name; int* pins; int num_pins; int num_group_names; char** group_names; } ;
struct function_desc {char* name; int* pins; int num_pins; int num_group_names; char** group_names; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int *,int,int,int ) ;
 struct group_desc* FUNC_1 (int,int,int ) ;
 int FUNC_2 (struct group_desc*) ;
 struct group_desc* FUNC_3 (struct group_desc*,int,int ) ;
 struct zx_pinctrl* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int *,int,struct group_desc*) ;
 scalar_t__ FUNC_6 (char*,char*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_2)
{
 struct zx_pinctrl *VAR_3 = FUNC_4(VAR_2);
 struct zx_pinctrl_soc_info *VAR_4 = VAR_3->info;
 struct pinctrl_dev *VAR_5 = VAR_3->pctldev;
 struct function_desc *VAR_6;
 int VAR_7;
 struct group_desc *VAR_8;
 int VAR_9;
 int VAR_10;


 VAR_9 = VAR_4->npins;
 VAR_8 = FUNC_0(&VAR_2->dev, VAR_9, sizeof(*VAR_8),
         VAR_1);
 if (!VAR_8)
  return -VAR_0;

 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
  const struct pinctrl_pin_desc *VAR_11 = VAR_4->pins + VAR_10;
  struct group_desc *VAR_12 = VAR_8 + VAR_10;

  VAR_12->name = VAR_11->name;
  VAR_12->pins = (int *) &VAR_11->number;
  VAR_12->num_pins = 1;
  FUNC_5(&VAR_5->pin_group_tree, VAR_10, VAR_12);
 }

 VAR_5->num_groups = VAR_9;


 VAR_6 = FUNC_1(VAR_4->npins, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = 0;
 for (VAR_10 = 0; VAR_10 < VAR_4->npins; VAR_10++) {
  const struct pinctrl_pin_desc *VAR_13 = VAR_4->pins + VAR_10;
  struct zx_pin_data *VAR_14 = VAR_13->drv_data;
  struct zx_mux_desc *VAR_15;


  if (!VAR_14)
   continue;


  VAR_15 = VAR_14->muxes;
  while (VAR_15->name) {
   struct function_desc *VAR_16 = VAR_6;


   while (VAR_16->name) {
    if (FUNC_6(VAR_15->name, VAR_16->name) == 0) {

     VAR_16->num_group_names++;
     break;
    }
    VAR_16++;
   }

   if (!VAR_16->name) {

    VAR_16->name = VAR_15->name;
    VAR_16->num_group_names = 1;
    FUNC_5(&VAR_5->pin_function_tree,
        VAR_7++, VAR_16);
   }

   VAR_15++;
  }
 }

 VAR_5->num_functions = VAR_7;
 VAR_6 = FUNC_3(VAR_6, VAR_7 * sizeof(*VAR_6),
        VAR_1);


 for (VAR_10 = 0; VAR_10 < VAR_4->npins; VAR_10++) {
  const struct pinctrl_pin_desc *VAR_17 = VAR_4->pins + VAR_10;
  struct zx_pin_data *VAR_18 = VAR_17->drv_data;
  struct zx_mux_desc *VAR_19;

  if (!VAR_18)
   continue;

  VAR_19 = VAR_18->muxes;
  while (VAR_19->name) {
   struct function_desc *VAR_20;
   const char **VAR_21;
   int VAR_22;


   for (VAR_22 = 0; VAR_22 < VAR_7; VAR_22++)
    if (FUNC_6(VAR_6[VAR_22].name, VAR_19->name) == 0)
     break;

   VAR_20 = VAR_6 + VAR_22;
   if (!VAR_20->group_names) {
    VAR_20->group_names = FUNC_0(&VAR_2->dev,
      VAR_20->num_group_names,
      sizeof(*VAR_20->group_names),
      VAR_1);
    if (!VAR_20->group_names) {
     FUNC_2(VAR_6);
     return -VAR_0;
    }
   }

   VAR_21 = VAR_20->group_names;
   while (*VAR_21)
    VAR_21++;
   *VAR_21 = VAR_17->name;

   VAR_19++;
  }
 }

 return 0;
}
