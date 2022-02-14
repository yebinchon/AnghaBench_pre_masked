
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xusb_udc {scalar_t__ addr; int (* write_fn ) (scalar_t__,scalar_t__,int ) ;int (* read_fn ) (scalar_t__) ;struct xusb_ep* ep; } ;
struct xusb_ep {scalar_t__ offset; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(struct xusb_udc *VAR_2)
{
 u32 VAR_3;
 struct xusb_ep *VAR_4 = &VAR_2->ep[VAR_1];

 VAR_3 = VAR_2->read_fn(VAR_2->addr + VAR_4->offset);
 VAR_3 |= VAR_0;
 VAR_2->write_fn(VAR_2->addr, VAR_4->offset, VAR_3);
}
