
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct platform_device {int dev; } ;
struct key_entry {scalar_t__ type; } ;
struct intel_vbtn_priv {int input_dev; scalar_t__ wakeup_mode; } ;
typedef int acpi_handle ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 struct intel_vbtn_priv* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct key_entry* FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ,int,unsigned int,int) ;

__attribute__((used)) static void FUNC_5(acpi_handle VAR_2, u32 VAR_3, void *VAR_4)
{
 struct platform_device *VAR_5 = VAR_4;
 struct intel_vbtn_priv *VAR_6 = FUNC_1(&VAR_5->dev);
 unsigned int VAR_7 = !(VAR_3 & 1);
 const struct key_entry *VAR_8, *VAR_9;
 bool VAR_10;

 if (VAR_6->wakeup_mode) {
  VAR_8 = FUNC_3(VAR_6->input_dev, VAR_3);
  if (VAR_8) {
   FUNC_2(&VAR_5->dev);






   if (VAR_8->type == VAR_1)
    FUNC_4(VAR_6->input_dev,
          VAR_3,
          VAR_7,
          0);
   return;
  }
  goto out_unknown;
 }





 VAR_9 = FUNC_3(VAR_6->input_dev, VAR_3 | 1);
 VAR_10 = VAR_7 && (!VAR_9 || VAR_9->type == VAR_0);

 if (FUNC_4(VAR_6->input_dev, VAR_3, VAR_7, VAR_10))
  return;

out_unknown:
 FUNC_0(&VAR_5->dev, "unknown event index 0x%x\n", VAR_3);
}
