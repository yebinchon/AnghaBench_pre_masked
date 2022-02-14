
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
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static inline fw_port_cap32_t FUNC_0(enum cc_pause VAR_8)
{



 fw_port_cap32_t VAR_9 = 0;

 if (VAR_8 & VAR_6)
  VAR_9 |= VAR_2;
 if (VAR_8 & VAR_7)
  VAR_9 |= VAR_3;
 if (!(VAR_8 & VAR_5))
  VAR_9 |= VAR_4;





 if (VAR_8 & VAR_6) {
  if (VAR_8 & VAR_7)
   VAR_9 |= VAR_1;
  else
   VAR_9 |= VAR_0;
 } else if (VAR_8 & VAR_7) {
  VAR_9 |= VAR_0;
 }

 return VAR_9;
}
