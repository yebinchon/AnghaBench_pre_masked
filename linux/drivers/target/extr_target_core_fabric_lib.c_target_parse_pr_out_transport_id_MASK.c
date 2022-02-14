
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct se_portal_group {int proto_id; } ;







 char const* FUNC_0 (struct se_portal_group*,char*,int*,char**) ;
 int FUNC_1 (char*,int) ;

const char *FUNC_2(struct se_portal_group *VAR_0,
  char *VAR_1, u32 *VAR_2, char **VAR_3)
{
 u32 VAR_4;

 switch (VAR_0->proto_id) {
 case 130:




  VAR_4 = 4;
  break;
 case 129:
 case 128:
 case 132:
  VAR_4 = 8;
  break;
 case 131:
  return FUNC_0(VAR_0, VAR_1, VAR_2,
     VAR_3);
 default:
  FUNC_1("Unknown proto_id: 0x%02x\n", VAR_0->proto_id);
  return ((void*)0);
 }

 *VAR_3 = ((void*)0);
 *VAR_2 = 24;
 return VAR_1 + VAR_4;
}
