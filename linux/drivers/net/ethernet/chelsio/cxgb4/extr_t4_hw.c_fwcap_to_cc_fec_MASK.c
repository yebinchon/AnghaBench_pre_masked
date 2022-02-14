
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fw_port_cap32_t ;
typedef enum cc_fec { ____Placeholder_cc_fec } cc_fec ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline enum cc_fec FUNC_0(fw_port_cap32_t VAR_4)
{
 enum cc_fec VAR_5 = 0;

 if (VAR_4 & VAR_3)
  VAR_5 |= VAR_1;
 if (VAR_4 & VAR_2)
  VAR_5 |= VAR_0;

 return VAR_5;
}
