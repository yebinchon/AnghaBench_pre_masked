
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct platform_device {int dev; } ;
struct intel_hid_priv {int input_dev; int array; scalar_t__ wakeup_mode; } ;
typedef int acpi_handle ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,unsigned long long) ;
 struct intel_hid_priv* FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,unsigned long long*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,unsigned long long,int,int) ;

__attribute__((used)) static void FUNC_10(acpi_handle VAR_2, u32 VAR_3, void *VAR_4)
{
 struct platform_device *VAR_5 = VAR_4;
 struct intel_hid_priv *VAR_6 = FUNC_1(&VAR_5->dev);
 unsigned long long VAR_7;

 if (VAR_6->wakeup_mode) {






  if (VAR_3 == 0xce)
   goto wakeup;


  if (VAR_3 == 0xc0 || !VAR_6->array)
   return;

  if (!FUNC_8(VAR_6->array, VAR_3)) {
   FUNC_2(&VAR_5->dev, "unknown event 0x%x\n", VAR_3);
   return;
  }

wakeup:
  FUNC_7(&VAR_5->dev);
  return;
 }
 if (!VAR_6->array) {
  if (VAR_3 == 0xce) {
   FUNC_4(VAR_6->input_dev, VAR_1, 1);
   FUNC_5(VAR_6->input_dev);
   return;
  }

  if (VAR_3 == 0xcf) {
   FUNC_4(VAR_6->input_dev, VAR_1, 0);
   FUNC_5(VAR_6->input_dev);
   return;
  }
 }


 if (VAR_3 != 0xc0) {
  if (!VAR_6->array ||
      !FUNC_9(VAR_6->array, VAR_3, 1, 1))
   FUNC_0(&VAR_5->dev, "unknown event 0x%x\n", VAR_3);
  return;
 }

 if (!FUNC_6(VAR_2, VAR_0,
           &VAR_7)) {
  FUNC_3(&VAR_5->dev, "failed to get event index\n");
  return;
 }

 if (!FUNC_9(VAR_6->input_dev, VAR_7, 1, 1))
  FUNC_0(&VAR_5->dev, "unknown event index 0x%llx\n",
    VAR_7);
}
