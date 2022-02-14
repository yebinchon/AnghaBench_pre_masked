
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_sdr_timings {int tR_max; } ;
struct nand_chip {int options; int data_interface; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct nand_sdr_timings* FUNC_2 (int *) ;
 int FUNC_3 (struct nand_chip*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct nand_chip *VAR_1)
{
 const struct nand_sdr_timings *VAR_2;

 if (!(VAR_1->options & VAR_0))
  return;

 VAR_2 = FUNC_2(&VAR_1->data_interface);
 FUNC_1(FUNC_3(VAR_1, FUNC_0(VAR_2->tR_max), 0));
}
