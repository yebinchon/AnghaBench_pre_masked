
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int start_drp_toggling; int set_vconn; int init; int regmap; } ;
struct rt1711h_chip {int tcpci; TYPE_1__ data; int * dev; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 struct rt1711h_chip* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (struct i2c_client*,int *) ;
 int FUNC_6 (struct i2c_client*,struct rt1711h_chip*) ;
 int FUNC_7 (struct i2c_client*) ;
 int VAR_2 ;
 int FUNC_8 (struct rt1711h_chip*,struct i2c_client*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (struct rt1711h_chip*) ;
 int FUNC_10 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_6,
    const struct i2c_device_id *VAR_7)
{
 int VAR_8;
 struct rt1711h_chip *VAR_9;

 VAR_8 = FUNC_7(VAR_6);
 if (VAR_8 < 0) {
  FUNC_3(&VAR_6->dev, "check vid/pid fail\n");
  return VAR_8;
 }

 VAR_9 = FUNC_4(&VAR_6->dev, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->data.regmap = FUNC_5(VAR_6,
       &VAR_3);
 if (FUNC_0(VAR_9->data.regmap))
  return FUNC_2(VAR_9->data.regmap);

 VAR_9->dev = &VAR_6->dev;
 FUNC_6(VAR_6, VAR_9);

 VAR_8 = FUNC_9(VAR_9);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_8 = FUNC_8(VAR_9, VAR_6);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_9->data.init = VAR_2;
 VAR_9->data.set_vconn = VAR_4;
 VAR_9->data.start_drp_toggling = VAR_5;
 VAR_9->tcpci = FUNC_10(VAR_9->dev, &VAR_9->data);
 if (FUNC_1(VAR_9->tcpci))
  return FUNC_2(VAR_9->tcpci);

 return 0;
}
