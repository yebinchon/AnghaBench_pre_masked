
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct property {char* name; int * value; } ;
struct pinctrl_dev {int dummy; } ;
struct pinctrl {TYPE_1__* dev; } ;
struct device_node {int dummy; } ;
typedef int phandle ;
typedef int __be32 ;
struct TYPE_3__ {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,char*,char*,int) ;
 int FUNC_3 (struct pinctrl*,char const*) ;
 int FUNC_4 (struct pinctrl*,struct pinctrl_dev*,char const*,struct device_node*) ;
 char* FUNC_5 (int ,char*,int) ;
 int FUNC_6 (char*) ;
 struct device_node* FUNC_7 (int ) ;
 struct property* FUNC_8 (struct device_node*,char*,int*) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (struct device_node*) ;
 int FUNC_11 (struct device_node*) ;
 int FUNC_12 (struct device_node*,char*,int,char const**) ;
 int FUNC_13 (struct pinctrl*) ;
 int FUNC_14 (char*) ;

int FUNC_15(struct pinctrl *VAR_3, struct pinctrl_dev *VAR_4)
{
 struct device_node *VAR_5 = VAR_3->dev->of_node;
 int VAR_6, VAR_7;
 char *VAR_8;
 struct property *VAR_9;
 const char *VAR_10;
 const __be32 *VAR_11;
 int VAR_12, VAR_13;
 phandle VAR_14;
 struct device_node *VAR_15;


 if (!VAR_5) {
  if (FUNC_9())
   FUNC_1(VAR_3->dev,
    "no of_node; not parsing pinctrl DT\n");
  return 0;
 }


 FUNC_10(VAR_5);


 for (VAR_6 = 0; ; VAR_6++) {

  VAR_8 = FUNC_5(VAR_2, "pinctrl-%d", VAR_6);
  VAR_9 = FUNC_8(VAR_5, VAR_8, &VAR_12);
  FUNC_6(VAR_8);
  if (!VAR_9) {
   if (VAR_6 == 0) {
    FUNC_11(VAR_5);
    return -VAR_1;
   }
   break;
  }
  VAR_11 = VAR_9->value;
  VAR_12 /= sizeof(*VAR_11);


  VAR_7 = FUNC_12(VAR_5, "pinctrl-names",
          VAR_6, &VAR_10);





  if (VAR_7 < 0)
   VAR_10 = VAR_9->name + FUNC_14("pinctrl-");


  for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++) {
   VAR_14 = FUNC_0(VAR_11++);


   VAR_15 = FUNC_7(VAR_14);
   if (!VAR_15) {
    FUNC_2(VAR_3->dev,
     "prop %s index %i invalid phandle\n",
     VAR_9->name, VAR_13);
    VAR_7 = -VAR_0;
    goto err;
   }


   VAR_7 = FUNC_4(VAR_3, VAR_4, VAR_10,
         VAR_15);
   FUNC_11(VAR_15);
   if (VAR_7 < 0)
    goto err;
  }


  if (!VAR_12) {
   VAR_7 = FUNC_3(VAR_3, VAR_10);
   if (VAR_7 < 0)
    goto err;
  }
 }

 return 0;

err:
 FUNC_13(VAR_3);
 return VAR_7;
}
