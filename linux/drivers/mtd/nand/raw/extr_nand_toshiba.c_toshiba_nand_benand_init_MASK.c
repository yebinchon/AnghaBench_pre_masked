
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; int strength; int write_page_raw; int read_page_raw; int write_page; int read_subpage; int read_page; scalar_t__ bytes; } ;
struct nand_chip {int options; TYPE_1__ ecc; } ;
struct mtd_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mtd_info*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 struct mtd_info* FUNC_1 (struct nand_chip*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_2(struct nand_chip *VAR_7)
{
 struct mtd_info *VAR_8 = FUNC_1(VAR_7);







 VAR_7->ecc.bytes = 0;
 VAR_7->ecc.size = 512;
 VAR_7->ecc.strength = 8;
 VAR_7->ecc.read_page = VAR_5;
 VAR_7->ecc.read_subpage = VAR_6;
 VAR_7->ecc.write_page = VAR_3;
 VAR_7->ecc.read_page_raw = VAR_2;
 VAR_7->ecc.write_page_raw = VAR_4;

 VAR_7->options |= VAR_0;

 FUNC_0(VAR_8, &VAR_1);
}
