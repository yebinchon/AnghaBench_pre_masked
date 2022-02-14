
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct videobuf_queue {scalar_t__ dev; } ;
struct TYPE_6__ {scalar_t__ dev; } ;
struct videobuf_dma_sg_memory {TYPE_1__ dma; int magic; } ;
struct videobuf_buffer {int memory; int size; scalar_t__ boff; int bsize; int baddr; struct videobuf_dma_sg_memory* priv; } ;
struct v4l2_framebuffer {scalar_t__ base; } ;
typedef scalar_t__ dma_addr_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int VAR_3 ;



 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int FUNC_6 (TYPE_1__*,int ,scalar_t__,int) ;
 int FUNC_7 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_8 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_9 (scalar_t__,TYPE_1__*) ;

__attribute__((used)) static int FUNC_10(struct videobuf_queue *VAR_4,
        struct videobuf_buffer *VAR_5,
        struct v4l2_framebuffer *VAR_6)
{
 int VAR_7, VAR_8;
 dma_addr_t VAR_9;
 struct videobuf_dma_sg_memory *VAR_10 = VAR_5->priv;
 FUNC_1(!VAR_10);

 FUNC_2(VAR_10->magic, VAR_2);

 if (!VAR_10->dma.dev)
  VAR_10->dma.dev = VAR_4->dev;
 else
  FUNC_4(VAR_10->dma.dev != VAR_4->dev);

 switch (VAR_5->memory) {
 case 130:
 case 128:
  if (0 == VAR_5->baddr) {

   VAR_8 = FUNC_3(VAR_5->size) >> VAR_3;
   VAR_7 = FUNC_5(&VAR_10->dma,
             VAR_0,
             VAR_8);
   if (0 != VAR_7)
    return VAR_7;
  } else if (VAR_5->memory == 128) {

   VAR_7 = FUNC_7(&VAR_10->dma,
           VAR_0,
           VAR_5->baddr, VAR_5->bsize);
   if (0 != VAR_7)
    return VAR_7;
  } else {





   VAR_7 = FUNC_8(&VAR_10->dma,
            VAR_0,
            VAR_5->baddr, VAR_5->bsize);
   if (0 != VAR_7)
    return VAR_7;
  }
  break;
 case 129:
  if (((void*)0) == VAR_6)
   return -VAR_1;






  VAR_9 = (dma_addr_t)(unsigned long)VAR_6->base + VAR_5->boff;
  VAR_8 = FUNC_3(VAR_5->size) >> VAR_3;
  VAR_7 = FUNC_6(&VAR_10->dma, VAR_0,
      VAR_9, VAR_8);
  if (0 != VAR_7)
   return VAR_7;
  break;
 default:
  FUNC_0();
 }
 VAR_7 = FUNC_9(VAR_4->dev, &VAR_10->dma);
 if (0 != VAR_7)
  return VAR_7;

 return 0;
}
