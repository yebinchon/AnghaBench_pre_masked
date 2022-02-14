
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bfa_cee_attr {int dummy; } ;
struct TYPE_4__ {int get_attr_cbarg; int (* get_attr_cbfn ) (int ,int) ;} ;
struct TYPE_3__ {int kva; } ;
struct bfa_cee {int get_attr_status; int get_attr_pending; TYPE_2__ cbfn; int attr; TYPE_1__ attr_dma; } ;
typedef enum bfa_status { ____Placeholder_bfa_status } bfa_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void
FUNC_3(struct bfa_cee *VAR_1, enum bfa_status VAR_2)
{
 VAR_1->get_attr_status = VAR_2;
 if (VAR_2 == VAR_0) {
  FUNC_1(VAR_1->attr, VAR_1->attr_dma.kva,
      sizeof(struct bfa_cee_attr));
  FUNC_0(VAR_1->attr);
 }
 VAR_1->get_attr_pending = 0;
 if (VAR_1->cbfn.get_attr_cbfn)
  VAR_1->cbfn.get_attr_cbfn(VAR_1->cbfn.get_attr_cbarg, VAR_2);
}
