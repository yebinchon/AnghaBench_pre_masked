
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum pvr2_config { ____Placeholder_pvr2_config } pvr2_config ;
const char *FUNC_0(enum pvr2_config VAR_0)
{
 switch (VAR_0) {
 case 132: return "empty";
 case 131: return "mpeg";
 case 128: return "vbi";
 case 130: return "pcm";
 case 129: return "raw video";
 }
 return "<unknown>";
}
