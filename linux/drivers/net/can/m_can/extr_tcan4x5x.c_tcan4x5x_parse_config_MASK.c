
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcan4x5x_priv {int power; int * device_state_gpio; int * reset_gpio; int * device_wake_gpio; } ;
struct m_can_classdev {int dev; struct tcan4x5x_priv* device_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int * FUNC_3 (int ,char*,int ) ;
 void* FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(struct m_can_classdev *VAR_5)
{
 struct tcan4x5x_priv *VAR_6 = VAR_5->device_data;

 VAR_6->device_wake_gpio = FUNC_3(VAR_5->dev, "device-wake",
          VAR_3);
 if (FUNC_0(VAR_6->device_wake_gpio)) {
  FUNC_2(VAR_5->dev, "device-wake gpio not defined\n");
  return -VAR_0;
 }

 VAR_6->reset_gpio = FUNC_4(VAR_5->dev, "reset",
             VAR_4);
 if (FUNC_0(VAR_6->reset_gpio))
  VAR_6->reset_gpio = ((void*)0);

 VAR_6->device_state_gpio = FUNC_4(VAR_5->dev,
             "device-state",
             VAR_2);
 if (FUNC_0(VAR_6->device_state_gpio))
  VAR_6->device_state_gpio = ((void*)0);

 VAR_6->power = FUNC_5(VAR_5->dev,
            "vsup");
 if (FUNC_1(VAR_6->power) == -VAR_1)
  return -VAR_1;

 return 0;
}
