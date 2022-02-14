
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pcmcia_socket {struct bcm63xx_pcmcia_socket* driver_data; } ;
struct TYPE_3__ {int flags; } ;
struct bcm63xx_pcmcia_socket {int card_type; int lock; TYPE_1__ requested_state; scalar_t__ card_detected; } ;
typedef TYPE_1__ socket_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bcm63xx_pcmcia_socket*,int ) ;
 int FUNC_1 (struct bcm63xx_pcmcia_socket*,int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct pcmcia_socket *VAR_4,
         socket_state_t *VAR_5)
{
 struct bcm63xx_pcmcia_socket *VAR_6;
 unsigned long VAR_7;
 u32 VAR_8;

 VAR_6 = VAR_4->driver_data;

 FUNC_2(&VAR_6->lock, VAR_7);





 VAR_8 = FUNC_0(VAR_6, VAR_1);
 if (VAR_5->flags & VAR_3)
  VAR_8 |= VAR_2;
 else
  VAR_8 &= ~VAR_2;


 if (VAR_6->card_detected && (VAR_6->card_type & VAR_0))
  VAR_8 ^= VAR_2;

 FUNC_1(VAR_6, VAR_8, VAR_1);


 VAR_6->requested_state = *VAR_5;

 FUNC_3(&VAR_6->lock, VAR_7);

 return 0;
}
