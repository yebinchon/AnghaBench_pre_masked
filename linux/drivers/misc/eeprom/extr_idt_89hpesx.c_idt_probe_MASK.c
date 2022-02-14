
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idt_89hpesx_dev {int dummy; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dummy; } ;


 scalar_t__ FUNC_0 (struct idt_89hpesx_dev*) ;
 int FUNC_1 (struct idt_89hpesx_dev*) ;
 int FUNC_2 (struct idt_89hpesx_dev*) ;
 int FUNC_3 (struct idt_89hpesx_dev*) ;
 struct idt_89hpesx_dev* FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (struct idt_89hpesx_dev*) ;
 int FUNC_6 (struct idt_89hpesx_dev*) ;
 int FUNC_7 (struct idt_89hpesx_dev*) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_0, const struct i2c_device_id *VAR_1)
{
 struct idt_89hpesx_dev *VAR_2;
 int VAR_3;


 VAR_2 = FUNC_4(VAR_0);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);


 VAR_3 = FUNC_7(VAR_2);
 if (VAR_3 != 0)
  goto err_free_pdev;


 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3 != 0)
  goto err_free_pdev;


 VAR_3 = FUNC_5(VAR_2);
 if (VAR_3 != 0)
  goto err_free_pdev;


 FUNC_3(VAR_2);

 return 0;

err_free_pdev:
 FUNC_6(VAR_2);

 return VAR_3;
}
