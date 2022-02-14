
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_connection {int * endpoint; scalar_t__ fwnode; scalar_t__ id; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 struct device* FUNC_1 (int ,scalar_t__) ;
 struct device* FUNC_2 (int ,int ) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int VAR_1 ;
 void* FUNC_4 (struct device*) ;

__attribute__((used)) static void *FUNC_5(struct device_connection *VAR_2, int VAR_3,
       void *VAR_4)
{
 struct device *VAR_5;

 if (VAR_2->fwnode) {
  if (VAR_2->id && !FUNC_3(VAR_2->fwnode, VAR_2->id))
   return ((void*)0);

  VAR_5 = FUNC_1(VAR_1, VAR_2->fwnode);
 } else {
  VAR_5 = FUNC_2(VAR_1, VAR_2->endpoint[VAR_3]);
 }

 return VAR_5 ? FUNC_4(VAR_5) : FUNC_0(-VAR_0);
}
