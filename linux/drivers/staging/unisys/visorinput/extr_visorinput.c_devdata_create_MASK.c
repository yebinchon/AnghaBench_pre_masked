
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct visorinput_devdata {int paused; unsigned int keycode_table_bytes; int lock_visor_dev; scalar_t__ interrupts_enabled; int visorinput_dev; int keycode_table; struct visor_device* dev; } ;
struct TYPE_2__ {unsigned int x_res; unsigned int y_res; } ;
struct visor_input_channel_data {TYPE_1__ mouse; } ;
struct visor_device {int device; } ;
struct channel_header {int dummy; } ;
typedef enum visorinput_dev_type { ____Placeholder_visorinput_dev_type } visorinput_dev_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct visorinput_devdata*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct visorinput_devdata*) ;
 struct visorinput_devdata* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct visorinput_devdata*,int ) ;
 int FUNC_10 (struct visorinput_devdata*,unsigned int,unsigned int) ;
 int FUNC_11 (struct visor_device*) ;
 unsigned int FUNC_12 (struct visor_device*,int,struct visor_input_channel_data*,unsigned int) ;


 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static struct visorinput_devdata *FUNC_13(struct visor_device *VAR_4,
       enum visorinput_dev_type VAR_5)
{
 struct visorinput_devdata *VAR_6 = ((void*)0);
 unsigned int VAR_7 = 0;
 unsigned int VAR_8, VAR_9, VAR_10, VAR_11;
 struct visor_input_channel_data VAR_12;

 if (VAR_5 == 129)

  VAR_7 = VAR_1 * 2;
 VAR_6 = FUNC_4(sizeof(*VAR_6) + VAR_7, VAR_0);
 if (!VAR_6)
  return ((void*)0);
 FUNC_6(&VAR_6->lock_visor_dev);
 FUNC_7(&VAR_6->lock_visor_dev);
 VAR_6->dev = VAR_4;







 VAR_6->paused = 1;






 switch (VAR_5) {
 case 129:
  VAR_6->keycode_table_bytes = VAR_7;
  FUNC_5(VAR_6->keycode_table, VAR_3,
         VAR_1);
  FUNC_5(VAR_6->keycode_table + VAR_1,
         VAR_2, VAR_1);
  VAR_6->visorinput_dev = FUNC_9
   (VAR_6, VAR_6->keycode_table);
  if (!VAR_6->visorinput_dev)
   goto cleanups_register;
  break;
 case 128:
  VAR_8 = sizeof(struct visor_input_channel_data);
  VAR_11 = FUNC_12(VAR_4, sizeof(struct channel_header),
         &VAR_12, VAR_8);
  if (VAR_11)
   goto cleanups_register;
  VAR_9 = VAR_12.mouse.x_res;
  VAR_10 = VAR_12.mouse.y_res;
  VAR_6->visorinput_dev = FUNC_10(VAR_6, VAR_9,
            VAR_10);
  if (!VAR_6->visorinput_dev)
   goto cleanups_register;
  break;
 default:

  break;
 }

 FUNC_0(&VAR_4->device, VAR_6);
 FUNC_8(&VAR_6->lock_visor_dev);







 if (FUNC_2(VAR_6->visorinput_dev)) {
  FUNC_1(VAR_6->visorinput_dev);
  goto err_kfree_devdata;
 }

 FUNC_7(&VAR_6->lock_visor_dev);





 VAR_6->paused = 0;
 if (VAR_6->interrupts_enabled)
  FUNC_11(VAR_4);
 FUNC_8(&VAR_6->lock_visor_dev);

 return VAR_6;

cleanups_register:
 FUNC_8(&VAR_6->lock_visor_dev);
err_kfree_devdata:
 FUNC_3(VAR_6);
 return ((void*)0);
}
