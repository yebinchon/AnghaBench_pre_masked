
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum bpf_prog_type { ____Placeholder_bpf_prog_type } bpf_prog_type ;
typedef enum bpf_attach_type { ____Placeholder_bpf_attach_type } bpf_attach_type ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(enum bpf_prog_type VAR_1,
    enum bpf_attach_type VAR_2)
{
 switch (VAR_1) {
 case 130:
  switch (VAR_2) {
  case 137:
  case 143:
  case 140:
   return 0;
  default:
   return -VAR_0;
  }
 case 128:
  switch (VAR_2) {
  case 145:
  case 142:
  case 144:
  case 141:
  case 134:
  case 132:
  case 135:
  case 133:
   return 0;
  default:
   return -VAR_0;
  }
 case 131:
  switch (VAR_2) {
  case 138:
  case 139:
   return 0;
  default:
   return -VAR_0;
  }
 case 129:
  switch (VAR_2) {
  case 136:
  case 146:
   return 0;
  default:
   return -VAR_0;
  }
 default:
  return 0;
 }
}
