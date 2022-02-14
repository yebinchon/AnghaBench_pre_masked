
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rza1_port {unsigned int id; int lock; struct pinctrl_pin_desc* pins; int base; } ;
struct TYPE_2__ {unsigned int npins; struct pinctrl_pin_desc* pins; } ;
struct rza1_pinctrl {int dev; int pctl; TYPE_1__ desc; int base; struct rza1_port* ports; struct pinctrl_pin_desc* pins; } ;
struct pinctrl_pin_desc {unsigned int number; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,char*,unsigned int,unsigned int) ;
 void* FUNC_4 (int ,unsigned int,int,int ) ;
 int FUNC_5 (int ,TYPE_1__*,struct rza1_pinctrl*,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct rza1_pinctrl*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct rza1_pinctrl *VAR_5)
{
 struct pinctrl_pin_desc *VAR_6;
 struct rza1_port *VAR_7;
 unsigned int VAR_8;
 int VAR_9;

 VAR_6 = FUNC_4(VAR_5->dev, VAR_2, sizeof(*VAR_6),
       VAR_1);
 VAR_7 = FUNC_4(VAR_5->dev, VAR_3, sizeof(*VAR_7),
        VAR_1);
 if (!VAR_6 || !VAR_7)
  return -VAR_0;

 VAR_5->pins = VAR_6;
 VAR_5->desc.pins = VAR_6;
 VAR_5->desc.npins = VAR_2;
 VAR_5->ports = VAR_7;

 for (VAR_8 = 0; VAR_8 < VAR_2; ++VAR_8) {
  unsigned int VAR_10 = FUNC_0(VAR_8);
  unsigned int VAR_11 = FUNC_1(VAR_8);

  VAR_6[VAR_8].number = VAR_8;
  VAR_6[VAR_8].name = FUNC_3(VAR_5->dev, VAR_1,
           "P%u-%u", VAR_11, VAR_10);
  if (!VAR_6[VAR_8].name)
   return -VAR_0;

  if (VAR_8 % VAR_4 == 0) {




   unsigned int VAR_12 = FUNC_1(VAR_8);

   VAR_7[VAR_12].id = VAR_12;
   VAR_7[VAR_12].base = VAR_5->base;
   VAR_7[VAR_12].pins = &VAR_6[VAR_8];
   FUNC_8(&VAR_7[VAR_12].lock);
  }
 }

 VAR_9 = FUNC_5(VAR_5->dev, &VAR_5->desc,
          VAR_5, &VAR_5->pctl);
 if (VAR_9) {
  FUNC_2(VAR_5->dev,
   "RZ/A1 pin controller registration failed\n");
  return VAR_9;
 }

 VAR_9 = FUNC_6(VAR_5->pctl);
 if (VAR_9) {
  FUNC_2(VAR_5->dev,
   "RZ/A1 pin controller failed to start\n");
  return VAR_9;
 }

 VAR_9 = FUNC_7(VAR_5);
 if (VAR_9) {
  FUNC_2(VAR_5->dev, "RZ/A1 GPIO registration failed\n");
  return VAR_9;
 }

 return 0;
}
