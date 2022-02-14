
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct realtek_smi {int num_ports; int irqdomain; TYPE_1__* dev; int map; } ;
struct device_node {int dummy; } ;
struct TYPE_4__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,char*,...) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,int,int *,int ,int ,char*,struct realtek_smi*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct device_node*,int ,int *,struct realtek_smi*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int) ;
 unsigned long FUNC_7 (int ) ;
 struct device_node* FUNC_8 (int ,char*) ;
 int FUNC_9 (struct device_node*,int ) ;
 int FUNC_10 (struct device_node*) ;
 int FUNC_11 (int ,int ,int *) ;
 int FUNC_12 (int ,int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_13(struct realtek_smi *VAR_8)
{
 struct device_node *VAR_9;
 unsigned long VAR_10;
 int VAR_11;
 int VAR_12;
 u32 VAR_13;
 int VAR_14;

 VAR_9 = FUNC_8(VAR_8->dev->of_node, "interrupt-controller");
 if (!VAR_9) {
  FUNC_0(VAR_8->dev, "missing child interrupt-controller node\n");
  return -VAR_0;
 }

 VAR_11 = FUNC_9(VAR_9, 0);
 if (VAR_11 <= 0) {
  FUNC_0(VAR_8->dev, "failed to get parent IRQ\n");
  VAR_12 = VAR_11 ? VAR_11 : -VAR_0;
  goto out_put_node;
 }


 VAR_12 = FUNC_11(VAR_8->map, VAR_4,
     &VAR_13);
 if (VAR_12) {
  FUNC_0(VAR_8->dev, "can't read interrupt status\n");
  goto out_put_node;
 }


 VAR_10 = FUNC_7(FUNC_5(VAR_11));
 switch (VAR_10) {
 case 128:
 case 130:
  FUNC_1(VAR_8->dev, "active high/rising IRQ\n");
  VAR_13 = 0;
  break;
 case 131:
 case 129:
  FUNC_1(VAR_8->dev, "active low/falling IRQ\n");
  VAR_13 = VAR_3;
  break;
 }
 VAR_12 = FUNC_12(VAR_8->map, VAR_2,
     VAR_3,
     VAR_13);
 if (VAR_12) {
  FUNC_0(VAR_8->dev, "could not configure IRQ polarity\n");
  goto out_put_node;
 }

 VAR_12 = FUNC_2(VAR_8->dev, VAR_11, ((void*)0),
     VAR_6, VAR_1,
     "RTL8366RB", VAR_8);
 if (VAR_12) {
  FUNC_0(VAR_8->dev, "unable to request irq: %d\n", VAR_12);
  goto out_put_node;
 }
 VAR_8->irqdomain = FUNC_4(VAR_9,
            VAR_5,
            &VAR_7,
            VAR_8);
 if (!VAR_8->irqdomain) {
  FUNC_0(VAR_8->dev, "failed to create IRQ domain\n");
  VAR_12 = -VAR_0;
  goto out_put_node;
 }
 for (VAR_14 = 0; VAR_14 < VAR_8->num_ports; VAR_14++)
  FUNC_6(FUNC_3(VAR_8->irqdomain, VAR_14), VAR_11);

out_put_node:
 FUNC_10(VAR_9);
 return VAR_12;
}
