
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bfi_fcport_trunk_scn_s {scalar_t__ trunk_state; scalar_t__ trunk_speed; struct bfi_fcport_trunk_link_s* tlink; } ;
struct bfi_fcport_trunk_link_s {scalar_t__ state; scalar_t__ trunk_wwn; scalar_t__ fctl; scalar_t__ speed; int deskew; } ;
struct bfa_trunk_link_attr_s {scalar_t__ link_state; scalar_t__ trunk_wwn; scalar_t__ fctl; scalar_t__ speed; scalar_t__ deskew; } ;
struct TYPE_5__ {scalar_t__ state; scalar_t__ speed; struct bfa_trunk_link_attr_s* link_attr; } ;
struct bfa_fcport_trunk_s {TYPE_2__ attr; } ;
struct TYPE_4__ {scalar_t__ trunked; } ;
struct bfa_fcport_s {scalar_t__ speed; TYPE_3__* bfa; int topology; TYPE_1__ cfg; struct bfa_fcport_trunk_s trunk; } ;
typedef enum bfa_trunk_state { ____Placeholder_bfa_trunk_state } bfa_trunk_state ;
struct TYPE_6__ {int plog; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct bfa_fcport_s*,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ,char*) ;
 int FUNC_4 (TYPE_3__*,scalar_t__) ;

__attribute__((used)) static void
FUNC_5(struct bfa_fcport_s *VAR_11, struct bfi_fcport_trunk_scn_s *VAR_12)
{
 struct bfa_fcport_trunk_s *VAR_13 = &VAR_11->trunk;
 struct bfi_fcport_trunk_link_s *VAR_14;
 struct bfa_trunk_link_attr_s *VAR_15;
 enum bfa_trunk_state VAR_16;
 int VAR_17;
 int VAR_18 = 0;

 FUNC_4(VAR_11->bfa, VAR_11->cfg.trunked);
 FUNC_0(VAR_12->trunk_state != VAR_10 &&
     VAR_12->trunk_state != VAR_9);

 FUNC_4(VAR_11->bfa, VAR_13->attr.state);
 FUNC_4(VAR_11->bfa, VAR_12->trunk_state);
 FUNC_4(VAR_11->bfa, VAR_12->trunk_speed);




 VAR_16 = VAR_13->attr.state;
 if (VAR_11->cfg.trunked && (VAR_13->attr.state != VAR_6))
  VAR_13->attr.state = VAR_12->trunk_state;
 VAR_13->attr.speed = VAR_12->trunk_speed;
 for (VAR_17 = 0; VAR_17 < VAR_8; VAR_17++) {
  VAR_15 = &VAR_13->attr.link_attr[VAR_17];
  VAR_14 = &VAR_12->tlink[VAR_17];

  VAR_15->link_state = VAR_14->state;
  VAR_15->trunk_wwn = VAR_14->trunk_wwn;
  VAR_15->fctl = VAR_14->fctl;
  VAR_15->speed = VAR_14->speed;
  VAR_15->deskew = FUNC_1(VAR_14->deskew);

  if (VAR_14->state == VAR_7) {
   VAR_11->speed = VAR_14->speed;
   VAR_11->topology = VAR_4;
   VAR_18 |= 1 << VAR_17;
  }

  FUNC_4(VAR_11->bfa, VAR_15->link_state);
  FUNC_4(VAR_11->bfa, VAR_15->trunk_wwn);
  FUNC_4(VAR_11->bfa, VAR_15->fctl);
  FUNC_4(VAR_11->bfa, VAR_15->speed);
  FUNC_4(VAR_11->bfa, VAR_15->deskew);
 }

 switch (VAR_18) {
 case 3:
  FUNC_3(VAR_11->bfa->plog, VAR_1,
   VAR_0, 0, "Trunk up(0,1)");
  break;
 case 2:
  FUNC_3(VAR_11->bfa->plog, VAR_1,
   VAR_0, 0, "Trunk up(-,1)");
  break;
 case 1:
  FUNC_3(VAR_11->bfa->plog, VAR_1,
   VAR_0, 0, "Trunk up(0,-)");
  break;
 default:
  FUNC_3(VAR_11->bfa->plog, VAR_1,
   VAR_0, 0, "Trunk down");
 }




 if ((VAR_16 != VAR_13->attr.state) ||
  (VAR_12->trunk_state == VAR_9)) {
  FUNC_2(VAR_11, (VAR_12->trunk_state == VAR_10) ?
   VAR_3 : VAR_2, VAR_5);
 }
}
