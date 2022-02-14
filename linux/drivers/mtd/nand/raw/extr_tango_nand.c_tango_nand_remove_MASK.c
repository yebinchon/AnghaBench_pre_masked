
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tango_nfc {TYPE_1__** chips; int chan; } ;
struct platform_device {int dummy; } ;
struct TYPE_2__ {int nand_chip; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct tango_nfc* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_1)
{
 int VAR_2;
 struct tango_nfc *VAR_3 = FUNC_2(VAR_1);

 FUNC_0(VAR_3->chan);

 for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2) {
  if (VAR_3->chips[VAR_2])
   FUNC_1(&VAR_3->chips[VAR_2]->nand_chip);
 }

 return 0;
}
