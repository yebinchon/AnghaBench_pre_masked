
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {struct at76_priv* context; } ;
struct TYPE_2__ {unsigned long data; } ;
struct at76_priv {TYPE_1__ rx_tasklet; } ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(struct urb *VAR_0)
{
 struct at76_priv *VAR_1 = VAR_0->context;

 VAR_1->rx_tasklet.data = (unsigned long)VAR_0;
 FUNC_0(&VAR_1->rx_tasklet);
}
