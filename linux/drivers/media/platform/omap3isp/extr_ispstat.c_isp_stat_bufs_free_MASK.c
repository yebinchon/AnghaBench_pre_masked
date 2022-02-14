
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ispstat_buffer {int empty; int * virt_addr; scalar_t__ dma_addr; int sgt; } ;
struct TYPE_4__ {int name; } ;
struct ispstat {int * active_buf; int buf_alloc_size; TYPE_2__ subdev; TYPE_1__* isp; struct ispstat_buffer* buf; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device* dev; } ;


 scalar_t__ FUNC_0 (struct ispstat*) ;
 unsigned int VAR_0 ;
 int FUNC_1 (struct device*,char*,int ) ;
 int FUNC_2 (struct device*,int ,int *,scalar_t__) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ispstat *VAR_1)
{
 struct device *VAR_2 = FUNC_0(VAR_1)
      ? ((void*)0) : VAR_1->isp->dev;
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  struct ispstat_buffer *VAR_4 = &VAR_1->buf[VAR_3];

  if (!VAR_4->virt_addr)
   continue;

  FUNC_3(&VAR_4->sgt);

  FUNC_2(VAR_2, VAR_1->buf_alloc_size, VAR_4->virt_addr,
      VAR_4->dma_addr);

  VAR_4->dma_addr = 0;
  VAR_4->virt_addr = ((void*)0);
  VAR_4->empty = 1;
 }

 FUNC_1(VAR_1->isp->dev, "%s: all buffers were freed.\n",
  VAR_1->subdev.name);

 VAR_1->buf_alloc_size = 0;
 VAR_1->active_buf = ((void*)0);
}
