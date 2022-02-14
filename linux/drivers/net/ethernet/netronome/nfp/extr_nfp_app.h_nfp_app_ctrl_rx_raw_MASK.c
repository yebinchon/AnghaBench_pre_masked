
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_app {TYPE_1__* type; int pf; } ;
struct TYPE_2__ {int (* ctrl_msg_rx_raw ) (struct nfp_app*,void const*,unsigned int) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct nfp_app*,void const*,unsigned int) ;
 int FUNC_2 (int ,int,int ,void const*,unsigned int) ;

__attribute__((used)) static inline void
FUNC_3(struct nfp_app *VAR_0, const void *VAR_1, unsigned int VAR_2)
{
 if (!VAR_0 || !VAR_0->type->ctrl_msg_rx_raw)
  return;

 FUNC_2(FUNC_0(VAR_0->pf), 1, 0, VAR_1, VAR_2);
 VAR_0->type->ctrl_msg_rx_raw(VAR_0, VAR_1, VAR_2);
}
