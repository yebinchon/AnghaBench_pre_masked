
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rbtn_data {TYPE_2__* input_dev; } ;
struct TYPE_5__ {int bustype; } ;
struct TYPE_6__ {char* name; char* phys; int keybit; int * evbit; TYPE_1__ id; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct rbtn_data *VAR_4)
{
 int VAR_5;

 VAR_4->input_dev = FUNC_1();
 if (!VAR_4->input_dev)
  return -VAR_1;

 VAR_4->input_dev->name = "DELL Wireless hotkeys";
 VAR_4->input_dev->phys = "dellabce/input0";
 VAR_4->input_dev->id.bustype = VAR_0;
 VAR_4->input_dev->evbit[0] = FUNC_0(VAR_2);
 FUNC_4(VAR_3, VAR_4->input_dev->keybit);

 VAR_5 = FUNC_3(VAR_4->input_dev);
 if (VAR_5) {
  FUNC_2(VAR_4->input_dev);
  VAR_4->input_dev = ((void*)0);
  return VAR_5;
 }

 return 0;
}
