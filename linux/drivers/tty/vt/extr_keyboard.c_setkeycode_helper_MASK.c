
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_handle {int dev; } ;
struct getset_keycode_data {scalar_t__ error; int ke; } ;


 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static int FUNC_1(struct input_handle *VAR_0, void *VAR_1)
{
 struct getset_keycode_data *VAR_2 = VAR_1;

 VAR_2->error = FUNC_0(VAR_0->dev, &VAR_2->ke);

 return VAR_2->error == 0;
}
