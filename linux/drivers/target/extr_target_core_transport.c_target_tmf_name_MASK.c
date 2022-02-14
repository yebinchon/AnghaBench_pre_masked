
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum tcm_tmreq_table { ____Placeholder_tcm_tmreq_table } tcm_tmreq_table ;
__attribute__((used)) static const char *FUNC_0(enum tcm_tmreq_table VAR_0)
{
 switch (VAR_0) {
 case 135: return "ABORT_TASK";
 case 134: return "ABORT_TASK_SET";
 case 133: return "CLEAR_ACA";
 case 132: return "CLEAR_TASK_SET";
 case 131: return "LUN_RESET";
 case 129: return "TARGET_WARM_RESET";
 case 130: return "TARGET_COLD_RESET";
 case 128: break;
 }
 return "(?)";
}
