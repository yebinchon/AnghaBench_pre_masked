
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u_long ;
struct pcnet_dev {int flags; int * base; } ;
struct pcmcia_device {TYPE_1__** resource; struct net_device* priv; } ;
struct net_device {scalar_t__ mem_start; scalar_t__ mem_end; } ;
struct TYPE_7__ {int priv; int tx_start_page; int rx_start_page; int stop_page; int block_output; int block_input; int get_8390_hdr; int * mem; } ;
struct TYPE_6__ {int flags; int end; scalar_t__ start; } ;


 int VAR_0 ;
 struct pcnet_dev* FUNC_0 (struct net_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *) ;
 TYPE_5__ VAR_7 ;
 int * FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (int *) ;
 int VAR_8 ;
 int FUNC_5 (struct pcmcia_device*,TYPE_1__*,int) ;
 int FUNC_6 (struct pcmcia_device*,TYPE_1__*) ;
 int FUNC_7 (struct pcmcia_device*,TYPE_1__*,int ) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(struct pcmcia_device *VAR_12, int VAR_13,
         int VAR_14, int VAR_15)
{
    struct net_device *VAR_16 = VAR_12->priv;
    struct pcnet_dev *VAR_17 = FUNC_0(VAR_16);
    int VAR_18, VAR_19, VAR_20, VAR_21;

    VAR_19 = (VAR_14 - VAR_13) << 8;
    if (VAR_19 > 32 * 1024)
 VAR_19 = 32 * 1024;


    VAR_19 = FUNC_10(VAR_19);


    VAR_12->resource[3]->flags |= VAR_3|VAR_5|VAR_4;
    VAR_12->resource[3]->flags |= VAR_6;
    VAR_12->resource[3]->start = 0; VAR_12->resource[3]->end = VAR_19;
    VAR_21 = FUNC_7(VAR_12, VAR_12->resource[3], VAR_8);
    if (VAR_21)
     goto failed;

    VAR_20 = (VAR_13 << 8) + VAR_15;
    VAR_20 -= VAR_20 % VAR_19;
    VAR_21 = FUNC_5(VAR_12, VAR_12->resource[3], VAR_20);
    if (VAR_21)
     goto failed;


    VAR_17->base = FUNC_3(VAR_12->resource[3]->start,
   FUNC_9(VAR_12->resource[3]));
    if (FUNC_12(!VAR_17->base)) {
     VAR_21 = -VAR_0;
     goto failed;
    }

    for (VAR_18 = 0; VAR_18 < (VAR_1<<8); VAR_18 += 2)
 FUNC_2((VAR_18>>1), VAR_17->base+VAR_20+VAR_18);
    FUNC_11(100);
    for (VAR_18 = 0; VAR_18 < (VAR_1<<8); VAR_18 += 2)
 if (FUNC_1(VAR_17->base+VAR_20+VAR_18) != (VAR_18>>1)) break;
    FUNC_8(VAR_16);
    if (VAR_18 != (VAR_1<<8)) {
 FUNC_4(VAR_17->base);
 FUNC_6(VAR_12, VAR_12->resource[3]);
 VAR_17->base = ((void*)0);
 goto failed;
    }

    VAR_7.mem = VAR_17->base + VAR_20;
    VAR_7.priv = FUNC_9(VAR_12->resource[3]);
    VAR_16->mem_start = (u_long)VAR_7.mem;
    VAR_16->mem_end = VAR_16->mem_start + FUNC_9(VAR_12->resource[3]);

    VAR_7.tx_start_page = VAR_13;
    VAR_7.rx_start_page = VAR_13 + VAR_1;
    VAR_7.stop_page = VAR_13 + (
     (FUNC_9(VAR_12->resource[3]) - VAR_20) >> 8);


    VAR_7.get_8390_hdr = VAR_11;
    VAR_7.block_input = VAR_9;
    VAR_7.block_output = VAR_10;

    VAR_17->flags |= VAR_2;
    return 0;

failed:
    return 1;
}
