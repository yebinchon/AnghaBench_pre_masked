
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radio_isa_driver {int num_of_io_ports; int* io_ports; } ;



__attribute__((used)) static bool FUNC_0(const struct radio_isa_driver *VAR_0, int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_of_io_ports; VAR_2++)
  if (VAR_0->io_ports[VAR_2] == VAR_1)
   return 1;
 return 0;
}
