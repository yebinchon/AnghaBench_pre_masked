
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct soc_pcmcia_socket {int nr; } ;
struct sa1111_pcmcia_socket {TYPE_1__* dev; } ;
struct pcmcia_state {int detect; int ready; int bvd1; int bvd2; int wrprot; int vs_3v; int vs_Xv; } ;
struct TYPE_2__ {scalar_t__ mapbase; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (scalar_t__) ;
 struct sa1111_pcmcia_socket* FUNC_1 (struct soc_pcmcia_socket*) ;

void FUNC_2(struct soc_pcmcia_socket *VAR_15, struct pcmcia_state *VAR_16)
{
 struct sa1111_pcmcia_socket *VAR_17 = FUNC_1(VAR_15);
 u32 VAR_18 = FUNC_0(VAR_17->dev->mapbase + VAR_0);

 switch (VAR_15->nr) {
 case 0:
  VAR_16->detect = VAR_18 & VAR_3 ? 0 : 1;
  VAR_16->ready = VAR_18 & VAR_4 ? 1 : 0;
  VAR_16->bvd1 = VAR_18 & VAR_1 ? 1 : 0;
  VAR_16->bvd2 = VAR_18 & VAR_2 ? 1 : 0;
  VAR_16->wrprot = VAR_18 & VAR_7 ? 1 : 0;
  VAR_16->vs_3v = VAR_18 & VAR_5 ? 0 : 1;
  VAR_16->vs_Xv = VAR_18 & VAR_6 ? 0 : 1;
  break;

 case 1:
  VAR_16->detect = VAR_18 & VAR_10 ? 0 : 1;
  VAR_16->ready = VAR_18 & VAR_11 ? 1 : 0;
  VAR_16->bvd1 = VAR_18 & VAR_8 ? 1 : 0;
  VAR_16->bvd2 = VAR_18 & VAR_9 ? 1 : 0;
  VAR_16->wrprot = VAR_18 & VAR_14 ? 1 : 0;
  VAR_16->vs_3v = VAR_18 & VAR_12 ? 0 : 1;
  VAR_16->vs_Xv = VAR_18 & VAR_13 ? 0 : 1;
  break;
 }
}
