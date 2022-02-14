
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union bpf_attr {int attach_flags; int attach_type; int attach_bpf_fd; } ;
struct bpf_prog {int dummy; } ;
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



 int VAR_9 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (struct bpf_prog*) ;
 int FUNC_2 (struct bpf_prog*) ;
 scalar_t__ FUNC_3 (struct bpf_prog*,int ) ;
 struct bpf_prog* FUNC_4 (int ,int) ;
 int FUNC_5 (struct bpf_prog*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (union bpf_attr const*,int,struct bpf_prog*) ;
 int FUNC_8 (union bpf_attr const*,struct bpf_prog*) ;
 int FUNC_9 (union bpf_attr const*,struct bpf_prog*) ;
 int FUNC_10 (union bpf_attr const*,struct bpf_prog*) ;

__attribute__((used)) static int FUNC_11(const union bpf_attr *VAR_12)
{
 enum bpf_prog_type VAR_13;
 struct bpf_prog *VAR_14;
 int VAR_15;

 if (!FUNC_6(VAR_9))
  return -VAR_11;

 if (FUNC_0(VAR_1))
  return -VAR_10;

 if (VAR_12->attach_flags & ~VAR_0)
  return -VAR_10;

 switch (VAR_12->attach_type) {
 case 145:
 case 146:
  VAR_13 = VAR_3;
  break;
 case 144:
 case 150:
 case 147:
  VAR_13 = VAR_4;
  break;
 case 152:
 case 149:
 case 151:
 case 148:
 case 139:
 case 137:
 case 140:
 case 138:
  VAR_13 = VAR_6;
  break;
 case 142:
  VAR_13 = VAR_8;
  break;
 case 154:
  VAR_13 = VAR_2;
  break;
 case 130:
  VAR_13 = 132;
  break;
 case 129:
 case 128:
  VAR_13 = 131;
  break;
 case 135:
  VAR_13 = 133;
  break;
 case 136:
  VAR_13 = 134;
  break;
 case 141:
  VAR_13 = VAR_7;
  break;
 case 153:
 case 143:
  VAR_13 = VAR_5;
  break;
 default:
  return -VAR_10;
 }

 VAR_14 = FUNC_4(VAR_12->attach_bpf_fd, VAR_13);
 if (FUNC_1(VAR_14))
  return FUNC_2(VAR_14);

 if (FUNC_3(VAR_14, VAR_12->attach_type)) {
  FUNC_5(VAR_14);
  return -VAR_10;
 }

 switch (VAR_13) {
 case 131:
 case 132:
  VAR_15 = FUNC_10(VAR_12, VAR_14);
  break;
 case 133:
  VAR_15 = FUNC_8(VAR_12, VAR_14);
  break;
 case 134:
  VAR_15 = FUNC_9(VAR_12, VAR_14);
  break;
 default:
  VAR_15 = FUNC_7(VAR_12, VAR_13, VAR_14);
 }

 if (VAR_15)
  FUNC_5(VAR_14);
 return VAR_15;
}
