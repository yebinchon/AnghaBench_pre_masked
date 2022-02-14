
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct stmfx {TYPE_1__* dev; int map; int irq_domain; } ;
struct i2c_client {int irq; } ;
struct TYPE_3__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,int ,int *,int ,int,char*,struct stmfx*) ;
 struct stmfx* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (int ,int ,int ,int *,struct stmfx*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (struct i2c_client*) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_10)
{
 struct stmfx *VAR_11 = FUNC_2(VAR_10);
 u32 VAR_12 = 0, VAR_13;
 int VAR_14;

 VAR_11->irq_domain = FUNC_3(VAR_11->dev->of_node,
        VAR_7, 0,
        &VAR_9, VAR_11);
 if (!VAR_11->irq_domain) {
  FUNC_0(VAR_11->dev, "Failed to create IRQ domain\n");
  return -VAR_0;
 }

 if (!FUNC_5(VAR_11->dev->of_node, "drive-open-drain"))
  VAR_12 |= VAR_6;

 VAR_13 = FUNC_4(VAR_10->irq);
 if ((VAR_13 & VAR_2) ||
     (VAR_13 & VAR_3))
  VAR_12 |= VAR_5;

 VAR_14 = FUNC_6(VAR_11->map, VAR_4, VAR_12);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_1(VAR_11->dev, VAR_10->irq,
     ((void*)0), VAR_8,
     VAR_13 | VAR_1,
     "stmfx", VAR_11);
 if (VAR_14)
  FUNC_7(VAR_10);

 return VAR_14;
}
