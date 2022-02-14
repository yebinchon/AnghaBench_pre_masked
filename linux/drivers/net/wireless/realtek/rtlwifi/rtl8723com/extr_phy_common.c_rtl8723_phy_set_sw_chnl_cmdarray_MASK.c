
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct swchnlcmd {int cmdid; scalar_t__ msdelay; scalar_t__ para2; scalar_t__ para1; } ;
typedef enum swchnlcmd_id { ____Placeholder_swchnlcmd_id } swchnlcmd_id ;


 int FUNC_0 (int,char*) ;

bool FUNC_1(struct swchnlcmd *VAR_0,
          u32 VAR_1,
          u32 VAR_2,
          enum swchnlcmd_id VAR_3,
          u32 VAR_4, u32 VAR_5,
          u32 VAR_6)
{
 struct swchnlcmd *VAR_7;

 if (VAR_0 == ((void*)0)) {
  FUNC_0(1, "rtl8723-common: cmdtable cannot be NULL.\n");
  return 0;
 }

 if (VAR_1 >= VAR_2)
  return 0;

 VAR_7 = VAR_0 + VAR_1;
 VAR_7->cmdid = VAR_3;
 VAR_7->para1 = VAR_4;
 VAR_7->para2 = VAR_5;
 VAR_7->msdelay = VAR_6;
 return 1;
}
