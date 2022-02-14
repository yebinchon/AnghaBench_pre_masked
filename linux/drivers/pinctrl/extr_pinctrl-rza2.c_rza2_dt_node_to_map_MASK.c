
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u32 ;
struct rza2_pinctrl_priv {int dev; } ;
struct property {int length; } ;
struct TYPE_3__ {char* group; char* function; } ;
struct TYPE_4__ {TYPE_1__ mux; } ;
struct pinctrl_map {TYPE_2__ data; int type; } ;
struct pinctrl_dev {int dummy; } ;
struct device_node {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,struct device_node*,int) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (int ,char*) ;
 unsigned int* FUNC_4 (int ,int,int,int ) ;
 char** FUNC_5 (int ,int,int ) ;
 struct pinctrl_map* FUNC_6 (int,int ) ;
 struct property* FUNC_7 (struct device_node*,char*,int *) ;
 int FUNC_8 (struct device_node*,char*,int,unsigned int*) ;
 struct rza2_pinctrl_priv* FUNC_9 (struct pinctrl_dev*) ;
 int FUNC_10 (struct pinctrl_dev*,char*,unsigned int*,int,int *) ;
 int FUNC_11 (struct pinctrl_dev*,int) ;
 int FUNC_12 (struct pinctrl_dev*,char*,char const**,int,unsigned int*) ;
 int FUNC_13 (struct pinctrl_dev*,int) ;

__attribute__((used)) static int FUNC_14(struct pinctrl_dev *VAR_5,
          struct device_node *VAR_6,
          struct pinctrl_map **VAR_7,
          unsigned int *VAR_8)
{
 struct rza2_pinctrl_priv *VAR_9 = FUNC_9(VAR_5);
 unsigned int *VAR_10, *VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 struct property *VAR_17;
 const char **VAR_18;


 VAR_17 = FUNC_7(VAR_6, "pinmux", ((void*)0));
 if (!VAR_17) {
  FUNC_3(VAR_9->dev, "Missing pinmux property\n");
  return -VAR_0;
 }
 VAR_14 = VAR_17->length / sizeof(u32);

 VAR_10 = FUNC_4(VAR_9->dev, VAR_14, sizeof(*VAR_10), VAR_2);
 VAR_11 = FUNC_4(VAR_9->dev, VAR_14, sizeof(*VAR_11),
    VAR_2);
 VAR_18 = FUNC_5(VAR_9->dev, sizeof(*VAR_18), VAR_2);
 if (!VAR_10 || !VAR_11 || !VAR_18)
  return -VAR_1;


 for (VAR_12 = 0; VAR_12 < VAR_14; ++VAR_12) {
  u32 VAR_19;

  VAR_13 = FUNC_8(VAR_6, "pinmux", VAR_12, &VAR_19);
  if (VAR_13)
   return VAR_13;
  VAR_10[VAR_12] = VAR_19 & VAR_3;
  VAR_11[VAR_12] = FUNC_0(VAR_19);
 }


 VAR_15 = FUNC_10(VAR_5, VAR_6->name, VAR_10, VAR_14, ((void*)0));
 if (VAR_15 < 0)
  return VAR_15;





 VAR_18[0] = VAR_6->name;
 VAR_16 = FUNC_12(VAR_5, VAR_6->name, VAR_18, 1,
        VAR_11);
 if (VAR_16 < 0) {
  VAR_13 = VAR_16;
  goto remove_group;
 }

 FUNC_1(VAR_9->dev, "Parsed %pOF with %d pins\n", VAR_6, VAR_14);


 *VAR_8 = 0;
 *VAR_7 = FUNC_6(sizeof(**VAR_7), VAR_2);
 if (!*VAR_7) {
  VAR_13 = -VAR_1;
  goto remove_function;
 }

 (*VAR_7)->type = VAR_4;
 (*VAR_7)->data.mux.group = VAR_6->name;
 (*VAR_7)->data.mux.function = VAR_6->name;
 *VAR_8 = 1;

 return 0;

remove_function:
 FUNC_13(VAR_5, VAR_16);

remove_group:
 FUNC_11(VAR_5, VAR_15);

 FUNC_2(VAR_9->dev, "Unable to parse DT node %s\n", VAR_6->name);

 return VAR_13;
}
