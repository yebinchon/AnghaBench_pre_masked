
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct bfa_s {int dummy; } ;
struct TYPE_7__ {scalar_t__ state; TYPE_2__* link_attr; void* speed; } ;
struct TYPE_8__ {TYPE_3__ attr; } ;
struct TYPE_5__ {scalar_t__ trunked; } ;
struct bfa_fcport_s {TYPE_4__ trunk; TYPE_1__ cfg; } ;
struct TYPE_6__ {scalar_t__ deskew; void* speed; int link_state; int fctl; scalar_t__ trunk_wwn; } ;


 struct bfa_fcport_s* FUNC_0 (struct bfa_s*) ;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct bfa_fcport_s*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct bfa_s *VAR_8)
{
 struct bfa_fcport_s *VAR_9 = FUNC_0(VAR_8);
 int VAR_10 = 0;




 if (VAR_9->cfg.trunked) {
  if (VAR_9->trunk.attr.state == VAR_7)
   FUNC_1(VAR_9, VAR_0, VAR_2);

  VAR_9->trunk.attr.state = VAR_6;
  VAR_9->trunk.attr.speed = VAR_1;
  for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
   VAR_9->trunk.attr.link_attr[VAR_10].trunk_wwn = 0;
   VAR_9->trunk.attr.link_attr[VAR_10].fctl =
      VAR_3;
   VAR_9->trunk.attr.link_attr[VAR_10].link_state =
      VAR_4;
   VAR_9->trunk.attr.link_attr[VAR_10].speed =
      VAR_1;
   VAR_9->trunk.attr.link_attr[VAR_10].deskew = 0;
  }
 }
}
