
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int bits; } ;
struct pnp_irq {unsigned char flags; TYPE_2__ map; } ;
struct TYPE_4__ {struct pnp_irq irq; } ;
struct pnp_option {TYPE_1__ u; } ;
struct pnp_dev {int dummy; } ;
typedef TYPE_2__ pnp_irq_mask_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pnp_dev*,struct pnp_option*) ;
 int FUNC_1 (int,int ) ;
 struct pnp_option* FUNC_2 (struct pnp_dev*,int ,unsigned int) ;
 scalar_t__ FUNC_3 (int,int ) ;

int FUNC_4(struct pnp_dev *VAR_2, unsigned int VAR_3,
         pnp_irq_mask_t *VAR_4, unsigned char VAR_5)
{
 struct pnp_option *VAR_6;
 struct pnp_irq *VAR_7;

 VAR_6 = FUNC_2(VAR_2, VAR_1, VAR_3);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = &VAR_6->u.irq;
 VAR_7->map = *VAR_4;
 VAR_7->flags = VAR_5;
 FUNC_0(VAR_2, VAR_6);
 return 0;
}
