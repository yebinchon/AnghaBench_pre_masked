
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bits; } ;
struct pnp_irq {int flags; TYPE_1__ map; } ;
typedef int pnp_info_buffer_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int *,char*,...) ;
 scalar_t__ FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(pnp_info_buffer_t * VAR_6, char *VAR_7,
     struct pnp_irq *VAR_8)
{
 int VAR_9 = 1, VAR_10;

 FUNC_1(VAR_6, "%sirq ", VAR_7);
 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++)
  if (FUNC_2(VAR_10, VAR_8->map.bits)) {
   if (!VAR_9) {
    FUNC_1(VAR_6, ",");
   } else {
    VAR_9 = 0;
   }
   if (VAR_10 == 2 || VAR_10 == 9)
    FUNC_1(VAR_6, "2/9");
   else
    FUNC_1(VAR_6, "%i", VAR_10);
  }
 if (FUNC_0(VAR_8->map.bits, VAR_5))
  FUNC_1(VAR_6, "<none>");
 if (VAR_8->flags & VAR_0)
  FUNC_1(VAR_6, " High-Edge");
 if (VAR_8->flags & VAR_2)
  FUNC_1(VAR_6, " Low-Edge");
 if (VAR_8->flags & VAR_1)
  FUNC_1(VAR_6, " High-Level");
 if (VAR_8->flags & VAR_3)
  FUNC_1(VAR_6, " Low-Level");
 if (VAR_8->flags & VAR_4)
  FUNC_1(VAR_6, " (optional)");
 FUNC_1(VAR_6, "\n");
}
