
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dma; int irq; int mem; int port; } ;
struct pnp_option {int type; TYPE_1__ u; } ;
typedef int pnp_info_buffer_t ;






 int FUNC_0 (int *,char*,int *) ;
 int FUNC_1 (int *,char*,int *) ;
 int FUNC_2 (int *,char*,int *) ;
 int FUNC_3 (int *,char*,int *) ;

__attribute__((used)) static void FUNC_4(pnp_info_buffer_t * VAR_0, char *VAR_1,
        struct pnp_option *VAR_2)
{
 switch (VAR_2->type) {
 case 130:
  FUNC_3(VAR_0, VAR_1, &VAR_2->u.port);
  break;
 case 128:
  FUNC_2(VAR_0, VAR_1, &VAR_2->u.mem);
  break;
 case 129:
  FUNC_1(VAR_0, VAR_1, &VAR_2->u.irq);
  break;
 case 131:
  FUNC_0(VAR_0, VAR_1, &VAR_2->u.dma);
  break;
 }
}
