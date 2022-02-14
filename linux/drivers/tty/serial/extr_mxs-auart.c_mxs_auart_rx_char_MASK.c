
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u8 ;
typedef int u32 ;
struct TYPE_5__ {int overrun; int frame; int parity; int brk; int rx; } ;
struct TYPE_6__ {int read_status_mask; TYPE_1__ icount; } ;
struct mxs_auart_port {TYPE_2__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_0 (struct mxs_auart_port*,int ) ;
 int FUNC_1 (int,struct mxs_auart_port*,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,void*) ;
 int FUNC_4 (TYPE_2__*,int,int,void*,int) ;

__attribute__((used)) static void FUNC_5(struct mxs_auart_port *VAR_10)
{
 int VAR_11;
 u32 VAR_12;
 u8 VAR_13;

 VAR_13 = FUNC_0(VAR_10, VAR_4);
 VAR_12 = FUNC_0(VAR_10, VAR_5);

 VAR_11 = VAR_8;
 VAR_10->port.icount.rx++;

 if (VAR_12 & VAR_0) {
  VAR_10->port.icount.brk++;
  if (FUNC_2(&VAR_10->port))
   goto out;
 } else if (VAR_12 & VAR_3) {
  VAR_10->port.icount.parity++;
 } else if (VAR_12 & VAR_1) {
  VAR_10->port.icount.frame++;
 }




 VAR_12 &= VAR_10->port.read_status_mask;

 if (VAR_12 & VAR_0) {
  VAR_11 = VAR_6;
 } else if (VAR_12 & VAR_3)
  VAR_11 = VAR_9;
 else if (VAR_12 & VAR_1)
  VAR_11 = VAR_7;

 if (VAR_12 & VAR_2)
  VAR_10->port.icount.overrun++;

 if (FUNC_3(&VAR_10->port, VAR_13))
  goto out;

 FUNC_4(&VAR_10->port, VAR_12, VAR_2, VAR_13, VAR_11);
out:
 FUNC_1(VAR_12, VAR_10, VAR_5);
}
