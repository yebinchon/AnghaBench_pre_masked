
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct qca8k_priv {TYPE_1__* ds; int reg_mutex; int ops; scalar_t__ reset_gpio; int * dev; int bus; } ;
struct mdio_device {int dev; int bus; } ;
struct TYPE_3__ {int * ops; struct qca8k_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *,struct qca8k_priv*) ;
 scalar_t__ FUNC_3 (int *,char*,int ) ;
 struct qca8k_priv* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (int *,int ) ;
 int FUNC_7 (scalar_t__,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct qca8k_priv*,int ) ;
 int VAR_9 ;

__attribute__((used)) static int
FUNC_11(struct mdio_device *VAR_10)
{
 struct qca8k_priv *VAR_11;
 u32 VAR_12;




 VAR_11 = FUNC_4(&VAR_10->dev, sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return -VAR_1;

 VAR_11->bus = VAR_10->bus;
 VAR_11->dev = &VAR_10->dev;

 VAR_11->reset_gpio = FUNC_3(VAR_11->dev, "reset",
         VAR_3);
 if (FUNC_0(VAR_11->reset_gpio))
  return FUNC_1(VAR_11->reset_gpio);

 if (VAR_11->reset_gpio) {
  FUNC_7(VAR_11->reset_gpio, 1);



  FUNC_8(20);
  FUNC_7(VAR_11->reset_gpio, 0);
 }


 VAR_12 = FUNC_10(VAR_11, VAR_8);
 VAR_12 >>= VAR_6;
 VAR_12 &= VAR_5;
 if (VAR_12 != VAR_4)
  return -VAR_0;

 VAR_11->ds = FUNC_6(&VAR_10->dev, VAR_7);
 if (!VAR_11->ds)
  return -VAR_1;

 VAR_11->ds->priv = VAR_11;
 VAR_11->ops = VAR_9;
 VAR_11->ds->ops = &VAR_11->ops;
 FUNC_9(&VAR_11->reg_mutex);
 FUNC_2(&VAR_10->dev, VAR_11);

 return FUNC_5(VAR_11->ds);
}
