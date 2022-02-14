
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mvpp2_port {int id; int priv; TYPE_1__* dev; } ;
struct TYPE_2__ {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (struct mvpp2_port*) ;
 int FUNC_2 (struct mvpp2_port*) ;

__attribute__((used)) static void FUNC_3(struct mvpp2_port *VAR_3, bool VAR_4)
{
 if (!VAR_4 && (VAR_3->dev->features & VAR_2))
  FUNC_2(VAR_3);
 else
  FUNC_1(VAR_3);

 FUNC_0(VAR_3->priv, VAR_3->id,
      VAR_1, VAR_4);

 FUNC_0(VAR_3->priv, VAR_3->id,
      VAR_0, VAR_4);
}
