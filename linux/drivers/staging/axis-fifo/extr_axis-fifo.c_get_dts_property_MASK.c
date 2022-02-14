
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct axis_fifo {TYPE_1__* dt_device; } ;
struct TYPE_3__ {int of_node; } ;


 int FUNC_0 (TYPE_1__*,char*,char*,unsigned int) ;
 int FUNC_1 (TYPE_1__*,char*,char*) ;
 int FUNC_2 (int ,char*,unsigned int*) ;

__attribute__((used)) static int FUNC_3(struct axis_fifo *VAR_0,
       char *VAR_1, unsigned int *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_2(VAR_0->dt_device->of_node, VAR_1, VAR_2);
 if (VAR_3) {
  FUNC_1(VAR_0->dt_device, "couldn't read IP dts property '%s'",
   VAR_1);
  return VAR_3;
 }
 FUNC_0(VAR_0->dt_device, "dts property '%s' = %u\n",
  VAR_1, *VAR_2);

 return 0;
}
