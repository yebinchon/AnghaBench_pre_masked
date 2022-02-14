
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct vrc4171_socket {scalar_t__ slot; int csc_irq; int pcmcia_socket; } ;
typedef int irqreturn_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned int FUNC_0 (size_t) ;
 int FUNC_1 (int *,unsigned int) ;
 int FUNC_2 () ;
 struct vrc4171_socket* VAR_7 ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_8, void *VAR_9)
{
 struct vrc4171_socket *VAR_10;
 unsigned int VAR_11;
 irqreturn_t VAR_12 = VAR_5;
 uint16_t VAR_13;

 VAR_13 = FUNC_2();
 if (VAR_13 & VAR_2) {
  VAR_10 = &VAR_7[VAR_0];
  if (VAR_10->slot == VAR_6) {
   if (VAR_13 & (1 << VAR_10->csc_irq)) {
    VAR_11 = FUNC_0(VAR_0);
    if (VAR_11 != 0) {
     FUNC_1(&VAR_10->pcmcia_socket, VAR_11);
     VAR_12 = VAR_4;
    }
   }
  }
 }

 if (VAR_13 & VAR_3) {
  VAR_10 = &VAR_7[VAR_1];
  if (VAR_10->slot == VAR_6) {
   if (VAR_13 & (1 << VAR_10->csc_irq)) {
    VAR_11 = FUNC_0(VAR_1);
    if (VAR_11 != 0) {
     FUNC_1(&VAR_10->pcmcia_socket, VAR_11);
     VAR_12 = VAR_4;
    }
   }
  }
 }

 return VAR_12;
}
