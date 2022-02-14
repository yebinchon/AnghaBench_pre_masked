
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bna_ethport {int link_status; TYPE_1__* bna; int (* link_cbfn ) (int ,int ) ;} ;
struct bfi_msgq_mhdr {int dummy; } ;
struct TYPE_2__ {int bnad; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct bna_ethport *VAR_1,
   struct bfi_msgq_mhdr *VAR_2)
{
 VAR_1->link_status = VAR_0;


 VAR_1->link_cbfn(VAR_1->bna->bnad, VAR_1->link_status);
}
