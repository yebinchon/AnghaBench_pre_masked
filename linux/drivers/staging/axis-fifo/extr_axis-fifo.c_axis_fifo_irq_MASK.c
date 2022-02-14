
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct axis_fifo {scalar_t__ base_addr; int dt_device; int write_queue; int read_queue; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_0 (int ,char*,...) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned int,scalar_t__) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_17, void *VAR_18)
{
 struct axis_fifo *VAR_19 = (struct axis_fifo *)VAR_18;
 unsigned int VAR_20;

 do {
  VAR_20 = FUNC_1(VAR_19->base_addr +
           VAR_1) &
           FUNC_1(VAR_19->base_addr
           + VAR_16);
  if (VAR_20 & VAR_3) {



   FUNC_3(&VAR_19->read_queue);


   FUNC_2(VAR_3 & VAR_2,
      VAR_19->base_addr + VAR_16);
  } else if (VAR_20 & VAR_10) {



   FUNC_3(&VAR_19->write_queue);

   FUNC_2(VAR_10 & VAR_2,
      VAR_19->base_addr + VAR_16);
  } else if (VAR_20 & VAR_12) {


   FUNC_2(VAR_12 & VAR_2,
      VAR_19->base_addr + VAR_16);
  } else if (VAR_20 & VAR_11) {


   FUNC_2(VAR_11 & VAR_2,
      VAR_19->base_addr + VAR_16);
  } else if (VAR_20 & VAR_5) {


   FUNC_2(VAR_5 & VAR_2,
      VAR_19->base_addr + VAR_16);
  } else if (VAR_20 & VAR_4) {


   FUNC_2(VAR_4 & VAR_2,
      VAR_19->base_addr + VAR_16);
  } else if (VAR_20 & VAR_14) {


   FUNC_2(VAR_14 & VAR_2,
      VAR_19->base_addr + VAR_16);
  } else if (VAR_20 & VAR_9) {


   FUNC_2(VAR_9 & VAR_2,
      VAR_19->base_addr + VAR_16);
  } else if (VAR_20 & VAR_8) {

   FUNC_0(VAR_19->dt_device,
    "receive under-read interrupt\n");

   FUNC_2(VAR_8 & VAR_2,
      VAR_19->base_addr + VAR_16);
  } else if (VAR_20 & VAR_6) {

   FUNC_0(VAR_19->dt_device,
    "receive over-read interrupt\n");

   FUNC_2(VAR_6 & VAR_2,
      VAR_19->base_addr + VAR_16);
  } else if (VAR_20 & VAR_7) {

   FUNC_0(VAR_19->dt_device,
    "receive underrun error interrupt\n");

   FUNC_2(VAR_7 & VAR_2,
      VAR_19->base_addr + VAR_16);
  } else if (VAR_20 & VAR_13) {

   FUNC_0(VAR_19->dt_device,
    "transmit overrun error interrupt\n");

   FUNC_2(VAR_13 & VAR_2,
      VAR_19->base_addr + VAR_16);
  } else if (VAR_20 & VAR_15) {

   FUNC_0(VAR_19->dt_device,
    "transmit length mismatch error interrupt\n");

   FUNC_2(VAR_15 & VAR_2,
      VAR_19->base_addr + VAR_16);
  } else if (VAR_20) {

   FUNC_0(VAR_19->dt_device,
    "unknown interrupt(s) 0x%x\n",
    VAR_20);

   FUNC_2(VAR_2,
      VAR_19->base_addr + VAR_16);
  }
 } while (VAR_20);

 return VAR_0;
}
