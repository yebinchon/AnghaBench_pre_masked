
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pnp_dma {unsigned char map; unsigned char flags; } ;
struct TYPE_2__ {struct pnp_dma dma; } ;
struct pnp_option {TYPE_1__ u; } ;
struct pnp_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pnp_dev*,struct pnp_option*) ;
 struct pnp_option* FUNC_1 (struct pnp_dev*,int ,unsigned int) ;

int FUNC_2(struct pnp_dev *VAR_2, unsigned int VAR_3,
         unsigned char VAR_4, unsigned char VAR_5)
{
 struct pnp_option *VAR_6;
 struct pnp_dma *VAR_7;

 VAR_6 = FUNC_1(VAR_2, VAR_1, VAR_3);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = &VAR_6->u.dma;
 VAR_7->map = VAR_4;
 VAR_7->flags = VAR_5;

 FUNC_0(VAR_2, VAR_6);
 return 0;
}
