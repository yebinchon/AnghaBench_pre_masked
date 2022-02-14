
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int tmp ;
struct tps6586x {int irq; int* mask_reg; TYPE_1__* dev; int irq_domain; int irq_lock; } ;
struct TYPE_5__ {int of_node; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_1__*,char*,...) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int,int ,int,int) ;
 int FUNC_4 (int ,int,int,int *,struct tps6586x*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,int *,int ,int ,char*,struct tps6586x*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (TYPE_1__*,int ,int,int *) ;
 int FUNC_8 (TYPE_1__*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_9(struct tps6586x *VAR_7, int VAR_8,
           int VAR_9)
{
 int VAR_10, VAR_11;
 u8 VAR_12[4];
 int VAR_13;
 int VAR_14 = FUNC_0(VAR_6);

 VAR_7->irq = VAR_8;

 FUNC_5(&VAR_7->irq_lock);
 for (VAR_10 = 0; VAR_10 < 5; VAR_10++) {
  VAR_7->mask_reg[VAR_10] = 0xff;
  FUNC_8(VAR_7->dev, VAR_3 + VAR_10, 0xff);
 }

 FUNC_7(VAR_7->dev, VAR_2, sizeof(VAR_12), VAR_12);

 if (VAR_9 > 0) {
  VAR_13 = FUNC_3(VAR_9, 0, VAR_14, -1);
  if (VAR_13 < 0) {
   FUNC_1(VAR_7->dev,
    "Failed to alloc IRQs: %d\n", VAR_13);
   return VAR_13;
  }
 } else {
  VAR_13 = 0;
 }

 VAR_7->irq_domain = FUNC_4(VAR_7->dev->of_node,
    VAR_14, VAR_13, &VAR_4,
    VAR_7);
 if (!VAR_7->irq_domain) {
  FUNC_1(VAR_7->dev, "Failed to create IRQ domain\n");
  return -VAR_0;
 }
 VAR_11 = FUNC_6(VAR_8, ((void*)0), VAR_5, VAR_1,
       "tps6586x", VAR_7);

 if (!VAR_11)
  FUNC_2(VAR_7->dev, 1);

 return VAR_11;
}
