
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pcmcia_device {TYPE_1__** resource; struct net_device* priv; } ;
struct net_device {unsigned int base_addr; } ;
struct local_info {int * base; } ;
struct TYPE_4__ {int flags; scalar_t__ start; scalar_t__ end; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct net_device*,char*) ;
 struct local_info* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct pcmcia_device*,TYPE_1__*,int ) ;
 int FUNC_5 (struct pcmcia_device*,TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int,int *) ;

__attribute__((used)) static int FUNC_8(struct pcmcia_device *VAR_3)
{
    int VAR_4;
    struct net_device *VAR_5 = VAR_3->priv;
    unsigned int VAR_6;
    struct local_info *VAR_7 = FUNC_3(VAR_5);


    VAR_3->resource[3]->flags = VAR_0|VAR_2|VAR_1;
    VAR_3->resource[3]->start = VAR_3->resource[3]->end = 0;
    VAR_4 = FUNC_5(VAR_3, VAR_3->resource[3], 0);
    if (VAR_4 != 0)
 return -1;

    VAR_7->base = FUNC_0(VAR_3->resource[3]->start,
         FUNC_6(VAR_3->resource[3]));
    if (VAR_7->base == ((void*)0)) {
 FUNC_2(VAR_5, "ioremap failed\n");
 return -1;
    }

    VAR_4 = FUNC_4(VAR_3, VAR_3->resource[3], 0);
    if (VAR_4 != 0) {
 FUNC_1(VAR_7->base);
 VAR_7->base = ((void*)0);
 return -1;
    }

    VAR_6 = VAR_5->base_addr;
    FUNC_7(0x47, VAR_7->base+0x800);
    FUNC_7(0x0, VAR_7->base+0x802);

    FUNC_7(VAR_6 & 0xff, VAR_7->base+0x80a);
    FUNC_7((VAR_6 >> 8) & 0xff, VAR_7->base+0x80c);

    FUNC_7(0x45, VAR_7->base+0x820);
    FUNC_7(0x8, VAR_7->base+0x822);

    return 0;

}
