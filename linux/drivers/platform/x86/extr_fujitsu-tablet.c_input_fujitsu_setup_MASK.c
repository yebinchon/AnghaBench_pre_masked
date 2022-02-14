
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int vendor; int product; int version; int bustype; } ;
struct TYPE_5__ {struct device* parent; } ;
struct input_dev {char const* phys; char const* name; int keycodesize; int keycodemax; int evbit; scalar_t__* keycode; TYPE_2__ id; TYPE_1__ dev; } ;
struct device {int dummy; } ;
struct TYPE_7__ {scalar_t__* keymap; } ;
struct TYPE_8__ {struct input_dev* idev; TYPE_3__ config; } ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int ,int ) ;
 TYPE_4__ VAR_9 ;
 struct input_dev* FUNC_2 () ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (struct input_dev*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_10, const char *VAR_11,
          const char *VAR_12)
{
 struct input_dev *VAR_13;
 int VAR_14;
 int VAR_15;

 VAR_13 = FUNC_2();
 if (!VAR_13)
  return -VAR_1;

 VAR_13->dev.parent = VAR_10;
 VAR_13->phys = VAR_12;
 VAR_13->name = VAR_11;
 VAR_13->id.bustype = VAR_0;
 VAR_13->id.vendor = 0x1734;
 VAR_13->id.product = 0x0001;
 VAR_13->id.version = 0x0101;

 VAR_13->keycode = VAR_9.config.keymap;
 VAR_13->keycodesize = sizeof(VAR_9.config.keymap[0]);
 VAR_13->keycodemax = FUNC_0(VAR_9.config.keymap);

 FUNC_1(VAR_4, VAR_13->evbit);

 for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_9.config.keymap); VAR_15++)
  if (VAR_9.config.keymap[VAR_15])
   FUNC_5(VAR_13, VAR_2, VAR_9.config.keymap[VAR_15]);

 FUNC_5(VAR_13, VAR_3, VAR_6);

 FUNC_5(VAR_13, VAR_5, VAR_7);
 FUNC_5(VAR_13, VAR_5, VAR_8);

 VAR_14 = FUNC_4(VAR_13);
 if (VAR_14) {
  FUNC_3(VAR_13);
  return VAR_14;
 }

 VAR_9.idev = VAR_13;
 return 0;
}
