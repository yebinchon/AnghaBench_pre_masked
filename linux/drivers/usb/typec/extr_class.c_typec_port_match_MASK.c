
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_connection {int * endpoint; scalar_t__ fwnode; } ;
typedef void device ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ,scalar_t__) ;
 void* FUNC_2 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static void *FUNC_3(struct device_connection *VAR_2, int VAR_3, void *VAR_4)
{
 struct device *VAR_5;





 if (VAR_2->fwnode)
  return FUNC_1(VAR_1, VAR_2->fwnode);

 VAR_5 = FUNC_2(VAR_1, VAR_2->endpoint[VAR_3]);

 return VAR_5 ? VAR_5 : FUNC_0(-VAR_0);
}
