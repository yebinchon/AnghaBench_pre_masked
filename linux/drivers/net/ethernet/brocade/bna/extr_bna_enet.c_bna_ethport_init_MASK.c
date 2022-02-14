
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bna_ethport {int flags; int * adminup_cbfn; int * stop_cbfn; scalar_t__ rx_started_count; int link_cbfn; int link_status; struct bna* bna; } ;
struct bna {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bna_ethport*,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_1(struct bna_ethport *VAR_5, struct bna *VAR_6)
{
 VAR_5->flags |= (VAR_0 | VAR_1);
 VAR_5->bna = VAR_6;

 VAR_5->link_status = VAR_2;
 VAR_5->link_cbfn = VAR_4;

 VAR_5->rx_started_count = 0;

 VAR_5->stop_cbfn = ((void*)0);
 VAR_5->adminup_cbfn = ((void*)0);

 FUNC_0(VAR_5, VAR_3);
}
