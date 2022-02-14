
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct qed_hwfn {TYPE_2__* cdev; } ;
struct qed_eth_cb_ops {int (* ports_update ) (void*,int ,int ) ;int (* force_mac ) (void*,scalar_t__*,int) ;} ;
struct TYPE_3__ {struct qed_eth_cb_ops* eth; } ;
struct TYPE_4__ {void* ops_cookie; TYPE_1__ protocol_ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct qed_hwfn*,int *) ;
 scalar_t__ FUNC_1 (struct qed_hwfn*,scalar_t__*,scalar_t__*) ;
 int FUNC_2 (struct qed_hwfn*,int *,int *) ;
 int FUNC_3 (void*,scalar_t__*,int) ;
 int FUNC_4 (void*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct qed_hwfn *VAR_1)
{
 struct qed_eth_cb_ops *VAR_2 = VAR_1->cdev->protocol_ops.eth;
 u8 VAR_3[VAR_0], VAR_4, VAR_5;
 void *VAR_6 = VAR_1->cdev->ops_cookie;
 u16 VAR_7, VAR_8;

 FUNC_2(VAR_1, &VAR_7, &VAR_8);
 VAR_4 = FUNC_1(VAR_1, VAR_3,
            &VAR_5);
 if (VAR_4 && VAR_6)
  VAR_2->force_mac(VAR_6, VAR_3, !!VAR_5);

 VAR_2->ports_update(VAR_6, VAR_7, VAR_8);


 FUNC_0(VAR_1, ((void*)0));
}
