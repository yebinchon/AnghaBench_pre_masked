
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tps65910_board {int vmbch2_threshold; int vmbch_threshold; } ;
struct tps65910 {int dev; } ;
struct TYPE_3__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tps65910*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,char*) ;
 struct tps65910* FUNC_2 (int ) ;
 struct tps65910_board* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_4)
{
 struct tps65910 *VAR_5 = FUNC_2(VAR_4->dev.parent);
 struct tps65910_board *VAR_6 = FUNC_3(VAR_5->dev);
 int VAR_7;

 VAR_7 = FUNC_0(VAR_5, VAR_0, VAR_6->vmbch_threshold);
 if (VAR_7 < 0) {
  FUNC_1(&VAR_4->dev, "cannot set COMP1 threshold\n");
  return VAR_7;
 }

 VAR_7 = FUNC_0(VAR_5, VAR_1, VAR_6->vmbch2_threshold);
 if (VAR_7 < 0) {
  FUNC_1(&VAR_4->dev, "cannot set COMP2 threshold\n");
  return VAR_7;
 }


 VAR_7 = FUNC_4(&VAR_4->dev, &VAR_2);
 if (VAR_7 < 0)
  FUNC_1(&VAR_4->dev, "failed to add COMP1 sysfs file\n");

 VAR_7 = FUNC_4(&VAR_4->dev, &VAR_3);
 if (VAR_7 < 0)
  FUNC_1(&VAR_4->dev, "failed to add COMP2 sysfs file\n");

 return VAR_7;
}
