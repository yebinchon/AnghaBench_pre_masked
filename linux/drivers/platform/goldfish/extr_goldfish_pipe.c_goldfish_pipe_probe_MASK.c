
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct platform_device {int dev; } ;
struct goldfish_pipe_dev {scalar_t__ version; scalar_t__ base; int irq; int lock; int * magic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int *,int ,scalar_t__) ;
 struct goldfish_pipe_dev* FUNC_3 (int *,int,int ) ;
 int VAR_9 ;
 int FUNC_4 (struct platform_device*,struct goldfish_pipe_dev*) ;
 struct resource* FUNC_5 (struct platform_device*,int ,int ) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (struct resource*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_10)
{
 struct resource *VAR_11;
 struct goldfish_pipe_dev *VAR_12;

 VAR_12 = FUNC_3(&VAR_10->dev, sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return -VAR_1;

 VAR_12->magic = &VAR_9;
 FUNC_8(&VAR_12->lock);

 VAR_11 = FUNC_5(VAR_10, VAR_4, 0);
 if (!VAR_11 || FUNC_7(VAR_11) < VAR_5) {
  FUNC_1(&VAR_10->dev, "can't allocate i/o page\n");
  return -VAR_0;
 }
 VAR_12->base = FUNC_2(&VAR_10->dev, VAR_11->start, VAR_5);
 if (!VAR_12->base) {
  FUNC_1(&VAR_10->dev, "ioremap failed\n");
  return -VAR_0;
 }

 VAR_11 = FUNC_5(VAR_10, VAR_3, 0);
 if (!VAR_11)
  return -VAR_0;

 VAR_12->irq = VAR_11->start;
 FUNC_9(VAR_7, VAR_12->base + VAR_8);
 VAR_12->version = FUNC_6(VAR_12->base + VAR_8);
 if (FUNC_0(VAR_12->version < VAR_6))
  return -VAR_0;

 return FUNC_4(VAR_10, VAR_12);
}
