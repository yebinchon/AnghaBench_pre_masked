
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_hfi_device {int suspended; int lock; int power_enabled; } ;
struct venus_core {struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct venus_hfi_device*,int,int,int,int) ;
 struct venus_hfi_device* FUNC_4 (struct venus_core*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (struct venus_hfi_device*) ;
 int FUNC_6 (struct venus_hfi_device*) ;
 int FUNC_7 (struct venus_hfi_device*,int) ;

__attribute__((used)) static int FUNC_8(struct venus_core *VAR_3)
{
 struct venus_hfi_device *VAR_4 = FUNC_4(VAR_3);
 struct device *VAR_5 = VAR_3->dev;
 bool VAR_6;
 int VAR_7;

 if (!VAR_4->power_enabled || VAR_4->suspended)
  return 0;

 FUNC_1(&VAR_4->lock);
 VAR_7 = FUNC_5(VAR_4);
 FUNC_2(&VAR_4->lock);

 if (!VAR_7) {
  FUNC_0(VAR_5, "bad state, cannot suspend\n");
  return -VAR_0;
 }
 VAR_7 = FUNC_3(VAR_1, VAR_4, VAR_6, VAR_6,
     1500, 100 * 1500);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_7(VAR_4, 0);
 if (VAR_7) {
  FUNC_0(VAR_5, "prepare for power collapse fail (%d)\n", VAR_7);
  return VAR_7;
 }

 VAR_7 = FUNC_3(VAR_2, VAR_4, VAR_6, VAR_6,
     1500, 100 * 1500);
 if (VAR_7)
  return VAR_7;

 FUNC_1(&VAR_4->lock);

 VAR_7 = FUNC_6(VAR_4);
 if (VAR_7) {
  FUNC_0(VAR_5, "venus_power_off (%d)\n", VAR_7);
  FUNC_2(&VAR_4->lock);
  return VAR_7;
 }

 VAR_4->suspended = 1;

 FUNC_2(&VAR_4->lock);

 return 0;
}
