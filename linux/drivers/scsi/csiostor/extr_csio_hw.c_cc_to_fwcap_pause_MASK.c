
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fw_port_cap32_t ;
typedef enum cc_pause { ____Placeholder_cc_pause } cc_pause ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline fw_port_cap32_t FUNC_0(enum cc_pause VAR_4)
{
 fw_port_cap32_t VAR_5 = 0;

 if (VAR_4 & VAR_2)
  VAR_5 |= VAR_0;
 if (VAR_4 & VAR_3)
  VAR_5 |= VAR_1;

 return VAR_5;
}
