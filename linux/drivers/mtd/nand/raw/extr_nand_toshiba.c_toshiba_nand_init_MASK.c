
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int* data; } ;
struct TYPE_3__ {scalar_t__ mode; } ;
struct nand_chip {int options; TYPE_2__ id; TYPE_1__ ecc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct nand_chip*) ;
 int FUNC_1 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_2(struct nand_chip *VAR_4)
{
 if (FUNC_0(VAR_4))
  VAR_4->options |= VAR_0 | VAR_1;


 if (FUNC_0(VAR_4) && VAR_4->ecc.mode == VAR_2 &&
     VAR_4->id.data[4] & VAR_3)
  FUNC_1(VAR_4);

 return 0;
}
