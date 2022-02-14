
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct si4713_device {scalar_t__ power_state; int sd; scalar_t__ vio; scalar_t__ vdd; scalar_t__ gpio_reset; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct si4713_device*,int ,int *,int ,int *,int ,int ) ;
 int FUNC_4 (int,int ,int *,char*,...) ;
 int FUNC_5 (int *,char*,int) ;

__attribute__((used)) static int FUNC_6(struct si4713_device *VAR_5)
{
 int VAR_6;
 u8 VAR_7[VAR_3];

 if (!VAR_5->power_state)
  return 0;

 VAR_6 = FUNC_3(VAR_5, VAR_2,
     ((void*)0), 0,
     VAR_7, FUNC_0(VAR_7),
     VAR_0);

 if (!VAR_6) {
  FUNC_4(1, VAR_4, &VAR_5->sd, "Power down response: 0x%02x\n",
    VAR_7[0]);
  FUNC_4(1, VAR_4, &VAR_5->sd, "Device in reset mode\n");
  if (VAR_5->gpio_reset)
   FUNC_1(VAR_5->gpio_reset, 0);

  if (VAR_5->vdd) {
   VAR_6 = FUNC_2(VAR_5->vdd);
   if (VAR_6) {
    FUNC_5(&VAR_5->sd,
     "Failed to disable vdd: %d\n", VAR_6);
   }
  }

  if (VAR_5->vio) {
   VAR_6 = FUNC_2(VAR_5->vio);
   if (VAR_6) {
    FUNC_5(&VAR_5->sd,
     "Failed to disable vio: %d\n", VAR_6);
   }
  }
  VAR_5->power_state = VAR_1;
 }

 return VAR_6;
}
