
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct wm8350 {int dummy; } ;
struct platform_device {int dev; } ;
struct TYPE_6__ {int * parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct wm8350* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,struct wm8350*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 TYPE_1__ VAR_2 ;
 int FUNC_5 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_3)
{
 struct wm8350 *VAR_4 = FUNC_0(VAR_3);

 if (!VAR_4) {
  FUNC_1("No driver data supplied\n");
  return -VAR_0;
 }

 FUNC_4(&VAR_2, VAR_1);
 FUNC_3(&VAR_2, VAR_4);
 VAR_2.parent = &VAR_3->dev;


 FUNC_5(&VAR_2, 4);

 return FUNC_2(&VAR_2);
}
