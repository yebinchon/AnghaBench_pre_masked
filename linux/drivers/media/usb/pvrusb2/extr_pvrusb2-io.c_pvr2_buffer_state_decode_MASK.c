
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum pvr2_buffer_state { ____Placeholder_pvr2_buffer_state } pvr2_buffer_state ;







__attribute__((used)) static const char *FUNC_0(enum pvr2_buffer_state VAR_0)
{
 switch (VAR_0) {
 case 130: return "none";
 case 131: return "idle";
 case 129: return "queued";
 case 128: return "ready";
 }
 return "unknown";
}
