
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct soc_pcmcia_socket {size_t nr; } ;
struct TYPE_2__ {int keep_vs; int dev; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct soc_pcmcia_socket*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct soc_pcmcia_socket *VAR_4)
{
 FUNC_0(VAR_4);


 FUNC_1(VAR_1[VAR_4->nr].dev, VAR_2, 0x00C0);
 FUNC_1(VAR_1[VAR_4->nr].dev, VAR_3, 0x0101);
 VAR_1[VAR_4->nr].keep_vs = VAR_0;
}
