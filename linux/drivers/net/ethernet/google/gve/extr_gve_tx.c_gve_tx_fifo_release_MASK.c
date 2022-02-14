
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gve_tx_fifo {scalar_t__ size; int base; int available; } ;
struct gve_priv {int dummy; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct gve_priv *VAR_0, struct gve_tx_fifo *VAR_1)
{
 FUNC_0(FUNC_1(&VAR_1->available) != VAR_1->size,
      "Releasing non-empty fifo");

 FUNC_2(VAR_1->base);
}
