
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bna_ethport {scalar_t__ link_status; TYPE_1__* bna; int (* link_cbfn ) (int ,scalar_t__) ;int flags; } ;
struct TYPE_2__ {int bnad; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bna_ethport*,int ) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct bna_ethport *VAR_3)
{

 VAR_3->flags |= VAR_0;

 if (VAR_3->link_status != VAR_1) {
  VAR_3->link_status = VAR_1;
  VAR_3->link_cbfn(VAR_3->bna->bnad, VAR_1);
 }
 FUNC_0(VAR_3, VAR_2);
}
