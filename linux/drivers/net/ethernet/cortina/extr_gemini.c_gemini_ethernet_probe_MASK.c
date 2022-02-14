
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct gemini_ethernet {int freeq_lock; int irq_lock; scalar_t__ base; struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,char*,int,int) ;
 scalar_t__ FUNC_5 (struct device*,struct resource*) ;
 struct gemini_ethernet* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (struct device*) ;
 struct resource* FUNC_8 (struct platform_device*,int ,int ) ;
 int FUNC_9 (struct platform_device*,struct gemini_ethernet*) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_6)
{
 struct device *VAR_7 = &VAR_6->dev;
 struct gemini_ethernet *VAR_8;
 unsigned int VAR_9 = 5;
 struct resource *VAR_10;
 u32 VAR_11;


 VAR_8 = FUNC_6(VAR_7, sizeof(*VAR_8), VAR_3);
 if (!VAR_8)
  return -VAR_2;
 VAR_10 = FUNC_8(VAR_6, VAR_5, 0);
 if (!VAR_10)
  return -VAR_1;
 VAR_8->base = FUNC_5(VAR_7, VAR_10);
 if (FUNC_0(VAR_8->base))
  return FUNC_1(VAR_8->base);
 VAR_8->dev = VAR_7;


 do {
  FUNC_12(2);
  VAR_11 = FUNC_10(VAR_8->base + VAR_4);
  FUNC_2();
 } while (!VAR_11 && --VAR_9);
 if (!VAR_9) {
  FUNC_3(VAR_7, "failed to reset ethernet\n");
  return -VAR_0;
 }
 FUNC_4(VAR_7, "Ethernet device ID: 0x%03x, revision 0x%01x\n",
   (VAR_11 >> 4) & 0xFFFU, VAR_11 & 0xFU);

 FUNC_11(&VAR_8->irq_lock);
 FUNC_11(&VAR_8->freeq_lock);


 FUNC_9(VAR_6, VAR_8);


 return FUNC_7(VAR_7);
}
