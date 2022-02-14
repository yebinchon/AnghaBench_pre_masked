
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct asic_fixed_properties {int dram_pci_bar_size; } ;
struct hl_device {int dev; struct asic_fixed_properties asic_prop; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct hl_device*) ;
 int FUNC_5 (struct hl_device*) ;
 int FUNC_6 (struct hl_device*) ;
 int FUNC_7 (struct hl_device*) ;
 int FUNC_8 (struct hl_device*,int ) ;
 int FUNC_9 (struct hl_device*) ;
 int FUNC_10 (struct hl_device*) ;
 int FUNC_11 (struct hl_device*) ;
 int FUNC_12 (struct hl_device*) ;
 int FUNC_13 (struct hl_device*) ;
 int FUNC_14 (struct hl_device*) ;
 scalar_t__ FUNC_15 (struct hl_device*,scalar_t__) ;
 int FUNC_16 (struct hl_device*) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_17(struct hl_device *VAR_8)
{
 struct asic_fixed_properties *VAR_9 = &VAR_8->asic_prop;
 u32 VAR_10;
 int VAR_11;

 FUNC_3(VAR_8->dev, "Starting initialization of H/W\n");


 VAR_10 = FUNC_0(VAR_7);







 FUNC_1(VAR_6, VAR_3);

 VAR_11 = FUNC_8(VAR_8, VAR_2);
 if (VAR_11) {
  FUNC_2(VAR_8->dev, "failed to initialize CPU\n");
  return VAR_11;
 }

 FUNC_16(VAR_8);

 FUNC_10(VAR_8);





 if (FUNC_15(VAR_8, VAR_0 +
   (VAR_4 &
   ~(VAR_9->dram_pci_bar_size - 0x1ull))) == VAR_5) {
  FUNC_2(VAR_8->dev,
   "failed to map DDR bar to MMU page tables\n");
  return -VAR_1;
 }

 VAR_11 = FUNC_14(VAR_8);
 if (VAR_11)
  return VAR_11;

 FUNC_12(VAR_8);

 FUNC_9(VAR_8);

 FUNC_11(VAR_8);

 FUNC_13(VAR_8);

 FUNC_7(VAR_8);


 VAR_11 = FUNC_6(VAR_8);
 if (VAR_11)
  goto disable_queues;


 VAR_10 = FUNC_0(VAR_7);

 return 0;

disable_queues:
 FUNC_5(VAR_8);
 FUNC_4(VAR_8);

 return VAR_11;
}
