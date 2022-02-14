
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int regmap; } ;
struct tcpci_chip {int tcpci; TYPE_1__ data; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 struct tcpci_chip* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (struct i2c_client*,int *) ;
 int FUNC_5 (int *,int ,int *,int ,int,int ,struct tcpci_chip*) ;
 int FUNC_6 (struct i2c_client*,struct tcpci_chip*) ;
 int FUNC_7 (int ,int ,int *,int) ;
 int FUNC_8 (int *,TYPE_1__*) ;
 int VAR_6 ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_7,
         const struct i2c_device_id *VAR_8)
{
 struct tcpci_chip *VAR_9;
 int VAR_10;
 u16 VAR_11 = 0;

 VAR_9 = FUNC_3(&VAR_7->dev, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->data.regmap = FUNC_4(VAR_7, &VAR_6);
 if (FUNC_0(VAR_9->data.regmap))
  return FUNC_1(VAR_9->data.regmap);

 FUNC_6(VAR_7, VAR_9);


 VAR_10 = FUNC_7(VAR_9->data.regmap, VAR_4, &VAR_11,
          sizeof(u16));
 if (VAR_10 < 0)
  return VAR_10;

 VAR_9->tcpci = FUNC_8(&VAR_7->dev, &VAR_9->data);
 if (FUNC_0(VAR_9->tcpci))
  return FUNC_1(VAR_9->tcpci);

 VAR_10 = FUNC_5(&VAR_7->dev, VAR_7->irq, ((void*)0),
     VAR_5,
     VAR_2 | VAR_3,
     FUNC_2(&VAR_7->dev), VAR_9);
 if (VAR_10 < 0) {
  FUNC_9(VAR_9->tcpci);
  return VAR_10;
 }

 return 0;
}
