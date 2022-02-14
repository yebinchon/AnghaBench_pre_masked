
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* wwn_t ;
typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct fchs_s {int dummy; } ;
struct TYPE_6__ {void* bbcred; void* rxsz; } ;
struct TYPE_5__ {void* rxsz; } ;
struct TYPE_4__ {int els_code; } ;
struct fc_logi_s {TYPE_3__ csp; void* node_name; void* port_name; TYPE_2__ class3; TYPE_1__ els_cmd; } ;
typedef int __be16 ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct fchs_s*,int ,int ,int ) ;
 int FUNC_2 (struct fc_logi_s*,int *,int) ;
 int VAR_1 ;

u16
FUNC_3(struct fchs_s *VAR_2, struct fc_logi_s *VAR_3, u32 VAR_4,
     __be16 VAR_5, wwn_t VAR_6, wwn_t VAR_7,
     u16 VAR_8, u16 VAR_9, u8 VAR_10)
{
 u32 VAR_11 = 0;
 u16 VAR_12 = (VAR_10 << 12) | VAR_8;

 FUNC_2(VAR_3, &VAR_1, sizeof(struct fc_logi_s));
 FUNC_1(VAR_2, VAR_11, VAR_4, VAR_5);

 VAR_3->els_cmd.els_code = VAR_0;
 VAR_3->class3.rxsz = FUNC_0(VAR_8);
 VAR_3->csp.rxsz = FUNC_0(VAR_12);
 VAR_3->port_name = VAR_6;
 VAR_3->node_name = VAR_7;

 VAR_3->csp.bbcred = FUNC_0(VAR_9);

 return sizeof(struct fc_logi_s);
}
