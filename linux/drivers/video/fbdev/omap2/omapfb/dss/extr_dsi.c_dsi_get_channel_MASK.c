
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;

__attribute__((used)) static enum omap_channel FUNC_2(int VAR_3)
{
 switch (FUNC_1()) {
 case 135:
 case 136:
  FUNC_0("DSI not supported\n");
  return VAR_0;

 case 134:
 case 133:
 case 132:
 case 137:
  return VAR_0;

 case 130:
 case 129:
 case 131:
  switch (VAR_3) {
  case 0:
   return VAR_0;
  case 1:
   return VAR_1;
  default:
   FUNC_0("unsupported module id\n");
   return VAR_0;
  }

 case 128:
  switch (VAR_3) {
  case 0:
   return VAR_0;
  case 1:
   return VAR_2;
  default:
   FUNC_0("unsupported module id\n");
   return VAR_0;
  }

 default:
  FUNC_0("unsupported DSS version\n");
  return VAR_0;
 }
}
