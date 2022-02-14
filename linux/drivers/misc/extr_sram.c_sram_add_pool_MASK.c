
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sram_reserve {int size; int label; } ;
struct sram_partition {scalar_t__ base; int pool; } ;
struct sram_dev {int dev; } ;
typedef int phys_addr_t ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,unsigned long,int ,int ,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct sram_dev *VAR_2, struct sram_reserve *VAR_3,
    phys_addr_t VAR_4, struct sram_partition *VAR_5)
{
 int VAR_6;

 VAR_5->pool = FUNC_3(VAR_2->dev, FUNC_5(VAR_1),
       VAR_0, VAR_3->label);
 if (FUNC_0(VAR_5->pool))
  return FUNC_1(VAR_5->pool);

 VAR_6 = FUNC_4(VAR_5->pool, (unsigned long)VAR_5->base, VAR_4,
    VAR_3->size, VAR_0);
 if (VAR_6 < 0) {
  FUNC_2(VAR_2->dev, "failed to register subpool: %d\n", VAR_6);
  return VAR_6;
 }

 return 0;
}
