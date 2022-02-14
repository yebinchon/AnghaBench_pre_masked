
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rza2_pinctrl_priv {int base; int dev; } ;
struct pinctrl_dev {int dummy; } ;
struct group_desc {unsigned int num_pins; int * pins; } ;
struct function_desc {unsigned int* data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ,int ,unsigned int) ;
 struct rza2_pinctrl_priv* FUNC_3 (struct pinctrl_dev*) ;
 struct group_desc* FUNC_4 (struct pinctrl_dev*,unsigned int) ;
 struct function_desc* FUNC_5 (struct pinctrl_dev*,unsigned int) ;
 int * VAR_1 ;
 int FUNC_6 (int ,size_t,int ,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct pinctrl_dev *VAR_2, unsigned int VAR_3,
   unsigned int VAR_4)
{
 struct rza2_pinctrl_priv *VAR_5 = FUNC_3(VAR_2);
 struct function_desc *VAR_6;
 unsigned int VAR_7, *VAR_8;
 struct group_desc *VAR_9;

 VAR_9 = FUNC_4(VAR_2, VAR_4);
 if (!VAR_9)
  return -VAR_0;

 VAR_6 = FUNC_5(VAR_2, VAR_3);
 if (!VAR_6)
  return -VAR_0;

 VAR_8 = VAR_6->data;

 for (VAR_7 = 0; VAR_7 < VAR_9->num_pins; ++VAR_7) {
  FUNC_2(VAR_5->dev, "Setting P%c_%d to PSEL=%d\n",
   VAR_1[FUNC_1(VAR_9->pins[VAR_7])],
   FUNC_0(VAR_9->pins[VAR_7]),
   VAR_8[VAR_7]);
  FUNC_6(
   VAR_5->base,
   FUNC_1(VAR_9->pins[VAR_7]),
   FUNC_0(VAR_9->pins[VAR_7]),
   VAR_8[VAR_7]);
 }

 return 0;
}
