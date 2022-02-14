
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_3__ {int parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;
struct altmode {int id; TYPE_2__ adev; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct altmode*) ;
 struct altmode* FUNC_2 (int ) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct altmode*) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_0)
{
 struct altmode *VAR_1 = FUNC_2(FUNC_3(VAR_0));

 FUNC_4(VAR_1);

 FUNC_0(VAR_1->adev.dev.parent, VAR_1->id);
 FUNC_1(VAR_1);
}
