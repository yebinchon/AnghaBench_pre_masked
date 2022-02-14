
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_platform_device {scalar_t__ opaque; } ;
struct resource {int dummy; } ;
struct platform_device {int num_resources; struct resource* resource; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct resource*) ;

__attribute__((used)) static struct resource *FUNC_1(struct vfio_platform_device *VAR_2,
           int VAR_3)
{
 struct platform_device *VAR_4 = (struct platform_device *) VAR_2->opaque;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4->num_resources; VAR_5++) {
  struct resource *VAR_6 = &VAR_4->resource[VAR_5];

  if (FUNC_0(VAR_6) & (VAR_1|VAR_0)) {
   if (!VAR_3)
    return VAR_6;

   VAR_3--;
  }
 }
 return ((void*)0);
}
