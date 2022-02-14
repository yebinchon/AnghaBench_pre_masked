
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssb_pcicore {scalar_t__ hostmode; struct ssb_device* dev; } ;
struct ssb_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct ssb_pcicore*) ;
 int FUNC_1 (struct ssb_device*,int ) ;
 int FUNC_2 (struct ssb_device*) ;
 int FUNC_3 (struct ssb_pcicore*) ;
 int FUNC_4 (struct ssb_pcicore*) ;

void FUNC_5(struct ssb_pcicore *VAR_0)
{
 struct ssb_device *VAR_1 = VAR_0->dev;

 if (!VAR_1)
  return;
 if (!FUNC_2(VAR_1))
  FUNC_1(VAR_1, 0);






 if (!VAR_0->hostmode)
  FUNC_3(VAR_0);
}
