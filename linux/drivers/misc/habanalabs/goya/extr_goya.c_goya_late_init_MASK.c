
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asic_fixed_properties {int dram_size; } ;
struct hl_device {int dev; struct asic_fixed_properties asic_prop; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct hl_device*) ;
 int FUNC_3 (struct hl_device*) ;
 int FUNC_4 (struct hl_device*) ;
 int FUNC_5 (struct hl_device*) ;
 int FUNC_6 (struct hl_device*) ;
 int FUNC_7 (struct hl_device*) ;
 int FUNC_8 (struct hl_device*) ;
 int FUNC_9 (struct hl_device*,int ) ;
 int FUNC_10 (int ) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_11(struct hl_device *VAR_4)
{
 struct asic_fixed_properties *VAR_5 = &VAR_4->asic_prop;
 int VAR_6;

 FUNC_3(VAR_4);

 VAR_6 = FUNC_6(VAR_4);
 if (VAR_6) {
  FUNC_1(VAR_4->dev,
   "Failed to clear MMU page tables range %d\n", VAR_6);
  return VAR_6;
 }

 VAR_6 = FUNC_7(VAR_4);
 if (VAR_6) {
  FUNC_1(VAR_4->dev, "Failed to set DRAM default page %d\n", VAR_6);
  return VAR_6;
 }

 VAR_6 = FUNC_5(VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_4(VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_8(VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_2(VAR_4);
 if (VAR_6) {
  FUNC_1(VAR_4->dev, "Failed to get armcp info %d\n", VAR_6);
  return VAR_6;
 }





 FUNC_0(VAR_3, FUNC_10(VAR_5->dram_size));

 VAR_6 = FUNC_9(VAR_4, VAR_0);
 if (VAR_6) {
  FUNC_1(VAR_4->dev,
   "Failed to enable PCI access from CPU %d\n", VAR_6);
  return VAR_6;
 }

 FUNC_0(VAR_2,
   VAR_1);

 return 0;
}
