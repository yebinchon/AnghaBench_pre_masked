
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xusb_udc {scalar_t__ addr; int (* write_fn ) (scalar_t__,scalar_t__,int ) ;int (* read_fn ) (scalar_t__) ;struct xusb_ep* ep; } ;
struct xusb_ep {scalar_t__ offset; scalar_t__ epnumber; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_4(struct xusb_udc *VAR_3)
{
 struct xusb_ep *VAR_4;
 u32 VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_4 = &VAR_3->ep[VAR_6];
  VAR_5 = VAR_3->read_fn(VAR_3->addr + VAR_4->offset);
  VAR_5 &= ~VAR_1;
  VAR_3->write_fn(VAR_3->addr, VAR_4->offset, VAR_5);
  if (VAR_4->epnumber) {

   VAR_5 = VAR_3->read_fn(VAR_3->addr + VAR_4->offset);
   VAR_5 &= ~VAR_0;
   VAR_3->write_fn(VAR_3->addr, VAR_4->offset, VAR_5);
  }
 }
}
