
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_device {TYPE_1__** resource; int priv; } ;
struct TYPE_2__ {int start; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct pcmcia_device*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct pcmcia_device *VAR_1)
{
 FUNC_0(VAR_1->priv);
 FUNC_2(VAR_1->resource[0]->start, VAR_0);
 FUNC_1(VAR_1);
}
