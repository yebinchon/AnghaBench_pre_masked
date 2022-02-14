
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_complete_t ;
typedef int u8 ;
struct usb_device {scalar_t__ speed; } ;
struct urb {int interval; unsigned int transfer_flags; unsigned int transfer_buffer; int pipe; int transfer_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (unsigned int,int ,unsigned long) ;
 unsigned int FUNC_2 (struct usb_device*,unsigned int,int ,int *) ;
 struct urb* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct urb*,struct usb_device*,int,int *,unsigned long,int ,int *) ;
 int FUNC_5 (struct urb*,struct usb_device*,int,int *,unsigned long,int ,int *,int ) ;
 int FUNC_6 (struct urb*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static struct urb *FUNC_8(
 struct usb_device *VAR_6,
 int VAR_7,
 unsigned long VAR_8,
 unsigned VAR_9,
 unsigned VAR_10,
 u8 VAR_11,
 usb_complete_t VAR_12)
{
 struct urb *VAR_13;

 VAR_13 = FUNC_3(0, VAR_0);
 if (!VAR_13)
  return VAR_13;

 if (VAR_11)
  FUNC_5(VAR_13, VAR_6, VAR_7, ((void*)0), VAR_8, VAR_12,
    ((void*)0), VAR_11);
 else
  FUNC_4(VAR_13, VAR_6, VAR_7, ((void*)0), VAR_8, VAR_12,
    ((void*)0));

 VAR_13->interval = (VAR_6->speed == VAR_5)
   ? (VAR_2 << 3)
   : VAR_2;
 VAR_13->transfer_flags = VAR_9;
 if (FUNC_7(VAR_7))
  VAR_13->transfer_flags |= VAR_4;

 if ((VAR_8 + VAR_10) == 0)
  return VAR_13;

 if (VAR_13->transfer_flags & VAR_3)
  VAR_13->transfer_buffer = FUNC_2(VAR_6, VAR_8 + VAR_10,
   VAR_0, &VAR_13->transfer_dma);
 else
  VAR_13->transfer_buffer = FUNC_0(VAR_8 + VAR_10, VAR_0);

 if (!VAR_13->transfer_buffer) {
  FUNC_6(VAR_13);
  return ((void*)0);
 }



 if (VAR_10) {
  FUNC_1(VAR_13->transfer_buffer, VAR_1, VAR_10);
  VAR_13->transfer_buffer += VAR_10;
  if (VAR_13->transfer_flags & VAR_3)
   VAR_13->transfer_dma += VAR_10;
 }



 FUNC_1(VAR_13->transfer_buffer,
   FUNC_7(VAR_13->pipe) ? VAR_1 : 0,
   VAR_8);
 return VAR_13;
}
