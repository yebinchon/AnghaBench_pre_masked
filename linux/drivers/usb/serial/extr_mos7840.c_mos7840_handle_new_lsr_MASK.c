
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct moschip_port {TYPE_1__* port; } ;
struct async_icount {int frame; int parity; int overrun; int brk; } ;
typedef int __u8 ;
struct TYPE_2__ {struct async_icount icount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(struct moschip_port *VAR_4, __u8 VAR_5)
{
 struct async_icount *VAR_6;

 if (VAR_5 & VAR_0) {





  VAR_5 &= (__u8) (VAR_2 | VAR_0);
 }


 VAR_6 = &VAR_4->port->icount;
 if (VAR_5 & VAR_0)
  VAR_6->brk++;
 if (VAR_5 & VAR_2)
  VAR_6->overrun++;
 if (VAR_5 & VAR_3)
  VAR_6->parity++;
 if (VAR_5 & VAR_1)
  VAR_6->frame++;
}
