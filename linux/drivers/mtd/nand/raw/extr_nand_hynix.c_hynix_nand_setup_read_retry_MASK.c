
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nand_chip {int dummy; } ;
struct hynix_nand {TYPE_1__* read_retry; } ;
struct TYPE_2__ {int nregs; int * regs; int * values; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nand_chip*,int ) ;
 int FUNC_1 (struct nand_chip*,int ,int const) ;
 struct hynix_nand* FUNC_2 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_3(struct nand_chip *VAR_2, int VAR_3)
{
 struct hynix_nand *VAR_4 = FUNC_2(VAR_2);
 const u8 *VAR_5;
 int VAR_6, VAR_7;

 VAR_5 = VAR_4->read_retry->values +
   (VAR_3 * VAR_4->read_retry->nregs);


 VAR_7 = FUNC_0(VAR_2, VAR_1);
 if (VAR_7)
  return VAR_7;
 for (VAR_6 = 0; VAR_6 < VAR_4->read_retry->nregs; VAR_6++) {
  VAR_7 = FUNC_1(VAR_2, VAR_4->read_retry->regs[VAR_6],
           VAR_5[VAR_6]);
  if (VAR_7)
   return VAR_7;
 }


 return FUNC_0(VAR_2, VAR_0);
}
