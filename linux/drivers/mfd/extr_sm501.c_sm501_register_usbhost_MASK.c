
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sm501_devdata {int dummy; } ;
struct platform_device {int * resource; } ;
typedef int resource_size_t ;


 int VAR_0 ;
 int FUNC_0 (struct sm501_devdata*,int *) ;
 int FUNC_1 (struct sm501_devdata*,int *,int *,int) ;
 struct platform_device* FUNC_2 (struct sm501_devdata*,char*,int,int ) ;
 int FUNC_3 (struct sm501_devdata*,int *,int,int) ;
 int FUNC_4 (struct sm501_devdata*,struct platform_device*) ;

__attribute__((used)) static int FUNC_5(struct sm501_devdata *VAR_1,
      resource_size_t *VAR_2)
{
 struct platform_device *VAR_3;

 VAR_3 = FUNC_2(VAR_1, "sm501-usb", 3, 0);
 if (!VAR_3)
  return -VAR_0;

 FUNC_3(VAR_1, &VAR_3->resource[0], 0x40000, 0x20000);
 FUNC_1(VAR_1, &VAR_3->resource[1], VAR_2, 256*1024);
 FUNC_0(VAR_1, &VAR_3->resource[2]);

 return FUNC_4(VAR_1, VAR_3);
}
