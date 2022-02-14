
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct int3403_sensor {int int340x_zone; } ;
struct int3403_priv {TYPE_1__* adev; struct int3403_sensor* priv; } ;
struct TYPE_2__ {int handle; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct int3403_priv *VAR_2)
{
 struct int3403_sensor *VAR_3 = VAR_2->priv;

 FUNC_0(VAR_2->adev->handle,
       VAR_0, VAR_1);
 FUNC_1(VAR_3->int340x_zone);

 return 0;
}
