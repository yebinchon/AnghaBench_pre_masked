
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct mvpp2_port {int id; TYPE_1__* priv; int tx_time_coal; } ;
struct TYPE_2__ {unsigned long tclk; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__,unsigned long) ;
 scalar_t__ FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (TYPE_1__*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct mvpp2_port *VAR_1)
{
 unsigned long VAR_2 = VAR_1->priv->tclk;
 u32 VAR_3 = FUNC_2(VAR_1->tx_time_coal, VAR_2);

 if (VAR_3 > VAR_0) {
  VAR_1->tx_time_coal =
   FUNC_1(VAR_0, VAR_2);


  VAR_3 = FUNC_2(VAR_1->tx_time_coal, VAR_2);
 }

 FUNC_3(VAR_1->priv, FUNC_0(VAR_1->id), VAR_3);
}
