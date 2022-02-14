
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct regmap_field {int * ops; struct mux_control* mux; } ;
struct regmap {int * ops; struct mux_control* mux; } ;
struct reg_field {int reg; int msb; int lsb; } ;
struct device {int parent; struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct mux_control {int states; int idle_state; } ;
struct mux_chip {int * ops; struct mux_control* mux; } ;
struct device_node {int parent; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 struct regmap_field* FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (struct regmap_field*) ;
 int VAR_2 ;
 int FUNC_3 (struct regmap_field*) ;
 int FUNC_4 (struct device*,char*,int,...) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 struct regmap_field* FUNC_6 (struct device*,int,int) ;
 int FUNC_7 (struct device*,struct regmap_field*) ;
 struct regmap_field* FUNC_8 (struct device*,struct regmap_field*,struct reg_field) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 struct regmap_field** FUNC_11 (struct regmap_field*) ;
 int VAR_3 ;
 scalar_t__ FUNC_12 (struct device_node*,char*) ;
 int FUNC_13 (struct device_node*,char*) ;
 int FUNC_14 (struct device_node*,char*,int,int*) ;
 struct regmap_field* FUNC_15 (int ) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_4)
{
 struct device *VAR_5 = &VAR_4->dev;
 struct device_node *VAR_6 = VAR_5->of_node;
 struct regmap_field **VAR_7;
 struct mux_chip *VAR_8;
 struct regmap *VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;

 if (FUNC_12(VAR_6, "mmio-mux"))
  VAR_9 = FUNC_15(VAR_6->parent);
 else
  VAR_9 = FUNC_5(VAR_5->parent, ((void*)0)) ?: FUNC_0(-VAR_1);
 if (FUNC_2(VAR_9)) {
  VAR_11 = FUNC_3(VAR_9);
  FUNC_4(VAR_5, "failed to get regmap: %d\n", VAR_11);
  return VAR_11;
 }

 VAR_11 = FUNC_13(VAR_6, "mux-reg-masks");
 if (VAR_11 == 0 || VAR_11 % 2)
  VAR_11 = -VAR_0;
 if (VAR_11 < 0) {
  FUNC_4(VAR_5, "mux-reg-masks property missing or invalid: %d\n",
   VAR_11);
  return VAR_11;
 }
 VAR_10 = VAR_11 / 2;

 VAR_8 = FUNC_6(VAR_5, VAR_10, VAR_10 *
           sizeof(*VAR_7));
 if (FUNC_2(VAR_8))
  return FUNC_3(VAR_8);

 VAR_7 = FUNC_11(VAR_8);

 for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
  struct mux_control *VAR_13 = &VAR_8->mux[VAR_12];
  struct reg_field VAR_14;
  s32 VAR_15 = VAR_2;
  u32 VAR_16, VAR_17;
  int VAR_18;

  VAR_11 = FUNC_14(VAR_6, "mux-reg-masks",
       2 * VAR_12, &VAR_16);
  if (!VAR_11)
   VAR_11 = FUNC_14(VAR_6, "mux-reg-masks",
        2 * VAR_12 + 1, &VAR_17);
  if (VAR_11 < 0) {
   FUNC_4(VAR_5, "bitfield %d: failed to read mux-reg-masks property: %d\n",
    VAR_12, VAR_11);
   return VAR_11;
  }

  VAR_14.reg = VAR_16;
  VAR_14.msb = FUNC_10(VAR_17) - 1;
  VAR_14.lsb = FUNC_9(VAR_17) - 1;

  if (VAR_17 != FUNC_1(VAR_14.msb, VAR_14.lsb)) {
   FUNC_4(VAR_5, "bitfield %d: invalid mask 0x%x\n",
    VAR_12, VAR_17);
   return -VAR_0;
  }

  VAR_7[VAR_12] = FUNC_8(VAR_5, VAR_9, VAR_14);
  if (FUNC_2(VAR_7[VAR_12])) {
   VAR_11 = FUNC_3(VAR_7[VAR_12]);
   FUNC_4(VAR_5, "bitfield %d: failed allocate: %d\n",
    VAR_12, VAR_11);
   return VAR_11;
  }

  VAR_18 = 1 + VAR_14.msb - VAR_14.lsb;
  VAR_13->states = 1 << VAR_18;

  FUNC_14(VAR_6, "idle-states", VAR_12,
        (u32 *)&VAR_15);
  if (VAR_15 != VAR_2) {
   if (VAR_15 < 0 || VAR_15 >= VAR_13->states) {
    FUNC_4(VAR_5, "bitfield: %d: out of range idle state %d\n",
     VAR_12, VAR_15);
    return -VAR_0;
   }

   VAR_13->idle_state = VAR_15;
  }
 }

 VAR_8->ops = &VAR_3;

 return FUNC_7(VAR_5, VAR_8);
}
