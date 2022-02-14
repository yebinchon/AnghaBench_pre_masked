
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {unsigned int start; } ;
struct platform_device {int dev; } ;
struct arm_ccn {unsigned int irq; void* xp; void* node; int num_xps; int * dev; int num_nodes; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
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
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct arm_ccn*,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (struct arm_ccn*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,struct resource*) ;
 void* FUNC_6 (int *,int ,int,int ) ;
 struct arm_ccn* FUNC_7 (int *,int,int ) ;
 int FUNC_8 (int *,unsigned int,int ,int,int ,struct arm_ccn*) ;
 struct resource* FUNC_9 (struct platform_device*,int ,int ) ;
 int FUNC_10 (struct platform_device*,struct arm_ccn*) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_14)
{
 struct arm_ccn *VAR_15;
 struct resource *VAR_16;
 unsigned int VAR_17;
 int VAR_18;

 VAR_15 = FUNC_7(&VAR_14->dev, sizeof(*VAR_15), VAR_6);
 if (!VAR_15)
  return -VAR_5;
 VAR_15->dev = &VAR_14->dev;
 FUNC_10(VAR_14, VAR_15);

 VAR_16 = FUNC_9(VAR_14, VAR_8, 0);
 VAR_15->base = FUNC_5(VAR_15->dev, VAR_16);
 if (FUNC_0(VAR_15->base))
  return FUNC_1(VAR_15->base);

 VAR_16 = FUNC_9(VAR_14, VAR_7, 0);
 if (!VAR_16)
  return -VAR_4;
 VAR_17 = VAR_16->start;


 FUNC_12(VAR_1,
   VAR_15->base + VAR_0);
 if (FUNC_11(VAR_15->base + VAR_0) &
   VAR_2) {

  FUNC_12(VAR_3,
    VAR_15->base + VAR_0);
  VAR_18 = FUNC_8(VAR_15->dev, VAR_17, VAR_13,
           VAR_9 | VAR_10,
           FUNC_4(VAR_15->dev), VAR_15);
  if (VAR_18)
   return VAR_18;

  VAR_15->irq = VAR_17;
 }




 VAR_18 = FUNC_2(VAR_15, VAR_11);
 if (VAR_18)
  return VAR_18;

 VAR_15->node = FUNC_6(VAR_15->dev, VAR_15->num_nodes, sizeof(*VAR_15->node),
     VAR_6);
 VAR_15->xp = FUNC_6(VAR_15->dev, VAR_15->num_xps, sizeof(*VAR_15->node),
          VAR_6);
 if (!VAR_15->node || !VAR_15->xp)
  return -VAR_5;

 VAR_18 = FUNC_2(VAR_15, VAR_12);
 if (VAR_18)
  return VAR_18;

 return FUNC_3(VAR_15);
}
