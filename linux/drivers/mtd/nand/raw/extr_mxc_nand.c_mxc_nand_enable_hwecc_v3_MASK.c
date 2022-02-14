
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {scalar_t__ mode; } ;
struct nand_chip {TYPE_1__ ecc; } ;
struct mxc_nand_host {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mxc_nand_host* FUNC_0 (struct nand_chip*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct nand_chip *VAR_3, bool VAR_4)
{
 struct mxc_nand_host *VAR_5 = FUNC_0(VAR_3);
 uint32_t VAR_6;

 if (VAR_3->ecc.mode != VAR_0)
  return;

 VAR_6 = FUNC_1(VAR_1);

 if (VAR_4)
  VAR_6 |= VAR_2;
 else
  VAR_6 &= ~VAR_2;

 FUNC_2(VAR_6, VAR_1);
}
