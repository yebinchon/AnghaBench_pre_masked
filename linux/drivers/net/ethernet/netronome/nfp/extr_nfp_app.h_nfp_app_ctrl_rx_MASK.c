
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; int data; } ;
struct nfp_app {TYPE_1__* type; int pf; } ;
struct TYPE_2__ {int (* ctrl_msg_rx ) (struct nfp_app*,struct sk_buff*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct nfp_app*,struct sk_buff*) ;
 int FUNC_2 (int ,int,int ,int ,int ) ;

__attribute__((used)) static inline void FUNC_3(struct nfp_app *VAR_0, struct sk_buff *VAR_1)
{
 FUNC_2(FUNC_0(VAR_0->pf), 1, 0,
       VAR_1->data, VAR_1->len);

 VAR_0->type->ctrl_msg_rx(VAR_0, VAR_1);
}
