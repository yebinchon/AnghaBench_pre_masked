
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,int *,int ,int *,void*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_4(void)
{
 int VAR_9;

 VAR_8 = FUNC_0("compal-wifi", &VAR_6->dev,
    VAR_2, &VAR_7,
    (void *) VAR_4);
 if (!VAR_8)
  return -VAR_0;

 VAR_9 = FUNC_2(VAR_8);
 if (VAR_9)
  goto err_wifi;

 VAR_5 = FUNC_0("compal-bluetooth", &VAR_6->dev,
    VAR_1, &VAR_7,
    (void *) VAR_3);
 if (!VAR_5) {
  VAR_9 = -VAR_0;
  goto err_allocate_bt;
 }
 VAR_9 = FUNC_2(VAR_5);
 if (VAR_9)
  goto err_register_bt;

 return 0;

err_register_bt:
 FUNC_1(VAR_5);

err_allocate_bt:
 FUNC_3(VAR_8);

err_wifi:
 FUNC_1(VAR_8);

 return VAR_9;
}
