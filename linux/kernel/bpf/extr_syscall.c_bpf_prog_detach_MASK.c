
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union bpf_attr {int attach_type; } ;
typedef enum bpf_prog_type { ____Placeholder_bpf_prog_type } bpf_prog_type ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;



 int VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (union bpf_attr const*,int) ;
 int FUNC_3 (union bpf_attr const*) ;
 int FUNC_4 (union bpf_attr const*) ;
 int FUNC_5 (union bpf_attr const*,int *) ;

__attribute__((used)) static int FUNC_6(const union bpf_attr *VAR_11)
{
 enum bpf_prog_type VAR_12;

 if (!FUNC_1(VAR_8))
  return -VAR_10;

 if (FUNC_0(VAR_0))
  return -VAR_9;

 switch (VAR_11->attach_type) {
 case 141:
 case 142:
  VAR_12 = VAR_2;
  break;
 case 140:
 case 146:
 case 143:
  VAR_12 = VAR_3;
  break;
 case 148:
 case 145:
 case 147:
 case 144:
 case 135:
 case 133:
 case 136:
 case 134:
  VAR_12 = VAR_5;
  break;
 case 138:
  VAR_12 = VAR_7;
  break;
 case 150:
  VAR_12 = VAR_1;
  break;
 case 130:
  return FUNC_5(VAR_11, ((void*)0));
 case 129:
 case 128:
  return FUNC_5(VAR_11, ((void*)0));
 case 131:
  return FUNC_3(VAR_11);
 case 132:
  return FUNC_4(VAR_11);
 case 137:
  VAR_12 = VAR_6;
  break;
 case 149:
 case 139:
  VAR_12 = VAR_4;
  break;
 default:
  return -VAR_9;
 }

 return FUNC_2(VAR_11, VAR_12);
}
