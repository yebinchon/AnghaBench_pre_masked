
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_device {int config_flags; int io_lines; int config_index; TYPE_1__** resource; struct net_device* priv; } ;
struct net_device {int base_addr; } ;
struct TYPE_2__ {int end; unsigned int start; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pcmcia_device*) ;

__attribute__((used)) static int FUNC_1(struct pcmcia_device *VAR_3)
{
    struct net_device *VAR_4 = VAR_3->priv;
    static const unsigned int VAR_5[4] = { 0x3f8, 0x2f8, 0x3e8, 0x2e8 };
    int VAR_6, VAR_7;

    VAR_3->config_flags |= VAR_1 | VAR_0;
    VAR_3->resource[0]->end = 64;
    VAR_3->resource[1]->flags |= VAR_2;
    VAR_3->resource[1]->end = 8;


    VAR_3->io_lines = 16;
    VAR_3->config_index = 0x23;

    for (VAR_6 = VAR_7 = 0; VAR_7 < 4; VAR_7++) {
 VAR_3->resource[1]->start = VAR_5[VAR_7];
 VAR_6 = FUNC_0(VAR_3);
 if (VAR_6 == 0)
  break;
    }
    if (VAR_6 != 0) {

 VAR_3->config_index = 0x03;
 VAR_3->resource[1]->end = 0;
 VAR_6 = FUNC_0(VAR_3);
    }
    VAR_4->base_addr = VAR_3->resource[0]->start + 0x10;
    return VAR_6;
}
