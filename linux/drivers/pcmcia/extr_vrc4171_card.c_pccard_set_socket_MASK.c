
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct vrc4171_socket {int io_irq; int csc_irq; int lock; } ;
struct pcmcia_socket {unsigned int sock; } ;
struct TYPE_3__ {int Vpp; int Vcc; int flags; scalar_t__ io_irq; int csc_mask; } ;
typedef TYPE_1__ socket_state_t ;


 unsigned int VAR_0 ;
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (unsigned int,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct vrc4171_socket* VAR_25 ;

__attribute__((used)) static int FUNC_5(struct pcmcia_socket *VAR_26, socket_state_t *VAR_27)
{
 struct vrc4171_socket *VAR_28;
 unsigned int VAR_29;
 uint8_t VAR_30, VAR_31, VAR_32, VAR_33;

 if (VAR_26 == ((void*)0) || VAR_26->sock >= VAR_0 ||
     (VAR_27->Vpp != VAR_27->Vcc && VAR_27->Vpp != 0) ||
     (VAR_27->Vcc != 50 && VAR_27->Vcc != 33 && VAR_27->Vcc != 0))
  return -VAR_2;

 VAR_29 = VAR_26->sock;
 VAR_28 = &VAR_25[VAR_29];

 FUNC_3(&VAR_28->lock);

 VAR_30 = FUNC_2(VAR_27->Vcc);
 FUNC_1(VAR_29, VAR_1, VAR_30);

 VAR_31 = VAR_15;
 if (VAR_27->Vpp == VAR_27->Vcc)
  VAR_31 |= VAR_24;
 if (VAR_27->flags & VAR_20)
  VAR_31 |= VAR_14;
 FUNC_1(VAR_29, VAR_13, VAR_31);

 VAR_32 = 0;
 if (VAR_27->io_irq != 0)
  VAR_32 |= VAR_28->io_irq;
 if (VAR_27->flags & VAR_19)
  VAR_32 |= VAR_11;
 if (VAR_27->flags & VAR_22)
  VAR_32 &= ~VAR_12;
 else
  VAR_32 |= VAR_12;
 FUNC_1(VAR_29, VAR_10, VAR_32);

        VAR_33 = 0;
        FUNC_1(VAR_29, VAR_4, VAR_33);
 FUNC_0(VAR_29, VAR_3);
 if (VAR_27->csc_mask != 0)
  VAR_33 |= VAR_28->csc_irq << 8;
 if (VAR_27->flags & VAR_19) {
  if (VAR_27->csc_mask & VAR_23)
   VAR_33 |= VAR_9;
 } else {
  if (VAR_27->csc_mask & VAR_16)
   VAR_33 |= VAR_5;
  if (VAR_27->csc_mask & VAR_17)
   VAR_33 |= VAR_6;
 }
 if (VAR_27->csc_mask & VAR_21)
  VAR_33 |= VAR_8;
 if (VAR_27->csc_mask & VAR_18)
  VAR_33 |= VAR_7;
        FUNC_1(VAR_29, VAR_4, VAR_33);

 FUNC_4(&VAR_28->lock);

 return 0;
}
