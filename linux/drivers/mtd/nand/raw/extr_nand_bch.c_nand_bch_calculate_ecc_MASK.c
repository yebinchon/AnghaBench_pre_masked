
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int bytes; int size; struct nand_bch_control* priv; } ;
struct nand_chip {TYPE_1__ ecc; } ;
struct nand_bch_control {unsigned char* eccmask; int bch; } ;


 int FUNC_0 (int ,unsigned char const*,int ,unsigned char*) ;
 int FUNC_1 (unsigned char*,int ,unsigned int) ;

int FUNC_2(struct nand_chip *VAR_0, const unsigned char *VAR_1,
      unsigned char *VAR_2)
{
 struct nand_bch_control *VAR_3 = VAR_0->ecc.priv;
 unsigned int VAR_4;

 FUNC_1(VAR_2, 0, VAR_0->ecc.bytes);
 FUNC_0(VAR_3->bch, VAR_1, VAR_0->ecc.size, VAR_2);


 for (VAR_4 = 0; VAR_4 < VAR_0->ecc.bytes; VAR_4++)
  VAR_2[VAR_4] ^= VAR_3->eccmask[VAR_4];

 return 0;
}
