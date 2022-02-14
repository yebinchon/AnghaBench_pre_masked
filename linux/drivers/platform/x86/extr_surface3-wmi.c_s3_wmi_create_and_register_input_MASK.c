
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_3__ {int product; int bustype; } ;
struct input_dev {char* name; char* phys; TYPE_1__ id; } ;
struct TYPE_4__ {struct input_dev* input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct input_dev* FUNC_0 (int *) ;
 int FUNC_1 (struct input_dev*) ;
 int FUNC_2 (struct input_dev*) ;
 int FUNC_3 (struct input_dev*,int ,int ) ;
 TYPE_2__ VAR_4 ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_5)
{
 struct input_dev *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_0(&VAR_5->dev);
 if (!VAR_6)
  return -VAR_1;

 VAR_6->name = "Lid Switch";
 VAR_6->phys = "button/input0";
 VAR_6->id.bustype = VAR_0;
 VAR_6->id.product = 0x0005;

 FUNC_3(VAR_6, VAR_2, VAR_3);

 VAR_7 = FUNC_2(VAR_6);
 if (VAR_7)
  goto out_err;

 VAR_4.input = VAR_6;

 return 0;
 out_err:
 FUNC_1(VAR_4.input);
 return VAR_7;
}
