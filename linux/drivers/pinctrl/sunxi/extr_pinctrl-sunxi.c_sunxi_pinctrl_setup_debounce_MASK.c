
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sunxi_pinctrl {TYPE_1__* desc; scalar_t__ membase; int dev; } ;
struct device_node {int dummy; } ;
struct clk {int dummy; } ;
struct TYPE_2__ {int irq_banks; } ;


 unsigned long FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*) ;
 int VAR_0 ;
 struct clk* FUNC_3 (int ,char*) ;
 int FUNC_4 (struct device_node*) ;
 int FUNC_5 (struct device_node*,char*,int *) ;
 int FUNC_6 (struct device_node*,char*,int,int *) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int) ;
 unsigned int FUNC_8 (struct clk*,unsigned long,unsigned int*) ;
 int FUNC_9 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct sunxi_pinctrl *VAR_1,
     struct device_node *VAR_2)
{
 unsigned int VAR_3, VAR_4;
 unsigned int VAR_5, VAR_6;
 struct clk *VAR_7, *VAR_8;
 u8 VAR_9, VAR_10;
 int VAR_11, VAR_12;


 if (FUNC_4(VAR_2) != 3)
  return 0;


 if (!FUNC_5(VAR_2, "input-debounce", ((void*)0)))
  return 0;

 VAR_8 = FUNC_3(VAR_1->dev, "losc");
 if (FUNC_1(VAR_8))
  return FUNC_2(VAR_8);

 VAR_7 = FUNC_3(VAR_1->dev, "hosc");
 if (FUNC_1(VAR_7))
  return FUNC_2(VAR_7);

 for (VAR_11 = 0; VAR_11 < VAR_1->desc->irq_banks; VAR_11++) {
  unsigned long VAR_13;
  u32 VAR_14;

  VAR_12 = FUNC_6(VAR_2, "input-debounce",
       VAR_11, &VAR_14);
  if (VAR_12)
   return VAR_12;

  if (!VAR_14)
   continue;

  VAR_13 = FUNC_0(VAR_0, VAR_14);
  VAR_6 = FUNC_8(VAR_8,
         VAR_13,
         &VAR_4);

  VAR_5 = FUNC_8(VAR_7,
         VAR_13,
         &VAR_3);

  if (VAR_3 < VAR_4) {
   VAR_9 = VAR_5;
   VAR_10 = 1;
  } else {
   VAR_9 = VAR_6;
   VAR_10 = 0;
  }

  FUNC_9(VAR_10 | VAR_9 << 4,
         VAR_1->membase +
         FUNC_7(VAR_1->desc, VAR_11));
 }

 return 0;
}
