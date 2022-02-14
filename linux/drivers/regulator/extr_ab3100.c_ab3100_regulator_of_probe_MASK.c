
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct device_node {int dummy; } ;
struct TYPE_5__ {scalar_t__ driver_data; int of_node; int init_data; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int * VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (struct platform_device*,int *,int ,int ,unsigned long) ;
 int FUNC_2 (int *,int ,TYPE_1__,int ) ;
 int FUNC_3 (int *,char*,int) ;

__attribute__((used)) static int
FUNC_4(struct platform_device *VAR_3, struct device_node *VAR_4)
{
 int VAR_5, VAR_6;






 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_0); VAR_6++) {
  VAR_5 = FUNC_2(&VAR_3->dev, 0,
     VAR_0[VAR_6],
     VAR_1[VAR_6]);
  if (VAR_5) {
   FUNC_3(&VAR_3->dev, "regulator initialization failed with error %d\n",
    VAR_5);
   return VAR_5;
  }
 }

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_2); VAR_6++) {
  VAR_5 = FUNC_1(
   VAR_3, ((void*)0), VAR_2[VAR_6].init_data,
   VAR_2[VAR_6].of_node,
   (unsigned long)VAR_2[VAR_6].driver_data);
  if (VAR_5)
   return VAR_5;
 }

 return 0;
}
