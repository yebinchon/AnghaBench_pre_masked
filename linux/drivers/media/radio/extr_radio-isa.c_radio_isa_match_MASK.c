
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radio_isa_driver {scalar_t__* io_params; scalar_t__ probe; } ;
struct device {struct radio_isa_driver* platform_data; } ;



int FUNC_0(struct device *VAR_0, unsigned int VAR_1)
{
 struct radio_isa_driver *VAR_2 = VAR_0->platform_data;

 return VAR_2->probe || VAR_2->io_params[VAR_1] >= 0;
}
