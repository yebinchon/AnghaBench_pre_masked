
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sense_reason_t ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static sense_reason_t
FUNC_2(int VAR_8, int VAR_9, int *VAR_10, int VAR_11)
{




 switch (VAR_8) {
 case 133:
  if (!(VAR_9 & VAR_1))
   goto not_supported;
  *VAR_10 = 1;
  break;
 case 134:
  if (!(VAR_9 & VAR_0))
   goto not_supported;
  *VAR_10 = 1;
  break;
 case 130:
  if (!(VAR_9 & VAR_4))
   goto not_supported;
  *VAR_10 = 1;
  break;
 case 128:
  if (!(VAR_9 & VAR_6))
   goto not_supported;
  *VAR_10 = 1;
  break;
 case 132:
  if (!(VAR_9 & VAR_2))
   goto not_supported;
  *VAR_10 = 1;
  break;
 case 131:




  if (!(VAR_9 & VAR_3))
   goto not_supported;
  *VAR_10 = 0;
  break;
 case 129:
  if (!(VAR_9 & VAR_5) || VAR_11)




   goto not_supported;
  *VAR_10 = 0;
  break;
 default:
  FUNC_1("Unknown ALUA access state: 0x%02x\n", VAR_8);
  return VAR_7;
 }

 return 0;

not_supported:
 FUNC_1("ALUA access state %s not supported",
        FUNC_0(VAR_8));
 return VAR_7;
}
