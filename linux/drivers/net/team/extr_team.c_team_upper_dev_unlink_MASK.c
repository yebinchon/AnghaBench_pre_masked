
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct team_port {TYPE_1__* dev; } ;
struct team {int dev; } ;
struct TYPE_2__ {int priv_flags; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_1(struct team *VAR_1, struct team_port *VAR_2)
{
 FUNC_0(VAR_2->dev, VAR_1->dev);
 VAR_2->dev->priv_flags &= ~VAR_0;
}
