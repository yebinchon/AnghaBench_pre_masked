
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct rza1_pinctrl {int dev; struct pinctrl_dev* pctl; } ;
struct rza1_mux_conf {int id; scalar_t__ pin; int port; scalar_t__ mux_flags; int mux_func; } ;
struct property {int length; } ;
struct pinctrl_dev {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;


 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,char const*) ;
 int FUNC_4 (int ,char*,int ,...) ;
 int FUNC_5 (unsigned long*) ;
 struct property* FUNC_6 (struct device_node*,char const*,int *) ;
 int FUNC_7 (struct device_node*,char const*,unsigned int,int*) ;
 int FUNC_8 (struct device_node*,struct pinctrl_dev*,unsigned long**,unsigned int*) ;
 int FUNC_9 (unsigned long) ;

__attribute__((used)) static int FUNC_10(struct rza1_pinctrl *VAR_7,
      struct device_node *VAR_8,
      struct rza1_mux_conf *VAR_9,
      unsigned int *VAR_10)
{
 struct pinctrl_dev *VAR_11 = VAR_7->pctl;
 char const *VAR_12 = "pinmux";
 unsigned long *VAR_13;
 unsigned int VAR_14;
 struct property *VAR_15;
 unsigned int VAR_16;
 u8 VAR_17;
 unsigned int VAR_18;
 int VAR_19;

 VAR_15 = FUNC_6(VAR_8, VAR_12, ((void*)0));
 if (!VAR_15) {
  FUNC_3(VAR_7->dev, "Missing %s property\n", VAR_12);
  return -VAR_1;
 }
 VAR_16 = VAR_15->length / sizeof(u32);





 VAR_19 = FUNC_8(VAR_8, VAR_11, &VAR_13,
           &VAR_14);
 if (VAR_19) {
  FUNC_4(VAR_7->dev,
   "Unable to parse pin configuration options for %pOFn\n",
   VAR_8);
  return VAR_19;
 }






 VAR_17 = 0;
 for (VAR_18 = 0; VAR_18 < VAR_14 && VAR_17 == 0; VAR_18++)
  switch (FUNC_9(VAR_13[VAR_18])) {
  case 129:
   VAR_17 |= VAR_2;
   break;
  case 128:
   VAR_17 |= VAR_3;
  default:
   break;

  }

 FUNC_5(VAR_13);


 for (VAR_18 = 0; VAR_18 < VAR_16; ++VAR_18) {
  u32 VAR_20;
  struct rza1_mux_conf *VAR_21 = &VAR_9[VAR_18];

  VAR_19 = FUNC_7(VAR_8, VAR_12, VAR_18, &VAR_20);
  if (VAR_19)
   return VAR_19;

  VAR_21->id = VAR_20 & VAR_4;
  VAR_21->port = FUNC_2(VAR_21->id);
  VAR_21->pin = FUNC_1(VAR_21->id);
  VAR_21->mux_func = FUNC_0(VAR_20);
  VAR_21->mux_flags = VAR_17;

  if (VAR_21->port >= VAR_5 ||
      VAR_21->pin >= VAR_6) {
   FUNC_4(VAR_7->dev,
    "Wrong port %u pin %u for %s property\n",
    VAR_21->port, VAR_21->pin, VAR_12);
   return -VAR_0;
  }

  VAR_10[VAR_18] = VAR_21->id;
 }

 return VAR_16;
}
