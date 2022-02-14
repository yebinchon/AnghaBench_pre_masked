
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* wwn_t ;
typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct fchs_s {int dummy; } ;
struct TYPE_2__ {scalar_t__ els_code; } ;
struct fc_adisc_s {int nport_id; void* orig_node_name; void* orig_port_name; scalar_t__ orig_HA; TYPE_1__ els_cmd; } ;
typedef int __be16 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct fchs_s*,int ,int ,int ) ;
 int FUNC_1 (struct fchs_s*,int ,int ,int ) ;
 int FUNC_2 (struct fc_adisc_s*,char,int) ;

__attribute__((used)) static u16
FUNC_3(struct fchs_s *VAR_1, struct fc_adisc_s *VAR_2, u32 VAR_3,
   u32 VAR_4, __be16 VAR_5, wwn_t VAR_6,
   wwn_t VAR_7, u8 VAR_8)
{
 FUNC_2(VAR_2, '\0', sizeof(struct fc_adisc_s));

 VAR_2->els_cmd.els_code = VAR_8;

 if (VAR_8 == VAR_0)
  FUNC_0(VAR_1, VAR_3, VAR_4, VAR_5);
 else
  FUNC_1(VAR_1, VAR_3, VAR_4, VAR_5);

 VAR_2->orig_HA = 0;
 VAR_2->orig_port_name = VAR_6;
 VAR_2->orig_node_name = VAR_7;
 VAR_2->nport_id = (VAR_4);

 return sizeof(struct fc_adisc_s);
}
