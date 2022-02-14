
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_short ;
struct pcmcia_device {TYPE_1__** resource; struct net_device* priv; } ;
struct net_device {unsigned int base_addr; } ;
struct TYPE_2__ {scalar_t__ flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct net_device*,char*) ;
 int FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (struct pcmcia_device*) ;
 int FUNC_8 (struct pcmcia_device*) ;
 int FUNC_9 (struct pcmcia_device*) ;

__attribute__((used)) static int FUNC_10(struct pcmcia_device *VAR_8)
{
    struct net_device *VAR_9 = VAR_8->priv;
    unsigned int VAR_10 = VAR_9->base_addr;
    int VAR_11;
    u_short VAR_12;

    FUNC_0(1);
    if (FUNC_2(VAR_10 + VAR_0) >> 8 != 0x33) {

 FUNC_6(0, VAR_10 + VAR_4);
 FUNC_3(55);
    }


    VAR_11 = (VAR_8->resource[0]->flags == VAR_6);
    VAR_12 = FUNC_1(VAR_10 + VAR_3);
    if (VAR_11)
 VAR_12 |= VAR_2;
    else
 VAR_12 &= ~VAR_2;
    FUNC_5(VAR_12, VAR_10 + VAR_3);


    VAR_12 = FUNC_2(VAR_10 + VAR_1);
    if ((FUNC_2(VAR_10 + VAR_0) >> 8 == 0x33) &&
 ((VAR_12 >> 8) != (VAR_12 & 0xff))) {
 FUNC_0(3);
 VAR_12 = FUNC_2(VAR_10 + VAR_7);
 return VAR_12 & 0xff;
    }

    if (VAR_11) {
     FUNC_4(VAR_9, "using 8-bit IO window\n");

     FUNC_9(VAR_8);
     FUNC_7(VAR_8);
     FUNC_8(VAR_8);
     return FUNC_10(VAR_8);
    }
    return -VAR_5;
}
