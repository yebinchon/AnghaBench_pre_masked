
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg_msg {long m_type; } ;
__attribute__((used)) static int FUNC_0(struct msg_msg *VAR_0, long VAR_1, int VAR_2)
{
 switch (VAR_2) {
 case 132:
 case 128:
  return 1;
 case 130:
  if (VAR_0->m_type <= VAR_1)
   return 1;
  break;
 case 131:
  if (VAR_0->m_type == VAR_1)
   return 1;
  break;
 case 129:
  if (VAR_0->m_type != VAR_1)
   return 1;
  break;
 }
 return 0;
}
