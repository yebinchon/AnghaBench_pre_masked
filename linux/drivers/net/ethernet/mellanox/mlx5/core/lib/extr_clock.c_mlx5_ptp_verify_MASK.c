
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptp_clock_info {int dummy; } ;
typedef enum ptp_pin_function { ____Placeholder_ptp_pin_function } ptp_pin_function ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct ptp_clock_info *VAR_2, unsigned int VAR_3,
      enum ptp_pin_function VAR_4, unsigned int VAR_5)
{
 return (VAR_4 == VAR_1) ? -VAR_0 : 0;
}
