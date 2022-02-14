
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_uart_port {int n_adjustable_baud_rates; TYPE_1__* baud_tolerance; } ;
struct TYPE_2__ {unsigned int lower_range_baud; unsigned int upper_range_baud; long tolerance; } ;



__attribute__((used)) static long FUNC_0(struct tegra_uart_port *VAR_0,
         unsigned int VAR_1, long VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->n_adjustable_baud_rates; ++VAR_3) {
  if (VAR_1 >= VAR_0->baud_tolerance[VAR_3].lower_range_baud &&
      VAR_1 <= VAR_0->baud_tolerance[VAR_3].upper_range_baud)
   return (VAR_2 + (VAR_2 *
    VAR_0->baud_tolerance[VAR_3].tolerance) / 10000);
 }

 return VAR_2;
}
