
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct simplefb_platform_data {int format; int stride; int height; int width; } ;
struct simplefb_params {TYPE_1__* format; int stride; int height; int width; } ;
struct platform_device {int dev; } ;
struct TYPE_3__ {int name; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*) ;
 struct simplefb_platform_data* FUNC_2 (int *) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_2,
        struct simplefb_params *VAR_3)
{
 struct simplefb_platform_data *VAR_4 = FUNC_2(&VAR_2->dev);
 int VAR_5;

 VAR_3->width = VAR_4->width;
 VAR_3->height = VAR_4->height;
 VAR_3->stride = VAR_4->stride;

 VAR_3->format = ((void*)0);
 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5++) {
  if (FUNC_3(VAR_4->format, VAR_1[VAR_5].name))
   continue;

  VAR_3->format = &VAR_1[VAR_5];
  break;
 }

 if (!VAR_3->format) {
  FUNC_1(&VAR_2->dev, "Invalid format value\n");
  return -VAR_0;
 }

 return 0;
}
