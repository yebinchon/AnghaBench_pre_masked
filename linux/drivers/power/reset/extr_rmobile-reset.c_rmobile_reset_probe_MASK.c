
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_3)
{
 int VAR_4;

 VAR_2 = FUNC_2(VAR_3->dev.of_node, 1);
 if (!VAR_2)
  return -VAR_0;

 VAR_4 = FUNC_3(&VAR_1);
 if (VAR_4) {
  FUNC_0(&VAR_3->dev,
   "cannot register restart handler (err=%d)\n", VAR_4);
  goto fail_unmap;
 }

 return 0;

fail_unmap:
 FUNC_1(VAR_2);
 return VAR_4;
}
