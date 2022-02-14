
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int brk; } ;
struct TYPE_4__ {int lock; int read_status_mask; TYPE_1__ icount; } ;
struct sa1100_port {TYPE_2__ port; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (struct sa1100_port*) ;
 int FUNC_2 (struct sa1100_port*,unsigned int) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_3 (struct sa1100_port*) ;
 int FUNC_4 (struct sa1100_port*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_7, void *VAR_8)
{
 struct sa1100_port *VAR_9 = VAR_8;
 unsigned int VAR_10, VAR_11 = 0;

 FUNC_5(&VAR_9->port.lock);
 VAR_10 = FUNC_1(VAR_9);
 VAR_10 &= FUNC_0(VAR_9->port.read_status_mask) | ~VAR_6;
 do {
  if (VAR_10 & (VAR_4 | VAR_5)) {

   if (VAR_10 & VAR_5)
    FUNC_2(VAR_9, VAR_5);
   FUNC_3(VAR_9);
  }


  if (VAR_10 & (VAR_2 | VAR_3))
   FUNC_2(VAR_9, VAR_10 & (VAR_2 | VAR_3));

  if (VAR_10 & VAR_2)
   VAR_9->port.icount.brk++;

  if (VAR_10 & VAR_3)
   FUNC_7(&VAR_9->port);

  if (VAR_10 & VAR_6)
   FUNC_4(VAR_9);
  if (VAR_11++ > VAR_1)
   break;
  VAR_10 = FUNC_1(VAR_9);
  VAR_10 &= FUNC_0(VAR_9->port.read_status_mask) |
     ~VAR_6;
 } while (VAR_10 & (VAR_6 | VAR_4 | VAR_5));
 FUNC_6(&VAR_9->port.lock);

 return VAR_0;
}
