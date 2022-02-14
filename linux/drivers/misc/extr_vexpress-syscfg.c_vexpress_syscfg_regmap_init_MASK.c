
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct vexpress_syscfg_func {int num_templates; void* regmap; int list; int * template; struct vexpress_syscfg* syscfg; } ;
struct vexpress_syscfg {int funcs; } ;
typedef void regmap ;
struct property {int length; int * value; } ;
struct device {int of_node; } ;
typedef int __be32 ;
struct TYPE_3__ {int max_register; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int const*) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct device*,char*,struct vexpress_syscfg_func*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_10 (struct vexpress_syscfg_func*) ;
 struct vexpress_syscfg_func* FUNC_11 (int ,int ) ;
 int FUNC_12 (int *,int *) ;
 scalar_t__ FUNC_13 (int ,char*) ;
 struct property* FUNC_14 (int ,char*,int *) ;
 void* FUNC_15 (struct device*,int *,struct vexpress_syscfg_func*,TYPE_1__*) ;
 int FUNC_16 (struct vexpress_syscfg_func*,int ,int) ;
 int VAR_3 ;
 int FUNC_17 (int ,scalar_t__*,scalar_t__*,scalar_t__*) ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static struct regmap *FUNC_18(struct device *VAR_5,
  void *VAR_6)
{
 int VAR_7;
 struct vexpress_syscfg *VAR_8 = VAR_6;
 struct vexpress_syscfg_func *VAR_9;
 struct property *VAR_10;
 const __be32 *VAR_11 = ((void*)0);
 __be32 VAR_12[4];
 int VAR_13;
 u32 VAR_14, VAR_15, VAR_16;
 int VAR_17;

 VAR_7 = FUNC_17(VAR_5->of_node, &VAR_14,
    &VAR_15, &VAR_16);
 if (VAR_7)
  return FUNC_0(VAR_7);

 VAR_10 = FUNC_14(VAR_5->of_node,
   "arm,vexpress-sysreg,func", ((void*)0));
 if (!VAR_10)
  return FUNC_0(-VAR_0);

 VAR_13 = VAR_10->length / sizeof(u32) / 2;
 VAR_11 = VAR_10->value;





 if (VAR_13 == 1 && FUNC_13(VAR_5->of_node,
   "arm,vexpress-energy")) {
  VAR_13 = 2;
  VAR_12[0] = *VAR_11;
  VAR_12[2] = *VAR_11++;
  VAR_12[1] = *VAR_11;
  VAR_12[3] = FUNC_8(FUNC_7(VAR_11) + 1);
  VAR_11 = VAR_12;
 }

 VAR_9 = FUNC_11(FUNC_16(VAR_9, VAR_3, VAR_13), VAR_2);
 if (!VAR_9)
  return FUNC_0(-VAR_1);

 VAR_9->syscfg = VAR_8;
 VAR_9->num_templates = VAR_13;

 for (VAR_17 = 0; VAR_17 < VAR_13; VAR_17++) {
  u32 VAR_18, VAR_19;

  VAR_18 = FUNC_7(VAR_11++);
  VAR_19 = FUNC_7(VAR_11++);

  FUNC_9(VAR_5, "func %p: %u/%u/%u/%u/%u\n",
    VAR_9, VAR_14, VAR_15, VAR_16,
    VAR_18, VAR_19);

  VAR_9->template[VAR_17] = FUNC_2(VAR_16);
  VAR_9->template[VAR_17] |= FUNC_6(VAR_14);
  VAR_9->template[VAR_17] |= FUNC_5(VAR_15);
  VAR_9->template[VAR_17] |= FUNC_4(VAR_18);
  VAR_9->template[VAR_17] |= FUNC_3(VAR_19);
 }

 VAR_4.max_register = VAR_13 - 1;

 VAR_9->regmap = FUNC_15(VAR_5, ((void*)0), VAR_9,
   &VAR_4);

 if (FUNC_1(VAR_9->regmap)) {
  void *VAR_20 = VAR_9->regmap;

  FUNC_10(VAR_9);
  return VAR_20;
 }

 FUNC_12(&VAR_9->list, &VAR_8->funcs);

 return VAR_9->regmap;
}
