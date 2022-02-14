
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u64 ;
struct bfi_sfp_scn_s {int event; scalar_t__ pomlvl; scalar_t__ sfpid; } ;
struct bfad_s {int dummy; } ;
struct bfa_sfp_s {TYPE_5__* ioc; } ;
struct TYPE_9__ {scalar_t__ level; int mac; int pwwn; int ioc_type; } ;
struct TYPE_10__ {TYPE_3__ port; } ;
struct bfa_aen_entry_s {TYPE_4__ aen_data; } ;
typedef enum bfa_port_aen_event { ____Placeholder_bfa_port_aen_event } bfa_port_aen_event ;
struct TYPE_11__ {int ioc_aen_seq; TYPE_2__* attr; TYPE_1__* bfa; } ;
struct TYPE_8__ {int pwwn; } ;
struct TYPE_7__ {scalar_t__ bfad; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;





 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (struct bfa_sfp_s*,int) ;
 int FUNC_4 (struct bfad_s*,struct bfa_aen_entry_s*) ;
 int FUNC_5 (struct bfa_aen_entry_s*,struct bfad_s*,int ,int ,int) ;

__attribute__((used)) static void
FUNC_6(struct bfa_sfp_s *VAR_6, struct bfi_sfp_scn_s *VAR_7)
{
 struct bfad_s *VAR_8 = (struct bfad_s *)VAR_6->ioc->bfa->bfad;
 struct bfa_aen_entry_s *VAR_9;
 enum bfa_port_aen_event VAR_10 = 0;

 FUNC_3(VAR_6, (((u64)VAR_7->pomlvl) << 16) | (((u64)VAR_7->sfpid) << 8) |
        ((u64)VAR_7->event));

 FUNC_4(VAR_8, VAR_9);
 if (!VAR_9)
  return;

 VAR_9->aen_data.port.ioc_type = FUNC_2(VAR_6->ioc);
 VAR_9->aen_data.port.pwwn = VAR_6->ioc->attr->pwwn;
 VAR_9->aen_data.port.mac = FUNC_1(VAR_6->ioc);

 switch (VAR_7->event) {
 case 131:
  VAR_10 = VAR_2;
  break;
 case 129:
  VAR_10 = VAR_4;
  break;
 case 132:
  VAR_10 = VAR_1;
  break;
 case 128:
  VAR_10 = VAR_5;
  break;
 case 130:
  VAR_10 = VAR_3;
  VAR_9->aen_data.port.level = VAR_7->pomlvl;
  break;
 default:
  FUNC_3(VAR_6, VAR_7->event);
  FUNC_0(1);
 }


 FUNC_5(VAR_9, VAR_8, ++VAR_6->ioc->ioc_aen_seq,
      VAR_0, VAR_10);
}
