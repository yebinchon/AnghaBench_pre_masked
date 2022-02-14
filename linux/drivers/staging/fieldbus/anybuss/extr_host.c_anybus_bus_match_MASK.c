
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_driver {int dummy; } ;
struct device {int dummy; } ;
struct anybuss_client_driver {scalar_t__ anybus_id; } ;
struct anybuss_client {int anybus_id; } ;


 scalar_t__ FUNC_0 (int ) ;
 struct anybuss_client* FUNC_1 (struct device*) ;
 struct anybuss_client_driver* FUNC_2 (struct device_driver*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0,
       struct device_driver *VAR_1)
{
 struct anybuss_client_driver *VAR_2 =
  FUNC_2(VAR_1);
 struct anybuss_client *VAR_3 =
  FUNC_1(VAR_0);

 return VAR_2->anybus_id == FUNC_0(VAR_3->anybus_id);
}
