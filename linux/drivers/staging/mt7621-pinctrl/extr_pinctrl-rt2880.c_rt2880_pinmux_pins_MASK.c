
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct rt2880_priv {int func_count; int max_pins; int* gpio; TYPE_3__* desc; TYPE_2__* pads; int dev; TYPE_1__** func; } ;
struct pinctrl_pin_desc {int dummy; } ;
struct TYPE_6__ {int npins; TYPE_2__* pins; } ;
struct TYPE_5__ {int number; char* name; } ;
struct TYPE_4__ {int pin_count; int* pins; int pin_first; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 void* FUNC_1 (int ,int,int,int ) ;
 char* FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int*,int,int) ;
 int FUNC_4 (char*,int,char*,int) ;

__attribute__((used)) static int FUNC_5(struct rt2880_priv *VAR_2)
{
 int VAR_3, VAR_4;





 for (VAR_3 = 0; VAR_3 < VAR_2->func_count; VAR_3++) {
  int VAR_5;

  if (!VAR_2->func[VAR_3]->pin_count)
   continue;

  VAR_2->func[VAR_3]->pins = FUNC_1(VAR_2->dev,
      VAR_2->func[VAR_3]->pin_count,
      sizeof(int),
      VAR_1);
  for (VAR_4 = 0; VAR_4 < VAR_2->func[VAR_3]->pin_count; VAR_4++)
   VAR_2->func[VAR_3]->pins[VAR_4] = VAR_2->func[VAR_3]->pin_first + VAR_4;

  VAR_5 = VAR_2->func[VAR_3]->pin_first + VAR_2->func[VAR_3]->pin_count;
  if (VAR_5 > VAR_2->max_pins)
   VAR_2->max_pins = VAR_5;
 }


 VAR_2->gpio = FUNC_1(VAR_2->dev, VAR_2->max_pins, sizeof(u8), VAR_1);

 VAR_2->pads = FUNC_1(VAR_2->dev, VAR_2->max_pins,
          sizeof(struct pinctrl_pin_desc), VAR_1);
 if (!VAR_2->pads || !VAR_2->gpio) {
  FUNC_0(VAR_2->dev, "Failed to allocate gpio data\n");
  return -VAR_0;
 }

 FUNC_3(VAR_2->gpio, 1, sizeof(u8) * VAR_2->max_pins);
 for (VAR_3 = 0; VAR_3 < VAR_2->func_count; VAR_3++) {
  if (!VAR_2->func[VAR_3]->pin_count)
   continue;

  for (VAR_4 = 0; VAR_4 < VAR_2->func[VAR_3]->pin_count; VAR_4++)
   VAR_2->gpio[VAR_2->func[VAR_3]->pins[VAR_4]] = 0;
 }


 VAR_2->gpio[0] = 1;


 for (VAR_3 = 0; VAR_3 < VAR_2->max_pins; VAR_3++) {

  char *VAR_6 = FUNC_2(VAR_2->dev, 5, VAR_1);

  if (!VAR_6)
   return -VAR_0;
  FUNC_4(VAR_6, 5, "io%d", VAR_3);
  VAR_2->pads[VAR_3].number = VAR_3;
  VAR_2->pads[VAR_3].name = VAR_6;
 }
 VAR_2->desc->pins = VAR_2->pads;
 VAR_2->desc->npins = VAR_2->max_pins;

 return 0;
}
