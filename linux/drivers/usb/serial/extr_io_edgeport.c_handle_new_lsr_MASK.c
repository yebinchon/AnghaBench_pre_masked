
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct edgeport_port {int shadowLSR; TYPE_1__* port; } ;
struct async_icount {int frame; int parity; int overrun; int brk; } ;
typedef int __u8 ;
struct TYPE_2__ {struct async_icount icount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int*,int) ;

__attribute__((used)) static void FUNC_1(struct edgeport_port *VAR_4, __u8 VAR_5,
       __u8 VAR_6, __u8 VAR_7)
{
 __u8 VAR_8 = (__u8) (VAR_6 & (__u8)
  (VAR_2 | VAR_3 | VAR_1 | VAR_0));
 struct async_icount *VAR_9;

 VAR_4->shadowLSR = VAR_6;

 if (VAR_8 & VAR_0) {





  VAR_8 &= (__u8)(VAR_2 | VAR_0);
 }


 if (VAR_5)
  FUNC_0(VAR_4->port, &VAR_7, 1);


 VAR_9 = &VAR_4->port->icount;
 if (VAR_8 & VAR_0)
  VAR_9->brk++;
 if (VAR_8 & VAR_2)
  VAR_9->overrun++;
 if (VAR_8 & VAR_3)
  VAR_9->parity++;
 if (VAR_8 & VAR_1)
  VAR_9->frame++;
}
