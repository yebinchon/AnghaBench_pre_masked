
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptp_clock_info {int dummy; } ;
typedef enum ptp_pin_function { ____Placeholder_ptp_pin_function } ptp_pin_function ;







__attribute__((used)) static int FUNC_0(struct ptp_clock_info *VAR_0, unsigned int VAR_1,
         enum ptp_pin_function VAR_2, unsigned int VAR_3)
{
 switch (VAR_2) {
 case 130:
 case 131:
 case 129:
  break;
 case 128:
  return -1;
 }
 return 0;
}
