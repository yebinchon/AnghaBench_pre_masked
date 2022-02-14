
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct mvpp2_port {TYPE_2__* priv; TYPE_1__** rxqs; } ;
struct TYPE_5__ {scalar_t__ hw_version; } ;
struct TYPE_4__ {int id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct mvpp2_port *VAR_4,
         int VAR_5, int VAR_6)
{
 u32 VAR_7, VAR_8;
 int VAR_9;


 VAR_9 = VAR_4->rxqs[VAR_5]->id;

 if (VAR_4->priv->hw_version == VAR_0)
  VAR_8 = VAR_1;
 else
  VAR_8 = VAR_2;

 VAR_7 = FUNC_1(VAR_4->priv, FUNC_0(VAR_9));
 VAR_7 &= ~VAR_8;
 VAR_7 |= (VAR_6 << VAR_3) & VAR_8;
 FUNC_2(VAR_4->priv, FUNC_0(VAR_9), VAR_7);
}
