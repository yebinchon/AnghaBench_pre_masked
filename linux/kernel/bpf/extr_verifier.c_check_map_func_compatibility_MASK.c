
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_verifier_env {int subprog_cnt; } ;
struct bpf_map {int map_type; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct bpf_verifier_env*,char*,...) ;

__attribute__((used)) static int FUNC_2(struct bpf_verifier_env *VAR_3,
     struct bpf_map *VAR_4, int VAR_5)
{
 if (!VAR_4)
  return 0;


 switch (VAR_4->map_type) {
 case 136:
  if (VAR_5 != 146)
   goto error;
  break;
 case 137:
  if (VAR_5 != 157 &&
      VAR_5 != 158 &&
      VAR_5 != 156)
   goto error;
  break;
 case 129:
  if (VAR_5 != 164)
   goto error;
  break;
 case 144:
  if (VAR_5 != 149 &&
      VAR_5 != 166)
   goto error;
  break;
 case 143:
 case 138:
  if (VAR_5 != 165)
   goto error;
  break;
 case 141:
 case 140:
  if (VAR_5 != 155 &&
      VAR_5 != VAR_1)
   goto error;
  break;



 case 142:
  if (VAR_5 != 155)
   goto error;
  break;
 case 128:
  if (VAR_5 != 155 &&
      VAR_5 != VAR_1)
   goto error;
  break;
 case 145:
 case 139:
  if (VAR_5 != VAR_1)
   goto error;
  break;
 case 131:
  if (VAR_5 != 153 &&
      VAR_5 != 147 &&
      VAR_5 != VAR_0 &&
      VAR_5 != 159)
   goto error;
  break;
 case 132:
  if (VAR_5 != 154 &&
      VAR_5 != 148 &&
      VAR_5 != VAR_0 &&
      VAR_5 != 160)
   goto error;
  break;
 case 134:
  if (VAR_5 != 152)
   goto error;
  break;
 case 135:
 case 130:
  if (VAR_5 != 163 &&
      VAR_5 != 162 &&
      VAR_5 != 161)
   goto error;
  break;
 case 133:
  if (VAR_5 != 150 &&
      VAR_5 != 151)
   goto error;
  break;
 default:
  break;
 }


 switch (VAR_5) {
 case 146:
  if (VAR_4->map_type != 136)
   goto error;
  if (VAR_3->subprog_cnt > 1) {
   FUNC_1(VAR_3, "tail_calls are not allowed in programs with bpf-to-bpf calls\n");
   return -VAR_2;
  }
  break;
 case 157:
 case 158:
 case 156:
  if (VAR_4->map_type != 137)
   goto error;
  break;
 case 164:
  if (VAR_4->map_type != 129)
   goto error;
  break;
 case 166:
 case 149:
  if (VAR_4->map_type != 144)
   goto error;
  break;
 case 155:
  if (VAR_4->map_type != 141 &&
      VAR_4->map_type != 140 &&
      VAR_4->map_type != 142 &&
      VAR_4->map_type != 128)
   goto error;
  break;
 case 153:
 case 159:
 case 147:
  if (VAR_4->map_type != 131)
   goto error;
  break;
 case 154:
 case 160:
 case 148:
  if (VAR_4->map_type != 132)
   goto error;
  break;
 case 165:
  if (VAR_4->map_type != 143 &&
      VAR_4->map_type != 138)
   goto error;
  break;
 case 152:
  if (VAR_4->map_type != 134)
   goto error;
  break;
 case 163:
 case 162:
 case 161:
  if (VAR_4->map_type != 135 &&
      VAR_4->map_type != 130)
   goto error;
  break;
 case 150:
 case 151:
  if (VAR_4->map_type != 133)
   goto error;
  break;
 default:
  break;
 }

 return 0;
error:
 FUNC_1(VAR_3, "cannot pass map_type %d into func %s#%d\n",
  VAR_4->map_type, FUNC_0(VAR_5), VAR_5);
 return -VAR_2;
}
