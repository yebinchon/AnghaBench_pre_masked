
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tango_nfc {scalar_t__ pbus_base; } ;
struct nand_chip {int controller; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 struct tango_nfc* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct nand_chip *VAR_2)
{
 struct tango_nfc *VAR_3 = FUNC_1(VAR_2->controller);

 return FUNC_0(VAR_3->pbus_base + VAR_0) & VAR_1;
}
