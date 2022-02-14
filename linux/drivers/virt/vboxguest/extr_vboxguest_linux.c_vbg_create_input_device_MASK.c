
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vbg_dev {struct input_dev* input; int dev; } ;
struct TYPE_4__ {int parent; } ;
struct TYPE_3__ {int product; int vendor; int bustype; } ;
struct input_dev {char* name; TYPE_2__ dev; int close; int open; TYPE_1__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct input_dev* FUNC_0 (int ) ;
 int FUNC_1 (struct input_dev*) ;
 int FUNC_2 (struct input_dev*,int ,int ,int ,int ,int ) ;
 int FUNC_3 (struct input_dev*,int ,int ) ;
 int FUNC_4 (struct input_dev*,struct vbg_dev*) ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_5(struct vbg_dev *VAR_12)
{
 struct input_dev *VAR_13;

 VAR_13 = FUNC_0(VAR_12->dev);
 if (!VAR_13)
  return -VAR_4;

 VAR_13->id.bustype = VAR_3;
 VAR_13->id.vendor = VAR_6;
 VAR_13->id.product = VAR_7;
 VAR_13->open = VAR_11;
 VAR_13->close = VAR_10;
 VAR_13->dev.parent = VAR_12->dev;
 VAR_13->name = "VirtualBox mouse integration";

 FUNC_2(VAR_13, VAR_0, VAR_9,
        VAR_8, 0, 0);
 FUNC_2(VAR_13, VAR_1, VAR_9,
        VAR_8, 0, 0);
 FUNC_3(VAR_13, VAR_5, VAR_2);
 FUNC_4(VAR_13, VAR_12);

 VAR_12->input = VAR_13;

 return FUNC_1(VAR_12->input);
}
