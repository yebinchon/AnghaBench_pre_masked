
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int flags; int start; } ;
struct platform_device {int dev; } ;
struct net2272 {int base_addr; int dev; int base_shift; } ;
typedef int resource_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 scalar_t__ FUNC_0 (struct net2272*) ;
 int VAR_15 ;
 int FUNC_1 (struct net2272*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,char*) ;
 int VAR_16 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct net2272*,unsigned int) ;
 struct net2272* FUNC_8 (int *,int ) ;
 int FUNC_9 (struct net2272*,int ) ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;
 int FUNC_11 (struct platform_device*,struct net2272*) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (struct resource*) ;

__attribute__((used)) static int
FUNC_15(struct platform_device *VAR_17)
{
 struct net2272 *VAR_18;
 int VAR_19;
 unsigned int VAR_20;
 resource_size_t VAR_21, VAR_22;
 struct resource *VAR_23, *VAR_24, *VAR_25;

 VAR_25 = FUNC_10(VAR_17, VAR_5, 0);
 VAR_23 = FUNC_10(VAR_17, VAR_10, 0);
 VAR_24 = FUNC_10(VAR_17, VAR_4, 0);
 if (!VAR_25 || !VAR_23) {
  FUNC_3(&VAR_17->dev, "must provide irq/base addr");
  return -VAR_3;
 }

 VAR_18 = FUNC_8(&VAR_17->dev, VAR_25->start);
 if (FUNC_0(VAR_18))
  return FUNC_1(VAR_18);

 VAR_20 = 0;
 if (VAR_25->flags & VAR_6)
  VAR_20 |= VAR_14;
 if (VAR_25->flags & VAR_8)
  VAR_20 |= VAR_11;
 if (VAR_25->flags & VAR_7)
  VAR_20 |= VAR_12;
 if (VAR_25->flags & VAR_9)
  VAR_20 |= VAR_13;

 VAR_21 = VAR_23->start;
 VAR_22 = FUNC_14(VAR_23);
 if (VAR_24)
  VAR_18->base_shift = VAR_24->start;

 if (!FUNC_13(VAR_21, VAR_22, VAR_16)) {
  FUNC_2(VAR_18->dev, "get request memory region!\n");
  VAR_19 = -VAR_1;
  goto err;
 }
 VAR_18->base_addr = FUNC_5(VAR_21, VAR_22);
 if (!VAR_18->base_addr) {
  FUNC_2(VAR_18->dev, "can't map memory\n");
  VAR_19 = -VAR_2;
  goto err_req;
 }

 VAR_19 = FUNC_7(VAR_18, VAR_13);
 if (VAR_19)
  goto err_io;

 FUNC_11(VAR_17, VAR_18);
 FUNC_4(&VAR_17->dev, "running in 16-bit, %sbyte swap local bus mode\n",
  (FUNC_9(VAR_18, VAR_15) & (1 << VAR_0)) ? "" : "no ");

 return 0;

 err_io:
 FUNC_6(VAR_18->base_addr);
 err_req:
 FUNC_12(VAR_21, VAR_22);
 err:
 return VAR_19;
}
