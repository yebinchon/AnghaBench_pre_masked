
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssb_pcicore {struct ssb_device* dev; } ;
struct TYPE_2__ {scalar_t__ coreid; } ;
struct ssb_device {TYPE_1__ id; struct ssb_bus* bus; } ;
struct ssb_bus {scalar_t__ bustype; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ssb_pcicore*) ;
 int FUNC_1 (struct ssb_pcicore*) ;
 int FUNC_2 (struct ssb_device*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct ssb_pcicore *VAR_3)
{
 struct ssb_device *VAR_4 = VAR_3->dev;
 struct ssb_bus *VAR_5 = VAR_4->bus;

 if (VAR_5->bustype == VAR_0)
  FUNC_0(VAR_3);


 FUNC_2(VAR_4, VAR_2, 0);


 if (VAR_3->dev->id.coreid == VAR_1) {
  FUNC_1(VAR_3);


 }
}
