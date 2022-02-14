
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int link_e2e; int state; } ;
struct bfa_diag_s {TYPE_1__ beacon; int dev; int (* cbfn_beacon ) (int ,int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct bfa_diag_s*,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct bfa_diag_s *VAR_1)
{
 FUNC_0(VAR_1, VAR_1->beacon.state);
 VAR_1->beacon.state = VAR_0;
 if (VAR_1->cbfn_beacon)
  VAR_1->cbfn_beacon(VAR_1->dev, VAR_0, VAR_1->beacon.link_e2e);
}
