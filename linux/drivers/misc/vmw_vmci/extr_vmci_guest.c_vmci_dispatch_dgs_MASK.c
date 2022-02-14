
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct vmci_guest_device {int * data_buffer; scalar_t__ iobase; int dev; } ;
struct TYPE_4__ {scalar_t__ resource; } ;
struct TYPE_3__ {scalar_t__ context; } ;
struct vmci_datagram {TYPE_2__ dst; TYPE_1__ src; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 unsigned int FUNC_1 (struct vmci_datagram*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,char*,unsigned int,...) ;
 int FUNC_3 (scalar_t__,int *,size_t) ;
 int FUNC_4 (int *,int *,size_t) ;
 scalar_t__ FUNC_5 (uintptr_t,size_t) ;
 int FUNC_6 (struct vmci_datagram*) ;
 int FUNC_7 (struct vmci_datagram*) ;

__attribute__((used)) static void FUNC_8(unsigned long VAR_8)
{
 struct vmci_guest_device *VAR_9 = (struct vmci_guest_device *)VAR_8;
 u8 *VAR_10 = VAR_9->data_buffer;
 struct vmci_datagram *VAR_11;
 size_t VAR_12 = VAR_6;
 size_t VAR_13 = VAR_0;
 size_t VAR_14;

 FUNC_0(VAR_6 < VAR_0);

 FUNC_3(VAR_9->iobase + VAR_1,
      VAR_9->data_buffer, VAR_13);
 VAR_11 = (struct vmci_datagram *)VAR_10;
 VAR_14 = VAR_13;

 while (VAR_11->dst.resource != VAR_5 ||
        VAR_14 > VAR_0) {
  unsigned VAR_15;





  if (VAR_11->dst.resource == VAR_5) {
   VAR_11 = (struct vmci_datagram *)FUNC_5(
    (uintptr_t)VAR_11 + 1, VAR_0);
   VAR_14 =
    (size_t)(VAR_10 +
      VAR_13 -
      (u8 *)VAR_11);
   continue;
  }

  VAR_15 = FUNC_1(VAR_11);

  if (VAR_15 <= VAR_12) {
   int VAR_16;
   if (VAR_15 > VAR_14) {
    if (VAR_14 !=
        VAR_13) {
     FUNC_4(VAR_10, VAR_10 +
      VAR_13 -
      VAR_14,
      VAR_14);
     VAR_11 = (struct vmci_datagram *)
         VAR_10;
    }

    if (VAR_13 !=
        VAR_12)
     VAR_13 =
         VAR_12;

    FUNC_3(VAR_9->iobase +
      VAR_1,
     VAR_9->data_buffer +
      VAR_14,
     VAR_13 -
      VAR_14);
   }





   if (VAR_11->src.context == VAR_4 &&
       VAR_11->dst.resource == VAR_3) {
    VAR_16 = FUNC_7(VAR_11);
   } else {
    VAR_16 = FUNC_6(VAR_11);
   }
   if (VAR_16 < VAR_7)
    FUNC_2(VAR_9->dev,
     "Datagram with resource (ID=0x%x) failed (err=%d)\n",
      VAR_11->dst.resource, VAR_16);


   VAR_11 = (struct vmci_datagram *)((u8 *)VAR_11 +
            VAR_15);
  } else {
   size_t VAR_17;





   FUNC_2(VAR_9->dev,
    "Failed to receive datagram (size=%u bytes)\n",
     VAR_15);

   VAR_17 = VAR_15 - VAR_14;
   if (VAR_13 != VAR_12)
    VAR_13 = VAR_12;

   for (;;) {
    FUNC_3(VAR_9->iobase +
      VAR_1,
     VAR_9->data_buffer,
     VAR_13);
    if (VAR_17 <= VAR_13)
     break;

    VAR_17 -= VAR_13;
   }
   VAR_11 = (struct vmci_datagram *)(VAR_10 +
            VAR_17);
  }

  VAR_14 =
      (size_t) (VAR_10 + VAR_13 -
         (u8 *)VAR_11);

  if (VAR_14 < VAR_2) {


   FUNC_3(VAR_9->iobase + VAR_1,
        VAR_9->data_buffer,
        VAR_13);
   VAR_11 = (struct vmci_datagram *)VAR_10;
   VAR_14 = VAR_13;
  }
 }
}
