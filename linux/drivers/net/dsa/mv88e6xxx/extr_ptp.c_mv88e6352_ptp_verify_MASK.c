
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptp_clock_info {int dummy; } ;
typedef enum ptp_pin_function { ____Placeholder_ptp_pin_function } ptp_pin_function ;


 int VAR_0 ;





__attribute__((used)) static int FUNC_0(struct ptp_clock_info *VAR_1, unsigned int VAR_2,
    enum ptp_pin_function VAR_3, unsigned int VAR_4)
{
 switch (VAR_3) {
 case 130:
 case 131:
  break;
 case 129:
 case 128:
  return -VAR_0;
 }
 return 0;
}
