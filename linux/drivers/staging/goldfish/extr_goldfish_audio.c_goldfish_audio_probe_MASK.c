
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct platform_device {int dev; int name; } ;
struct goldfish_audio {scalar_t__ irq; int buffer_phys; scalar_t__ read_supported; scalar_t__ buffer_virt; scalar_t__ read_buffer; scalar_t__ write_buffer2; scalar_t__ write_buffer1; int reg_base; int wait; int lock; } ;
typedef int dma_addr_t ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct goldfish_audio* VAR_15 ;
 scalar_t__ FUNC_0 (struct goldfish_audio*,int ) ;
 int FUNC_1 (struct goldfish_audio*,int ,int ,int) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,int ,int ) ;
 struct goldfish_audio* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *,scalar_t__,int ,int ,int ,struct goldfish_audio*) ;
 scalar_t__ FUNC_6 (int *,int ,int*,int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (struct platform_device*,int ) ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;
 int FUNC_11 (struct platform_device*,struct goldfish_audio*) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_18)
{
 int VAR_19;
 struct resource *VAR_20;
 struct goldfish_audio *VAR_21;
 dma_addr_t VAR_22;

 VAR_21 = FUNC_4(&VAR_18->dev, sizeof(*VAR_21), VAR_10);
 if (!VAR_21)
  return -VAR_9;
 FUNC_12(&VAR_21->lock);
 FUNC_7(&VAR_21->wait);
 FUNC_11(VAR_18, VAR_21);

 VAR_20 = FUNC_10(VAR_18, VAR_11, 0);
 if (!VAR_20) {
  FUNC_2(&VAR_18->dev, "platform_get_resource failed\n");
  return -VAR_8;
 }
 VAR_21->reg_base = FUNC_3(&VAR_18->dev, VAR_20->start, VAR_13);
 if (!VAR_21->reg_base)
  return -VAR_9;

 VAR_21->irq = FUNC_9(VAR_18, 0);
 if (VAR_21->irq < 0)
  return -VAR_8;
 VAR_21->buffer_virt = FUNC_6(&VAR_18->dev,
      VAR_7,
      &VAR_22, VAR_10);
 if (!VAR_21->buffer_virt) {
  FUNC_2(&VAR_18->dev, "allocate buffer failed\n");
  return -VAR_9;
 }
 VAR_21->buffer_phys = VAR_22;
 VAR_21->write_buffer1 = VAR_21->buffer_virt;
 VAR_21->write_buffer2 = VAR_21->buffer_virt + VAR_14;
 VAR_21->read_buffer = VAR_21->buffer_virt + 2 * VAR_14;

 VAR_19 = FUNC_5(&VAR_18->dev, VAR_21->irq, VAR_17,
          VAR_12, VAR_18->name, VAR_21);
 if (VAR_19) {
  FUNC_2(&VAR_18->dev, "request_irq failed\n");
  return VAR_19;
 }

 VAR_19 = FUNC_8(&VAR_16);
 if (VAR_19) {
  FUNC_2(&VAR_18->dev,
   "misc_register returned %d in goldfish_audio_init\n",
        VAR_19);
  return VAR_19;
 }

 FUNC_1(VAR_21, VAR_3,
        VAR_4, VAR_22);
 VAR_22 += VAR_14;

 FUNC_1(VAR_21, VAR_5,
        VAR_6, VAR_22);

 VAR_22 += VAR_14;

 VAR_21->read_supported = FUNC_0(VAR_21, VAR_0);
 if (VAR_21->read_supported)
  FUNC_1(VAR_21, VAR_1,
         VAR_2, VAR_22);

 VAR_15 = VAR_21;
 return 0;
}
