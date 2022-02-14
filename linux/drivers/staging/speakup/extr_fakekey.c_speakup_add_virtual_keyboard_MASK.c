
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int * parent; } ;
struct TYPE_7__ {int bustype; } ;
struct TYPE_9__ {char* name; char* phys; int keybit; int evbit; TYPE_2__ dev; TYPE_1__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 TYPE_3__* FUNC_1 () ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_3__* VAR_4 ;

int FUNC_4(void)
{
 int VAR_5;

 VAR_4 = FUNC_1();

 if (!VAR_4)
  return -VAR_1;

 VAR_4->name = "Speakup";
 VAR_4->id.bustype = VAR_0;
 VAR_4->phys = "speakup/input0";
 VAR_4->dev.parent = ((void*)0);

 FUNC_0(VAR_2, VAR_4->evbit);
 FUNC_0(VAR_3, VAR_4->keybit);

 VAR_5 = FUNC_3(VAR_4);
 if (VAR_5) {
  FUNC_2(VAR_4);
  VAR_4 = ((void*)0);
 }

 return VAR_5;
}
