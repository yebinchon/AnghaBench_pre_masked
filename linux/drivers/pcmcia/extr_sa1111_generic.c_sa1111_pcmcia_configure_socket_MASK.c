
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct soc_pcmcia_socket {int nr; } ;
struct sa1111_pcmcia_socket {TYPE_1__* dev; } ;
struct TYPE_5__ {int Vcc; int flags; } ;
typedef TYPE_2__ socket_state_t ;
struct TYPE_4__ {scalar_t__ mapbase; } ;


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
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (scalar_t__) ;
 struct sa1111_pcmcia_socket* FUNC_3 (struct soc_pcmcia_socket*) ;
 int FUNC_4 (int,scalar_t__) ;

int FUNC_5(struct soc_pcmcia_socket *VAR_11, const socket_state_t *VAR_12)
{
 struct sa1111_pcmcia_socket *VAR_13 = FUNC_3(VAR_11);
 u32 VAR_14, VAR_15, VAR_16;
 unsigned long VAR_17;

 switch (VAR_11->nr) {
 case 0:
  VAR_14 = VAR_4|VAR_1|VAR_3|VAR_2;
  break;

 case 1:
  VAR_14 = VAR_8|VAR_5|VAR_7|VAR_6;
  break;

 default:
  return -1;
 }

 VAR_15 = 0;

 if (VAR_12->Vcc != 0)
  VAR_15 |= VAR_3|VAR_7;
 if (VAR_12->Vcc == 50)
  VAR_15 |= VAR_2|VAR_6;
 if (VAR_12->flags & VAR_10)
  VAR_15 |= VAR_4|VAR_8;
 if (VAR_12->flags & VAR_9)
  VAR_15 |= VAR_1|VAR_5;

 FUNC_1(VAR_17);
 VAR_16 = FUNC_2(VAR_13->dev->mapbase + VAR_0);
 VAR_16 &= ~VAR_14;
 VAR_16 |= VAR_15 & VAR_14;
 FUNC_4(VAR_16, VAR_13->dev->mapbase + VAR_0);
 FUNC_0(VAR_17);

 return 0;
}
