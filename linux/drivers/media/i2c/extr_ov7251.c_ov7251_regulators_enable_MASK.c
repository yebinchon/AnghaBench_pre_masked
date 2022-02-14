
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ov7251 {int io_regulator; int analog_regulator; int dev; int core_regulator; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct ov7251 *VAR_0)
{
 int VAR_1;





 VAR_1 = FUNC_2(VAR_0->io_regulator);
 if (VAR_1 < 0) {
  FUNC_0(VAR_0->dev, "set io voltage failed\n");
  return VAR_1;
 }

 VAR_1 = FUNC_2(VAR_0->analog_regulator);
 if (VAR_1) {
  FUNC_0(VAR_0->dev, "set analog voltage failed\n");
  goto err_disable_io;
 }

 VAR_1 = FUNC_2(VAR_0->core_regulator);
 if (VAR_1) {
  FUNC_0(VAR_0->dev, "set core voltage failed\n");
  goto err_disable_analog;
 }

 return 0;

err_disable_analog:
 FUNC_1(VAR_0->analog_regulator);

err_disable_io:
 FUNC_1(VAR_0->io_regulator);

 return VAR_1;
}
