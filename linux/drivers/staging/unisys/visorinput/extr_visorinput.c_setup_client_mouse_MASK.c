
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vendor; int product; int version; int bustype; } ;
struct input_dev {char* name; char* phys; int* evbit; int close; int open; int keybit; TYPE_1__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 struct input_dev* FUNC_1 () ;
 int FUNC_2 (struct input_dev*,int ,int ,unsigned int,int ,int ) ;
 int FUNC_3 (struct input_dev*,int ,int ) ;
 int FUNC_4 (struct input_dev*,void*) ;
 int FUNC_5 (int ,int ) ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static struct input_dev *FUNC_6(void *VAR_14, unsigned int VAR_15,
         unsigned int VAR_16)
{
 struct input_dev *VAR_17 = FUNC_1();

 if (!VAR_17)
  return ((void*)0);

 VAR_17->name = "visor Mouse";
 VAR_17->phys = "visormou:input0";
 VAR_17->id.bustype = VAR_5;
 VAR_17->id.vendor = 0x0001;
 VAR_17->id.product = 0x0002;
 VAR_17->id.version = 0x0100;

 VAR_17->evbit[0] = FUNC_0(VAR_7) | FUNC_0(VAR_6);
 FUNC_5(VAR_2, VAR_17->keybit);
 FUNC_5(VAR_4, VAR_17->keybit);
 FUNC_5(VAR_3, VAR_17->keybit);

 if (VAR_15 == 0)
  VAR_15 = VAR_9;
 if (VAR_16 == 0)
  VAR_16 = VAR_10;
 FUNC_2(VAR_17, VAR_0, 0, VAR_15, 0, 0);
 FUNC_2(VAR_17, VAR_1, 0, VAR_16, 0, 0);

 VAR_17->open = VAR_13;
 VAR_17->close = VAR_12;

 FUNC_4(VAR_17, VAR_14);
 FUNC_3(VAR_17, VAR_8, VAR_11);

 return VAR_17;
}
