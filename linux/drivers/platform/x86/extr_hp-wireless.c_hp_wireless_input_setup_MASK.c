
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int bustype; } ;
struct TYPE_7__ {char* name; char* phys; int keybit; int * evbit; TYPE_1__ id; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(void)
{
 int VAR_5;

 VAR_4 = FUNC_1();
 if (!VAR_4)
  return -VAR_1;

 VAR_4->name = "HP Wireless hotkeys";
 VAR_4->phys = "hpq6001/input0";
 VAR_4->id.bustype = VAR_0;
 VAR_4->evbit[0] = FUNC_0(VAR_2);
 FUNC_4(VAR_3, VAR_4->keybit);

 VAR_5 = FUNC_3(VAR_4);
 if (VAR_5)
  goto err_free_dev;

 return 0;

err_free_dev:
 FUNC_2(VAR_4);
 return VAR_5;
}
