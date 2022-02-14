
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pnp_port {int flags; scalar_t__ size; scalar_t__ align; scalar_t__ max; scalar_t__ min; } ;
struct pnp_dma {int map; int flags; } ;
struct TYPE_3__ {int bits; } ;
struct pnp_irq {int flags; TYPE_1__ map; } ;
struct pnp_mem {int flags; scalar_t__ size; scalar_t__ align; scalar_t__ max; scalar_t__ min; } ;
struct TYPE_4__ {struct pnp_dma dma; struct pnp_irq irq; struct pnp_mem mem; struct pnp_port port; } ;
struct pnp_option {int type; TYPE_2__ u; } ;
struct pnp_dev {int dev; } ;
typedef int buf ;





 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,char*,char*) ;
 scalar_t__ FUNC_2 (struct pnp_option*) ;
 int FUNC_3 (struct pnp_option*) ;
 int FUNC_4 (struct pnp_option*) ;
 scalar_t__ FUNC_5 (char*,int,char*,...) ;
 int FUNC_6 (int,int ) ;

void FUNC_7(struct pnp_dev *VAR_2, struct pnp_option *VAR_3)
{
 char VAR_4[128];
 int VAR_5 = 0, VAR_6;
 struct pnp_port *VAR_7;
 struct pnp_mem *VAR_8;
 struct pnp_irq *VAR_9;
 struct pnp_dma *VAR_10;

 if (FUNC_2(VAR_3))
  VAR_5 += FUNC_5(VAR_4 + VAR_5, sizeof(VAR_4) - VAR_5,
     "  dependent set %d (%s) ",
     FUNC_4(VAR_3),
     FUNC_3(VAR_3));
 else
  VAR_5 += FUNC_5(VAR_4 + VAR_5, sizeof(VAR_4) - VAR_5,
     "  independent ");

 switch (VAR_3->type) {
 case 130:
  VAR_7 = &VAR_3->u.port;
  VAR_5 += FUNC_5(VAR_4 + VAR_5, sizeof(VAR_4) - VAR_5, "io  min %#llx "
     "max %#llx align %lld size %lld flags %#x",
     (unsigned long long) VAR_7->min,
     (unsigned long long) VAR_7->max,
     (unsigned long long) VAR_7->align,
     (unsigned long long) VAR_7->size, VAR_7->flags);
  break;
 case 128:
  VAR_8 = &VAR_3->u.mem;
  VAR_5 += FUNC_5(VAR_4 + VAR_5, sizeof(VAR_4) - VAR_5, "mem min %#llx "
     "max %#llx align %lld size %lld flags %#x",
     (unsigned long long) VAR_8->min,
     (unsigned long long) VAR_8->max,
     (unsigned long long) VAR_8->align,
     (unsigned long long) VAR_8->size, VAR_8->flags);
  break;
 case 129:
  VAR_9 = &VAR_3->u.irq;
  VAR_5 += FUNC_5(VAR_4 + VAR_5, sizeof(VAR_4) - VAR_5, "irq");
  if (FUNC_0(VAR_9->map.bits, VAR_1))
   VAR_5 += FUNC_5(VAR_4 + VAR_5, sizeof(VAR_4) - VAR_5,
      " <none>");
  else {
   for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
    if (FUNC_6(VAR_6, VAR_9->map.bits))
     VAR_5 += FUNC_5(VAR_4 + VAR_5,
        sizeof(VAR_4) - VAR_5,
        " %d", VAR_6);
  }
  VAR_5 += FUNC_5(VAR_4 + VAR_5, sizeof(VAR_4) - VAR_5, " flags %#x",
     VAR_9->flags);
  if (VAR_9->flags & VAR_0)
   VAR_5 += FUNC_5(VAR_4 + VAR_5, sizeof(VAR_4) - VAR_5,
      " (optional)");
  break;
 case 131:
  VAR_10 = &VAR_3->u.dma;
  VAR_5 += FUNC_5(VAR_4 + VAR_5, sizeof(VAR_4) - VAR_5, "dma");
  if (!VAR_10->map)
   VAR_5 += FUNC_5(VAR_4 + VAR_5, sizeof(VAR_4) - VAR_5,
      " <none>");
  else {
   for (VAR_6 = 0; VAR_6 < 8; VAR_6++)
    if (VAR_10->map & (1 << VAR_6))
     VAR_5 += FUNC_5(VAR_4 + VAR_5,
        sizeof(VAR_4) - VAR_5,
        " %d", VAR_6);
  }
  VAR_5 += FUNC_5(VAR_4 + VAR_5, sizeof(VAR_4) - VAR_5, " (bitmask %#x) "
     "flags %#x", VAR_10->map, VAR_10->flags);
  break;
 }
 FUNC_1(&VAR_2->dev, "%s\n", VAR_4);
}
