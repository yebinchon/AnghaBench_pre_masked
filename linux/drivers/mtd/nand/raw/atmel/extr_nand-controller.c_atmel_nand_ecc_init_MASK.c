
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode; int write_page_raw; int read_page_raw; int write_page; int read_page; } ;
struct nand_chip {TYPE_1__ ecc; int controller; } ;
struct atmel_nand_controller {int dev; } ;


 int VAR_0 ;



 int FUNC_0 (struct nand_chip*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int) ;
 struct atmel_nand_controller* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct nand_chip *VAR_5)
{
 struct atmel_nand_controller *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(VAR_5->controller);

 switch (VAR_5->ecc.mode) {
 case 129:
 case 128:



  break;

 case 130:
  VAR_7 = FUNC_0(VAR_5);
  if (VAR_7)
   return VAR_7;

  VAR_5->ecc.read_page = VAR_1;
  VAR_5->ecc.write_page = VAR_3;
  VAR_5->ecc.read_page_raw = VAR_2;
  VAR_5->ecc.write_page_raw = VAR_4;
  break;

 default:

  FUNC_1(VAR_6->dev, "Unsupported ECC mode: %d\n",
   VAR_5->ecc.mode);
  return -VAR_0;
 }

 return 0;
}
