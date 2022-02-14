
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct r592_device {int irq_lock; int dma_done; int detect_timer; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct r592_device*,int ) ;
 int FUNC_6 (struct r592_device*,int) ;
 int FUNC_7 (struct r592_device*,int ,int) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_9, void *VAR_10)
{
 struct r592_device *VAR_11 = (struct r592_device *)VAR_10;
 irqreturn_t VAR_12 = VAR_2;
 u32 VAR_13;
 u16 VAR_14, VAR_15;
 unsigned long VAR_16;
 int VAR_17;

 FUNC_8(&VAR_11->irq_lock, VAR_16);

 VAR_13 = FUNC_5(VAR_11, VAR_3);
 VAR_14 = VAR_13 >> 16;
 VAR_15 = VAR_13 & 0xFFFF;


 VAR_13 &= ~VAR_15;
 FUNC_7(VAR_11, VAR_3, VAR_13);


 VAR_15 &= (VAR_14);



 if (VAR_15 & (VAR_6 | VAR_7)) {

  bool VAR_18 = VAR_15 & VAR_6;
  VAR_12 = VAR_1;

  FUNC_2("IRQ: card %s", VAR_18 ? "added" : "removed");

  FUNC_3(&VAR_11->detect_timer,
   VAR_8 + FUNC_4(VAR_18 ? 500 : 50));
 }

 if (VAR_15 &
  (VAR_4 | VAR_5)) {
  VAR_12 = VAR_1;

  if (VAR_15 & VAR_5) {
   FUNC_2("IRQ: DMA error");
   VAR_17 = -VAR_0;
  } else {
   FUNC_1("IRQ: dma done");
   VAR_17 = 0;
  }

  FUNC_6(VAR_11, VAR_17);
  FUNC_0(&VAR_11->dma_done);
 }

 FUNC_9(&VAR_11->irq_lock, VAR_16);
 return VAR_12;
}
