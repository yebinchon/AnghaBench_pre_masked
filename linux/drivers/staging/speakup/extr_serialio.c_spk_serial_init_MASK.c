
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct old_serial_port {int baud_base; int irq; scalar_t__ port; } ;
struct TYPE_2__ {scalar_t__ port_tts; } ;


 int FUNC_0 (struct old_serial_port*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 int FUNC_1 (int *,scalar_t__,int) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_20 ;
 int FUNC_3 (int) ;
 int FUNC_4 (unsigned int,scalar_t__) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*,scalar_t__,int) ;
 struct old_serial_port* VAR_21 ;
 struct old_serial_port const* VAR_22 ;
 TYPE_1__ VAR_23 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__,int) ;
 int FUNC_9 (scalar_t__,int) ;

const struct old_serial_port *FUNC_10(int VAR_24)
{
 int VAR_25 = 9600, VAR_26 = 0;
 unsigned int VAR_27 = 0;
 int VAR_28 = VAR_2 | VAR_6 | VAR_1 | VAR_0 | VAR_3;
 const struct old_serial_port *VAR_29;
 int VAR_30;

 if (VAR_24 >= FUNC_0(VAR_21)) {
  FUNC_5("no port info for ttyS%d\n", VAR_24);
  return ((void*)0);
 }
 VAR_29 = VAR_21 + VAR_24;


 VAR_26 = VAR_29->baud_base / VAR_25;
 VAR_27 = VAR_28 & (VAR_4 | VAR_5);



 VAR_27 >>= 4;

 if (VAR_28 & VAR_7)
  VAR_27 |= VAR_15;
 if (!(VAR_28 & VAR_8))
  VAR_27 |= VAR_14;
 if (FUNC_9(VAR_29->port, 8)) {

  FUNC_5("Ports not available, trying to steal them\n");
  FUNC_1(&VAR_20, VAR_29->port, 8);
  VAR_30 = FUNC_9(VAR_29->port, 8);
  if (VAR_30) {
   FUNC_6("Unable to allocate port at %x, errno %i",
    VAR_29->port, VAR_30);
   return ((void*)0);
  }
 }




 FUNC_4(VAR_27 | VAR_13, VAR_29->port + VAR_12);
 FUNC_4(VAR_26 & 0xff, VAR_29->port + VAR_9);
 FUNC_4(VAR_26 >> 8, VAR_29->port + VAR_10);
 FUNC_4(VAR_27, VAR_29->port + VAR_12);


 FUNC_4(0, VAR_29->port + VAR_11);
 FUNC_4(VAR_18 | VAR_19, VAR_29->port + VAR_17);


 if (FUNC_2(VAR_29->port + VAR_16) == 0xff) {
  FUNC_8(VAR_29->port, 8);
  VAR_22 = ((void*)0);
  return ((void*)0);
 }

 FUNC_3(1);
 VAR_23.port_tts = VAR_29->port;
 VAR_22 = VAR_29;

 FUNC_7(VAR_29->irq);

 return VAR_29;
}
