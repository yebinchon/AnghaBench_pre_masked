
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct firmware {int dummy; } ;
struct TYPE_3__ {struct firmware const* fw; } ;
struct ar9170 {TYPE_2__* udev; TYPE_1__ fw; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (struct ar9170*) ;
 int FUNC_1 (struct ar9170*) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static void FUNC_3(const struct firmware *VAR_0,
     void *VAR_1)
{
 struct ar9170 *VAR_2 = VAR_1;

 if (VAR_0) {
  VAR_2->fw.fw = VAR_0;
  FUNC_1(VAR_2);
  return;
 }

 FUNC_2(&VAR_2->udev->dev, "firmware not found.\n");
 FUNC_0(VAR_2);
}
