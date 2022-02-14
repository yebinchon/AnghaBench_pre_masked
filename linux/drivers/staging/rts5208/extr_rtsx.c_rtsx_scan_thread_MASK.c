
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtsx_dev {int scanning_done; TYPE_1__* pci; int delay_wait; struct rtsx_chip* chip; } ;
struct rtsx_chip {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (struct rtsx_chip*,int ) ;
 int FUNC_3 (struct rtsx_dev*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static int FUNC_6(void *VAR_4)
{
 struct rtsx_dev *VAR_5 = VAR_4;
 struct rtsx_chip *VAR_6 = VAR_5->chip;


 if (VAR_3 > 0) {
  FUNC_1(&VAR_5->pci->dev,
    "%s: waiting for device to settle before scanning\n",
    VAR_0);
  FUNC_5
   (VAR_5->delay_wait,
    FUNC_2(VAR_6, VAR_2),
    VAR_3 * VAR_1);
 }


 if (!FUNC_2(VAR_6, VAR_2)) {
  FUNC_4(FUNC_3(VAR_5));
  FUNC_1(&VAR_5->pci->dev, "%s: device scan complete\n",
    VAR_0);


 }

 FUNC_0(&VAR_5->scanning_done, 0);
}
