
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct fchs_s {int dummy; } ;
struct TYPE_3__ {int initiator; } ;
struct TYPE_4__ {int rspcode; TYPE_1__ servparams; } ;
struct fc_prli_s {TYPE_2__ parampage; int command; } ;
typedef enum bfa_lport_role { ____Placeholder_bfa_lport_role } bfa_lport_role ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fchs_s*,int ,int ,int ) ;
 int FUNC_1 (struct fc_prli_s*,int *,int) ;
 int VAR_2 ;

u16
FUNC_2(struct fchs_s *VAR_3, void *VAR_4, u32 VAR_5, u32 VAR_6,
    __be16 VAR_7, enum bfa_lport_role VAR_8)
{
 struct fc_prli_s *VAR_9 = (struct fc_prli_s *) (VAR_4);

 FUNC_0(VAR_3, VAR_5, VAR_6, VAR_7);
 FUNC_1(VAR_9, &VAR_2, sizeof(struct fc_prli_s));

 VAR_9->command = VAR_0;

 VAR_9->parampage.servparams.initiator = 1;

 VAR_9->parampage.rspcode = VAR_1;

 return sizeof(struct fc_prli_s);
}
