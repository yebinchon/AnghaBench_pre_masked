
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ov7251 {int dev; int io_regulator; int analog_regulator; int core_regulator; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ov7251 *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0->core_regulator);
 if (VAR_1 < 0)
  FUNC_0(VAR_0->dev, "core regulator disable failed\n");

 VAR_1 = FUNC_1(VAR_0->analog_regulator);
 if (VAR_1 < 0)
  FUNC_0(VAR_0->dev, "analog regulator disable failed\n");

 VAR_1 = FUNC_1(VAR_0->io_regulator);
 if (VAR_1 < 0)
  FUNC_0(VAR_0->dev, "io regulator disable failed\n");
}
