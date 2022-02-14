
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct rt2880_priv {int* gpio; TYPE_3__** func; TYPE_2__* groups; int dev; } ;
struct pinctrl_dev {int dummy; } ;
struct TYPE_6__ {int enabled; int pin_count; size_t* pins; int value; } ;
struct TYPE_5__ {int enabled; int shift; int mask; int gpio; TYPE_1__* func; int name; } ;
struct TYPE_4__ {int pin_count; size_t* pins; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 struct rt2880_priv* FUNC_1 (struct pinctrl_dev*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct pinctrl_dev *VAR_3,
       unsigned int VAR_4, unsigned int VAR_5)
{
 struct rt2880_priv *VAR_6 = FUNC_1(VAR_3);
 u32 VAR_7 = 0;
 u32 VAR_8 = VAR_1;
 int VAR_9;
 int VAR_10;


 if (VAR_6->groups[VAR_5].enabled) {
  FUNC_0(VAR_6->dev, "%s is already enabled\n",
   VAR_6->groups[VAR_5].name);
  return -VAR_0;
 }

 VAR_6->groups[VAR_5].enabled = 1;
 VAR_6->func[VAR_4]->enabled = 1;

 VAR_10 = VAR_6->groups[VAR_5].shift;
 if (VAR_10 >= 32) {
  VAR_10 -= 32;
  VAR_8 = VAR_2;
 }
 VAR_7 = FUNC_2(VAR_8);
 VAR_7 &= ~(VAR_6->groups[VAR_5].mask << VAR_10);


 for (VAR_9 = 0; VAR_9 < VAR_6->groups[VAR_5].func[0].pin_count; VAR_9++)
  VAR_6->gpio[VAR_6->groups[VAR_5].func[0].pins[VAR_9]] = 1;


 if (VAR_4 == 0) {
  VAR_7 |= VAR_6->groups[VAR_5].gpio << VAR_10;
 } else {
  for (VAR_9 = 0; VAR_9 < VAR_6->func[VAR_4]->pin_count; VAR_9++)
   VAR_6->gpio[VAR_6->func[VAR_4]->pins[VAR_9]] = 0;
  VAR_7 |= VAR_6->func[VAR_4]->value << VAR_10;
 }
 FUNC_3(VAR_7, VAR_8);

 return 0;
}
