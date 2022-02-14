
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_handler {int dummy; } ;
struct input_handle {char* name; struct input_handler* handler; struct input_dev* dev; } ;
struct input_device_id {int dummy; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct input_handle*) ;
 int FUNC_1 (struct input_handle*) ;
 int FUNC_2 (struct input_handle*) ;
 int FUNC_3 (struct input_handle*) ;
 struct input_handle* FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct input_handler *VAR_2, struct input_dev *VAR_3,
   const struct input_device_id *VAR_4)
{
 struct input_handle *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_4(sizeof(struct input_handle), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->dev = VAR_3;
 VAR_5->handler = VAR_2;
 VAR_5->name = "kbd";

 VAR_6 = FUNC_1(VAR_5);
 if (VAR_6)
  goto err_free_handle;

 VAR_6 = FUNC_0(VAR_5);
 if (VAR_6)
  goto err_unregister_handle;

 return 0;

 err_unregister_handle:
 FUNC_2(VAR_5);
 err_free_handle:
 FUNC_3(VAR_5);
 return VAR_6;
}
