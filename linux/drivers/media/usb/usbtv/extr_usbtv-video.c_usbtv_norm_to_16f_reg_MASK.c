
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
typedef int uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static uint16_t FUNC_0(v4l2_std_id VAR_6)
{

 if (VAR_6 & VAR_0)
  return 0x00b8;

 if (VAR_6 & VAR_2)
  return 0x00ee;

 if (VAR_6 & VAR_5)
  return 0x00ff;
 if (VAR_6 & VAR_1)
  return 0x00a8;
 if (VAR_6 & (VAR_4 | VAR_3))
  return 0x00bc;

 return 0x0000;
}
