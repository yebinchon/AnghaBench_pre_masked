
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ispstat_buffer {int empty; int virt_addr; int dma_addr; } ;
struct TYPE_4__ {int name; } ;
struct ispstat {scalar_t__ buf_alloc_size; scalar_t__ state; TYPE_2__ subdev; TYPE_1__* isp; struct ispstat_buffer* buf; scalar_t__ buf_processing; int * locked_buf; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device* dev; int stat_lock; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct ispstat*) ;
 unsigned int VAR_2 ;
 int FUNC_2 (struct device*,char*,int ,unsigned int,int *,int ) ;
 int FUNC_3 (struct device*,char*,int ,unsigned int) ;
 int FUNC_4 (struct device*,char*,int ) ;
 int FUNC_5 (struct device*,struct ispstat_buffer*,scalar_t__) ;
 int FUNC_6 (struct ispstat*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct ispstat *VAR_3, u32 VAR_4)
{
 struct device *VAR_5 = FUNC_1(VAR_3)
      ? ((void*)0) : VAR_3->isp->dev;
 unsigned long VAR_6;
 unsigned int VAR_7;

 FUNC_7(&VAR_3->isp->stat_lock, VAR_6);

 FUNC_0(VAR_3->locked_buf != ((void*)0));


 if (VAR_3->buf_alloc_size >= VAR_4) {
  FUNC_8(&VAR_3->isp->stat_lock, VAR_6);
  return 0;
 }

 if (VAR_3->state != VAR_1 || VAR_3->buf_processing) {
  FUNC_4(VAR_3->isp->dev,
    "%s: trying to allocate memory when busy\n",
    VAR_3->subdev.name);
  FUNC_8(&VAR_3->isp->stat_lock, VAR_6);
  return -VAR_0;
 }

 FUNC_8(&VAR_3->isp->stat_lock, VAR_6);

 FUNC_6(VAR_3);

 VAR_3->buf_alloc_size = VAR_4;

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  struct ispstat_buffer *VAR_8 = &VAR_3->buf[VAR_7];
  int VAR_9;

  VAR_9 = FUNC_5(VAR_5, VAR_8, VAR_4);
  if (VAR_9 < 0) {
   FUNC_3(VAR_3->isp->dev,
    "%s: Failed to allocate DMA buffer %u\n",
    VAR_3->subdev.name, VAR_7);
   FUNC_6(VAR_3);
   return VAR_9;
  }

  VAR_8->empty = 1;

  FUNC_2(VAR_3->isp->dev,
   "%s: buffer[%u] allocated. dma=%pad virt=%p",
   VAR_3->subdev.name, VAR_7, &VAR_8->dma_addr, VAR_8->virt_addr);
 }

 return 0;
}
