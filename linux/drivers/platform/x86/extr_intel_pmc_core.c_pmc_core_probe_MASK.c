
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct x86_cpu_id {scalar_t__ driver_data; } ;
struct pmc_reg_map {int regmap_length; scalar_t__ slp_s0_offset; } ;
struct pmc_dev {int pmc_xram_read_bit; int lock; int regbase; struct pmc_reg_map* map; scalar_t__ base_addr; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 struct pmc_reg_map VAR_3 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (scalar_t__,int ) ;
 scalar_t__ FUNC_4 (scalar_t__*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct platform_device*,struct pmc_dev*) ;
 struct pmc_dev VAR_5 ;
 int FUNC_9 () ;
 int FUNC_10 (struct pmc_dev*) ;
 int VAR_6 ;
 int VAR_7 ;
 struct pmc_reg_map VAR_8 ;
 struct x86_cpu_id* FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_9)
{
 static bool VAR_10;
 struct pmc_dev *VAR_11 = &VAR_5;
 const struct x86_cpu_id *VAR_12;
 u64 VAR_13;

 if (VAR_10)
  return -VAR_0;

 VAR_12 = FUNC_11(VAR_4);
 if (!VAR_12)
  return -VAR_0;

 VAR_11->map = (struct pmc_reg_map *)VAR_12->driver_data;






 if (VAR_11->map == &VAR_8 && !FUNC_7(VAR_7))
  VAR_11->map = &VAR_3;

 if (FUNC_4(&VAR_13)) {
  VAR_11->base_addr = VAR_2;

  if (FUNC_6(FUNC_0(VAR_11->base_addr)))
   return -VAR_0;
 } else {
  VAR_11->base_addr = VAR_13 - VAR_11->map->slp_s0_offset;
 }

 VAR_11->regbase = FUNC_3(VAR_11->base_addr,
      VAR_11->map->regmap_length);
 if (!VAR_11->regbase)
  return -VAR_1;

 FUNC_5(&VAR_11->lock);
 FUNC_8(VAR_9, VAR_11);
 VAR_11->pmc_xram_read_bit = FUNC_9();
 FUNC_2(VAR_6);

 FUNC_10(VAR_11);

 VAR_10 = 1;
 FUNC_1(&VAR_9->dev, " initialized\n");

 return 0;
}
