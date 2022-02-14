
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xusb_udc {int (* read_fn ) (scalar_t__) ;scalar_t__ addr; int (* write_fn ) (scalar_t__,scalar_t__,int) ;struct xusb_ep* ep; } ;
struct xusb_ep {scalar_t__ offset; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__,int) ;
 int FUNC_2 (scalar_t__,scalar_t__,int) ;
 int FUNC_3 (scalar_t__,scalar_t__,int) ;

__attribute__((used)) static void FUNC_4(struct xusb_udc *VAR_4)
{
 struct xusb_ep *VAR_5 = &VAR_4->ep[VAR_3];
 u32 VAR_6;

 VAR_6 = VAR_4->read_fn(VAR_4->addr + VAR_5->offset)|
    VAR_2;
 VAR_4->write_fn(VAR_4->addr, VAR_5->offset, VAR_6);
 VAR_4->write_fn(VAR_4->addr, VAR_5->offset + VAR_1, 0);
 VAR_4->write_fn(VAR_4->addr, VAR_0, 1);
}
