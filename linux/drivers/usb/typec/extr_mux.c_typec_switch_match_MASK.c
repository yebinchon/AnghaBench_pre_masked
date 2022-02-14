
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_connection {scalar_t__* endpoint; scalar_t__ fwnode; scalar_t__ id; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 struct device* FUNC_1 (int *,int *,scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_3 (struct device*) ;
 int VAR_3 ;

__attribute__((used)) static void *FUNC_4(struct device_connection *VAR_4, int VAR_5,
    void *VAR_6)
{
 struct device *VAR_7;

 if (VAR_4->fwnode) {
  if (VAR_4->id && !FUNC_2(VAR_4->fwnode, VAR_4->id))
   return ((void*)0);

  VAR_7 = FUNC_1(&VAR_3, ((void*)0), VAR_4->fwnode,
     VAR_2);
 } else {
  VAR_7 = FUNC_1(&VAR_3, ((void*)0),
     VAR_4->endpoint[VAR_5], VAR_1);
 }

 return VAR_7 ? FUNC_3(VAR_7) : FUNC_0(-VAR_0);
}
