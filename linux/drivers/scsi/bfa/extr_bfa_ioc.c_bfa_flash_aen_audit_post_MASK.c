
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct bfad_s {int dummy; } ;
struct bfa_ioc_s {int ioc_aen_seq; TYPE_1__* attr; TYPE_2__* bfa; } ;
struct TYPE_8__ {int partition_inst; int partition_type; int pwwn; } ;
struct TYPE_7__ {TYPE_4__ audit; } ;
struct bfa_aen_entry_s {TYPE_3__ aen_data; } ;
typedef enum bfa_audit_aen_event { ____Placeholder_bfa_audit_aen_event } bfa_audit_aen_event ;
struct TYPE_6__ {scalar_t__ bfad; } ;
struct TYPE_5__ {int pwwn; } ;


 int VAR_0 ;
 int FUNC_0 (struct bfad_s*,struct bfa_aen_entry_s*) ;
 int FUNC_1 (struct bfa_aen_entry_s*,struct bfad_s*,int ,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct bfa_ioc_s *VAR_1, enum bfa_audit_aen_event VAR_2,
   int VAR_3, int VAR_4)
{
 struct bfad_s *VAR_5 = (struct bfad_s *)VAR_1->bfa->bfad;
 struct bfa_aen_entry_s *VAR_6;

 FUNC_0(VAR_5, VAR_6);
 if (!VAR_6)
  return;

 VAR_6->aen_data.audit.pwwn = VAR_1->attr->pwwn;
 VAR_6->aen_data.audit.partition_inst = VAR_3;
 VAR_6->aen_data.audit.partition_type = VAR_4;


 FUNC_1(VAR_6, VAR_5, ++VAR_1->ioc_aen_seq,
      VAR_0, VAR_2);
}
