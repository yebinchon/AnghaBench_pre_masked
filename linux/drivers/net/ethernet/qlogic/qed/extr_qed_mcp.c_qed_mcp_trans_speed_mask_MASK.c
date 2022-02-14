
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;


 int FUNC_0 (struct qed_hwfn*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*,int*,int*) ;

int FUNC_3(struct qed_hwfn *VAR_8,
        struct qed_ptt *VAR_9, u32 *VAR_10)
{
 u32 VAR_11, VAR_12;
 int VAR_13;

 VAR_13 = FUNC_2(VAR_8, VAR_9, &VAR_12,
        &VAR_11);
 if (VAR_13)
  return VAR_13;

 if (FUNC_1(VAR_12, VAR_11) ==
         0)
  return -VAR_0;

 switch (VAR_11) {
 case 152:
 case 150:
 case 151:
 case 153:
 case 167:
  *VAR_10 = VAR_2;
  break;
 case 154:
 case 157:
 case 156:
 case 158:
 case 155:
 case 160:
 case 137:
  *VAR_10 = VAR_1;
  break;
 case 139:
 case 138:
 case 133:
 case 134:
  *VAR_10 = VAR_5 |
      VAR_1;
  break;
 case 165:
 case 161:
 case 162:
 case 163:
 case 166:
  *VAR_10 =
      VAR_7 |
      VAR_4;
  break;
 case 141:
 case 142:
 case 146:
 case 147:
 case 148:
 case 149:
  *VAR_10 = VAR_4;
  break;
 case 144:
 case 143:
 case 145:
 case 136:
  *VAR_10 = VAR_4 |
      VAR_1 |
      VAR_2;
  break;
 case 140:
 case 135:
  *VAR_10 = VAR_5 |
      VAR_1 |
      VAR_2;
  break;
 case 164:
 case 131:
  *VAR_10 =
      VAR_7 |
      VAR_6 |
      VAR_5 |
      VAR_4 |
      VAR_3 |
      VAR_1 |
      VAR_2;
  break;
 case 129:
 case 130:
 case 132:
  *VAR_10 =
      VAR_7 |
      VAR_5 |
      VAR_4 |
      VAR_1;
  break;
 case 128:
  *VAR_10 = VAR_5;
  break;
 case 159:
  *VAR_10 = VAR_1 |
      VAR_2;
  break;
 default:
  FUNC_0(VAR_8, "Unknown transceiver type 0x%x\n",
   VAR_11);
  *VAR_10 = 0xff;
  break;
 }

 return 0;
}
