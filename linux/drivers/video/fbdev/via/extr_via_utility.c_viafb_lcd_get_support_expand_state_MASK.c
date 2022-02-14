
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
 int VAR_0 ;

bool FUNC_0(u32 VAR_1, u32 VAR_2)
{
 unsigned int VAR_3 = 0;

 switch (VAR_0) {
 case 140:
  if ((VAR_1 < 640) && (VAR_2 < 480))
   VAR_3 = 1;
  break;

 case 139:
  if ((VAR_1 < 800) && (VAR_2 < 600))
   VAR_3 = 1;
  break;

 case 138:
  if ((VAR_1 < 1024) && (VAR_2 < 768))
   VAR_3 = 1;
  break;

 case 137:
  if ((VAR_1 < 1280) && (VAR_2 < 768))
   VAR_3 = 1;
  break;

 case 136:
  if ((VAR_1 < 1280) && (VAR_2 < 1024))
   VAR_3 = 1;
  break;

 case 135:
  if ((VAR_1 < 1400) && (VAR_2 < 1050))
   VAR_3 = 1;
  break;

 case 134:
  if ((VAR_1 < 1600) && (VAR_2 < 1200))
   VAR_3 = 1;
  break;

 case 133:
  if ((VAR_1 < 1366) && (VAR_2 < 768))
   VAR_3 = 1;
  break;

 case 132:
  if ((VAR_1 < 1024) && (VAR_2 < 600))
   VAR_3 = 1;
  break;

 case 131:
  if ((VAR_1 < 1280) && (VAR_2 < 800))
   VAR_3 = 1;
  break;

 case 130:
  if ((VAR_1 < 800) && (VAR_2 < 480))
   VAR_3 = 1;
  break;

 case 129:
  if ((VAR_1 < 1360) && (VAR_2 < 768))
   VAR_3 = 1;
  break;

 case 128:
  if ((VAR_1 < 480) && (VAR_2 < 640))
   VAR_3 = 1;
  break;

 default:
  VAR_3 = 0;
  break;
 }

 return VAR_3;
}
