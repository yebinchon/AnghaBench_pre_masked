
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int dev; } ;
struct bcm63xx_pcmcia_socket {int card_detected; int card_type; TYPE_2__* pd; TYPE_1__ socket; } ;
struct TYPE_4__ {int ready_gpio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct bcm63xx_pcmcia_socket*,int ) ;
 int FUNC_3 (struct bcm63xx_pcmcia_socket*,int,int ) ;
 int FUNC_4 (int) ;
 int* VAR_25 ;

__attribute__((used)) static unsigned int FUNC_5(struct bcm63xx_pcmcia_socket *VAR_26)
{
 unsigned int VAR_27;
 u32 VAR_28;

 VAR_27 = 0;


 VAR_28 = FUNC_2(VAR_26, VAR_14);

 if (!(VAR_28 & VAR_10) && !(VAR_28 & VAR_11))
  VAR_27 |= VAR_21;


 if ((VAR_27 & VAR_21) && !VAR_26->card_detected) {
  unsigned int VAR_29 = 0;


  VAR_28 |= VAR_15;
  VAR_28 |= VAR_17;
  FUNC_3(VAR_26, VAR_28, VAR_14);


  FUNC_4(10);
  VAR_28 = FUNC_2(VAR_26, VAR_14);
  VAR_29 |= (VAR_28 & VAR_16) ? VAR_8 : 0;
  VAR_29 |= (VAR_28 & VAR_18) ? VAR_9 : 0;


  VAR_28 &= ~VAR_15;
  VAR_28 |= VAR_17;
  FUNC_3(VAR_26, VAR_28, VAR_14);


  FUNC_4(10);
  VAR_28 = FUNC_2(VAR_26, VAR_14);
  VAR_29 |= (VAR_28 & VAR_10) ? VAR_5 : 0;
  VAR_29 |= (VAR_28 & VAR_11) ? VAR_7 : 0;


  VAR_28 |= VAR_15;
  VAR_28 &= ~VAR_17;
  FUNC_3(VAR_26, VAR_28, VAR_14);


  FUNC_4(10);
  VAR_28 = FUNC_2(VAR_26, VAR_14);
  VAR_29 |= (VAR_28 & VAR_10) ? VAR_4 : 0;
  VAR_29 |= (VAR_28 & VAR_11) ? VAR_6 : 0;


  VAR_26->card_type = VAR_25[VAR_29];
  if (!VAR_26->card_type)
   FUNC_0(&VAR_26->socket.dev, "unsupported card type\n");


  VAR_28 &= ~(VAR_15 | VAR_17);


  VAR_28 &= ~(VAR_13 | VAR_12);
  if (VAR_26->card_type & VAR_2)
   VAR_28 |= VAR_13;
  else
   VAR_28 |= VAR_12;

  FUNC_3(VAR_26, VAR_28, VAR_14);
 }
 VAR_26->card_detected = (VAR_27 & VAR_21) ? 1 : 0;


 if (VAR_26->card_type & VAR_1)
  VAR_27 |= VAR_20;
 if (VAR_26->card_type & VAR_0)
  VAR_27 |= VAR_19;
 if (VAR_26->card_type & VAR_3)
  VAR_27 |= VAR_24;
 VAR_27 |= VAR_22;

 if (FUNC_1(VAR_26->pd->ready_gpio))
  VAR_27 |= VAR_23;

 return VAR_27;
}
