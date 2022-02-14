
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct usb_request {int length; int actual; } ;
struct renesas_usb3_request {struct usb_request req; } ;
struct renesas_usb3_prd {int word1; } ;
struct renesas_usb3_ep {TYPE_1__* dma; } ;
struct TYPE_2__ {struct renesas_usb3_prd* prd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;

__attribute__((used)) static int FUNC_1(struct renesas_usb3_ep *VAR_6,
      struct renesas_usb3_request *VAR_7)
{
 struct renesas_usb3_prd *VAR_8 = VAR_6->dma->prd;
 struct usb_request *VAR_9 = &VAR_7->req;
 u32 VAR_10, VAR_11;
 int VAR_12 = 0;
 int VAR_13 = 0;

 FUNC_0();

 do {
  if (VAR_8->word1 & VAR_3)
   VAR_13 = -VAR_0;
  if (VAR_8->word1 & VAR_4)
   VAR_11 = VAR_9->length % VAR_1;
  else
   VAR_11 = VAR_1;
  VAR_10 = VAR_8->word1 & VAR_5;
  VAR_9->actual += VAR_11 - VAR_10;

  if (VAR_8->word1 & VAR_4 ||
      (VAR_12 + 1) < VAR_2)
   break;

  VAR_8++;
  VAR_12++;
 } while (1);

 return VAR_13;
}
