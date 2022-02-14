
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct c8sectpfe_hw {void* num_tp; void* num_ram; void* num_ccsc; void* num_tsout; void* num_swts; void* num_mib; void* num_ib; } ;
struct c8sectpfei {int dev; scalar_t__ io; struct c8sectpfe_hw hw_stats; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,char*,...) ;
 void* FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct c8sectpfei *VAR_7)
{
 struct c8sectpfe_hw *VAR_8 = &VAR_7->hw_stats;

 VAR_8->num_ib = FUNC_1(VAR_7->io + VAR_1);
 VAR_8->num_mib = FUNC_1(VAR_7->io + VAR_2);
 VAR_8->num_swts = FUNC_1(VAR_7->io + VAR_4);
 VAR_8->num_tsout = FUNC_1(VAR_7->io + VAR_6);
 VAR_8->num_ccsc = FUNC_1(VAR_7->io + VAR_0);
 VAR_8->num_ram = FUNC_1(VAR_7->io + VAR_3);
 VAR_8->num_tp = FUNC_1(VAR_7->io + VAR_5);

 FUNC_0(VAR_7->dev, "C8SECTPFE hw supports the following:\n");
 FUNC_0(VAR_7->dev, "Input Blocks: %d\n", VAR_8->num_ib);
 FUNC_0(VAR_7->dev, "Merged Input Blocks: %d\n", VAR_8->num_mib);
 FUNC_0(VAR_7->dev, "Software Transport Stream Inputs: %d\n"
    , VAR_8->num_swts);
 FUNC_0(VAR_7->dev, "Transport Stream Output: %d\n", VAR_8->num_tsout);
 FUNC_0(VAR_7->dev, "Cable Card Converter: %d\n", VAR_8->num_ccsc);
 FUNC_0(VAR_7->dev, "RAMs supported by C8SECTPFE: %d\n", VAR_8->num_ram);
 FUNC_0(VAR_7->dev, "Tango TPs supported by C8SECTPFE: %d\n"
   , VAR_8->num_tp);
}
