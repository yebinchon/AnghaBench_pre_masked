
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wwn_t ;
typedef int u32 ;
typedef int u16 ;
struct fchs_s {int dummy; } ;
struct TYPE_2__ {int els_code; } ;
struct fc_logo_s {int orig_port_name; int nport_id; TYPE_1__ els_cmd; } ;


 int VAR_0 ;
 int FUNC_0 (struct fchs_s*,int ,int ,int) ;
 int FUNC_1 (struct fc_logo_s*,char,int) ;

u16
FUNC_2(struct fchs_s *VAR_1, struct fc_logo_s *VAR_2, u32 VAR_3, u32 VAR_4,
       u16 VAR_5, wwn_t VAR_6)
{
 FUNC_0(VAR_1, VAR_3, VAR_4, VAR_5);

 FUNC_1(VAR_2, '\0', sizeof(struct fc_logo_s));
 VAR_2->els_cmd.els_code = VAR_0;
 VAR_2->nport_id = (VAR_4);
 VAR_2->orig_port_name = VAR_6;

 return sizeof(struct fc_logo_s);
}
