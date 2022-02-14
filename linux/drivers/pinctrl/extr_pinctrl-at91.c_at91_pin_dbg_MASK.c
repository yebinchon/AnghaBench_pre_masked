
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct at91_pmx_pin {int mux; int conf; int pin; scalar_t__ bank; } ;


 int FUNC_0 (struct device const*,char*,scalar_t__,int ,int,...) ;

__attribute__((used)) static void FUNC_1(const struct device *VAR_0, const struct at91_pmx_pin *VAR_1)
{
 if (VAR_1->mux) {
  FUNC_0(VAR_0, "pio%c%d configured as periph%c with conf = 0x%lx\n",
   VAR_1->bank + 'A', VAR_1->pin, VAR_1->mux - 1 + 'A', VAR_1->conf);
 } else {
  FUNC_0(VAR_0, "pio%c%d configured as gpio with conf = 0x%lx\n",
   VAR_1->bank + 'A', VAR_1->pin, VAR_1->conf);
 }
}
