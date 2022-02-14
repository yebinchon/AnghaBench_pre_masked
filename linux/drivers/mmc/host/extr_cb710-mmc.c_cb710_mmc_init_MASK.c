
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct platform_device {int dummy; } ;
struct mmc_host {int f_max; int f_min; int ocr_avail; int caps; int * ops; } ;
struct cb710_slot {int dummy; } ;
struct cb710_mmc_reader {int irq_lock; int finish_req_tasklet; } ;
struct cb710_chip {int pdev; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int* VAR_7 ;
 int FUNC_0 (struct cb710_chip*,int ) ;
 int FUNC_1 (struct cb710_slot*,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 struct cb710_slot* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct cb710_slot*,int *) ;
 int FUNC_4 (struct cb710_slot*) ;
 struct cb710_chip* FUNC_5 (struct cb710_slot*) ;
 int* VAR_11 ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (struct mmc_host*) ;
 struct mmc_host* FUNC_8 (int,int ) ;
 int FUNC_9 (struct mmc_host*) ;
 int FUNC_10 (struct mmc_host*) ;
 struct cb710_mmc_reader* FUNC_11 (struct mmc_host*) ;
 int FUNC_12 (int ,int,int*) ;
 int FUNC_13 (struct platform_device*,struct mmc_host*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int ,unsigned long) ;
 scalar_t__ FUNC_16 (int) ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_12)
{
 struct cb710_slot *VAR_13 = FUNC_2(VAR_12);
 struct cb710_chip *VAR_14 = FUNC_5(VAR_13);
 struct mmc_host *VAR_15;
 struct cb710_mmc_reader *VAR_16;
 int VAR_17;
 u32 VAR_18;

 VAR_15 = FUNC_8(sizeof(*VAR_16), FUNC_4(VAR_13));
 if (!VAR_15)
  return -VAR_3;

 FUNC_13(VAR_12, VAR_15);


 FUNC_12(VAR_14->pdev, 0x48, &VAR_18);
 VAR_18 = VAR_11[(VAR_18 >> 16) & 0xF];
 FUNC_6(FUNC_4(VAR_13), "source frequency: %dMHz\n", VAR_18);
 VAR_18 *= 1000000;

 VAR_15->ops = &VAR_9;
 VAR_15->f_max = VAR_18;
 VAR_15->f_min = VAR_18 >> VAR_7[VAR_1];
 VAR_15->ocr_avail = VAR_5|VAR_6;
 VAR_15->caps = VAR_4;

 VAR_16 = FUNC_11(VAR_15);

 FUNC_15(&VAR_16->finish_req_tasklet,
  VAR_8, (unsigned long)VAR_15);
 FUNC_14(&VAR_16->irq_lock);
 FUNC_0(VAR_14, VAR_0);

 FUNC_1(VAR_13, 0, ~0);
 FUNC_3(VAR_13, VAR_10);

 VAR_17 = FUNC_7(VAR_15);
 if (FUNC_16(VAR_17))
  goto err_free_mmc;

 FUNC_6(FUNC_4(VAR_13), "mmc_hostname is %s\n",
  FUNC_10(VAR_15));

 FUNC_1(VAR_13, VAR_2, 0);

 return 0;

err_free_mmc:
 FUNC_6(FUNC_4(VAR_13), "mmc_add_host() failed: %d\n", VAR_17);

 FUNC_3(VAR_13, ((void*)0));
 FUNC_9(VAR_15);
 return VAR_17;
}
