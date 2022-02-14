
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int options; int size; } ;
struct nand_chip {TYPE_1__ ecc; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned char const*,int ,unsigned char*,int) ;

int FUNC_1(struct nand_chip *VAR_1, const unsigned char *VAR_2,
         unsigned char *VAR_3)
{
 bool VAR_4 = VAR_1->ecc.options & VAR_0;

 FUNC_0(VAR_2, VAR_1->ecc.size, VAR_3, VAR_4);

 return 0;
}
