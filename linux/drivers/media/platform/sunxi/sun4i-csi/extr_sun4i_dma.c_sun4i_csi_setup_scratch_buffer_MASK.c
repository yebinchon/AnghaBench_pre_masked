
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {unsigned int num_planes; TYPE_1__* plane_fmt; } ;
struct TYPE_5__ {int paddr; } ;
struct sun4i_csi {int ** current_buf; TYPE_3__ fmt; scalar_t__ regs; int dev; TYPE_2__ scratch; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {scalar_t__ sizeimage; } ;


 scalar_t__ FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct sun4i_csi *VAR_0,
       unsigned int VAR_1)
{
 dma_addr_t VAR_2 = VAR_0->scratch.paddr;
 unsigned int VAR_3;

 FUNC_1(VAR_0->dev,
  "No more available buffer, using the scratch buffer\n");

 for (VAR_3 = 0; VAR_3 < VAR_0->fmt.num_planes; VAR_3++) {
  FUNC_2(VAR_2, VAR_0->regs + FUNC_0(VAR_3, VAR_1));
  VAR_2 += VAR_0->fmt.plane_fmt[VAR_3].sizeimage;
 }

 VAR_0->current_buf[VAR_1] = ((void*)0);
 return 0;
}
