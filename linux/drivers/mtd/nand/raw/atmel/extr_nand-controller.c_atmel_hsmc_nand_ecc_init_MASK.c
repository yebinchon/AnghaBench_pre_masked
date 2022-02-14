
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mode; int write_page_raw; int read_page_raw; int write_page; int read_page; } ;
struct nand_chip {TYPE_1__ ecc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_1(struct nand_chip *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_5);
 if (VAR_6)
  return VAR_6;

 if (VAR_5->ecc.mode != VAR_0)
  return 0;


 VAR_5->ecc.read_page = VAR_1;
 VAR_5->ecc.write_page = VAR_3;
 VAR_5->ecc.read_page_raw = VAR_2;
 VAR_5->ecc.write_page_raw = VAR_4;

 return 0;
}
