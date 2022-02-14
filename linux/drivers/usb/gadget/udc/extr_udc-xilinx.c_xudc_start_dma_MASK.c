
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xusb_udc {int (* read_fn ) (scalar_t__) ;int dev; scalar_t__ addr; int (* write_fn ) (scalar_t__,int ,int) ;} ;
struct xusb_ep {struct xusb_udc* udc; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__,int ,int) ;
 int FUNC_2 (scalar_t__,int ,int) ;
 int FUNC_3 (scalar_t__,int ,int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct xusb_ep *VAR_8, dma_addr_t VAR_9,
     dma_addr_t VAR_10, u32 VAR_11)
{
 struct xusb_udc *VAR_12 = VAR_8->udc;
 int VAR_13 = 0;
 u32 VAR_14 = 500;
 u32 VAR_15;






 VAR_12->write_fn(VAR_12->addr, VAR_5, VAR_9);
 VAR_12->write_fn(VAR_12->addr, VAR_2, VAR_10);
 VAR_12->write_fn(VAR_12->addr, VAR_6, VAR_11);






 do {
  VAR_15 = VAR_12->read_fn(VAR_12->addr + VAR_7);
  if (!(VAR_15 & VAR_3))
   break;





  VAR_14--;
  if (!VAR_14) {
   FUNC_0(VAR_12->dev, "DMA timeout\n");
   return -VAR_1;
  }
  FUNC_6(1);
 } while (1);

 if ((VAR_12->read_fn(VAR_12->addr + VAR_7) &
     VAR_4) == VAR_4){
  FUNC_0(VAR_12->dev, "DMA Error\n");
  VAR_13 = -VAR_0;
 }

 return VAR_13;
}
