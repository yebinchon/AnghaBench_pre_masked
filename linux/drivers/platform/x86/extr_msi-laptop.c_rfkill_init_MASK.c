
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_2__ {scalar_t__ ec_delay; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_1 (char*,int *,int ,int *,int *) ;
 int VAR_11 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_12 ;
 int FUNC_4 (scalar_t__) ;
 int VAR_13 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 scalar_t__ VAR_14 ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_15)
{

 int VAR_16;


 FUNC_0();

 VAR_8 = FUNC_1("msi-bluetooth", &VAR_15->dev,
    VAR_2,
    &VAR_11, ((void*)0));
 if (!VAR_8) {
  VAR_16 = -VAR_0;
  goto err_bluetooth;
 }
 VAR_16 = FUNC_3(VAR_8);
 if (VAR_16)
  goto err_bluetooth;

 VAR_10 = FUNC_1("msi-wlan", &VAR_15->dev, VAR_3,
    &VAR_13, ((void*)0));
 if (!VAR_10) {
  VAR_16 = -VAR_0;
  goto err_wlan;
 }
 VAR_16 = FUNC_3(VAR_10);
 if (VAR_16)
  goto err_wlan;

 if (VAR_14) {
  VAR_9 = FUNC_1("msi-threeg", &VAR_15->dev,
    VAR_4, &VAR_12, ((void*)0));
  if (!VAR_9) {
   VAR_16 = -VAR_0;
   goto err_threeg;
  }
  VAR_16 = FUNC_3(VAR_9);
  if (VAR_16)
   goto err_threeg;
 }


 if (VAR_7->ec_delay) {
  FUNC_6(&VAR_5,
   FUNC_5(1 * VAR_1));
 } else
  FUNC_7(&VAR_6);

 return 0;

err_threeg:
 FUNC_2(VAR_9);
 if (VAR_10)
  FUNC_4(VAR_10);
err_wlan:
 FUNC_2(VAR_10);
 if (VAR_8)
  FUNC_4(VAR_8);
err_bluetooth:
 FUNC_2(VAR_8);

 return VAR_16;
}
