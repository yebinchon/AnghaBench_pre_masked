
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum param_type { ____Placeholder_param_type } param_type ;
__attribute__((used)) static inline char *FUNC_0(enum param_type VAR_0)
{
 char *VAR_1;

 switch (VAR_0) {
 case 129:
  VAR_1 = "radio";
  break;
 case 130:
  VAR_1 = "pal";
  break;
 case 128:
  VAR_1 = "secam";
  break;
 case 131:
  VAR_1 = "ntsc";
  break;
 case 132:
  VAR_1 = "digital";
  break;
 default:
  VAR_1 = "unknown";
  break;
 }
 return VAR_1;
}
