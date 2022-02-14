
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_cmd {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct se_cmd*,int ) ;

__attribute__((used)) static inline int FUNC_1(
 struct se_cmd *VAR_1,
 unsigned char *VAR_2)
{




 switch (VAR_2[0]) {
 case 136:
 case 130:
  return 0;
 case 135:
  switch (VAR_2[1] & 0x1f) {
  case 133:
   return 0;
  default:
   FUNC_0(VAR_1, VAR_0);
   return 1;
  }
 case 134:
  switch (VAR_2[1]) {
  case 132:
   return 0;
  default:
   FUNC_0(VAR_1, VAR_0);
   return 1;
  }
 case 129:
 case 131:
 case 128:
  return 0;
 default:
  FUNC_0(VAR_1, VAR_0);
  return 1;
 }

 return 0;
}
