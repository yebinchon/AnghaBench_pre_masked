
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct marvell_nand_chip_sel {int dummy; } ;
struct marvell_nand_chip {size_t selected_die; struct marvell_nand_chip_sel* sels; } ;



__attribute__((used)) static inline struct marvell_nand_chip_sel *FUNC_0(struct marvell_nand_chip
       *VAR_0)
{
 return &VAR_0->sels[VAR_0->selected_die];
}
